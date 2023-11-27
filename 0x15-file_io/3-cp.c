#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point of the program.
 * @program_name: Name of the program
 * Return: Exit status.
 */

void display_usage(char *program_name);
int open_source_file(char *filename);
int open_destination_file(char *filename);
void copy_file_content(int source_fd, int dest_fd);
void handle_error(char *message, char *filename, int source_fd, int dest_fd);

int main(int argc, char *argv[])
{
int source_fd, dest_fd;

if (argc != 3)
{
display_usage(argv[0]);
exit(97);
}

source_fd = open_source_file(argv[1]);
dest_fd = open_destination_file(argv[2]);

copy_file_content(source_fd, dest_fd);

close(source_fd);
close(dest_fd);

return (0);
}

/**
 * display_usage - Displays the correct usage of the program.
 * @program_name: The name of the program.
 */

void display_usage(char *program_name)
{
dprintf(2, "Usage: %s file_from file_to\n", program_name);
}

/**
 * open_source_file - Opens the source file for reading.
 * @filename: The name of the source file.
 * Return: The file descriptor of the opened source file.
 */

int open_source_file(char *filename)
{
int source_fd = open(filename, O_RDONLY);
if (source_fd == -1)
{
handle_error("Error: Can't read from file", filename, -1, -1);
}
return (source_fd);
}

/**
 * open_destination_file - Opens the destination file for writing.
 * @filename: The name of the destination file.
 * Return: The file descriptor of the opened destination file.
 */

int open_destination_file(char *filename)
{
int dest_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (dest_fd == -1)
{
handle_error("Error: Can't write to", filename, -1, -1);
}
return (dest_fd);
}

/**
 * copy_file_content - Copies the content from source file to destination file.
 * @source_fd: File descriptor of the source file.
 * @dest_fd: File descriptor of the destination file.
 */

void copy_file_content(int source_fd, int dest_fd)
{
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
handle_error("Error: Can't write to", "", source_fd, dest_fd);
}
}

if (bytes_read == -1)
{
handle_error("Error: Can't read from file", "", source_fd, dest_fd);
}
}

/**
 * handle_error - Handles errors, displays error message,exits program.
 * @message: The error message.
 * @filename: The relevant filename.
 * @source_fd: File descriptor of the source file.
 * @dest_fd: File descriptor of the destination file.
 */

void handle_error(char *message, char *filename, int source_fd, int dest_fd)

{
dprintf(2, "%s %s\n", message, filename);
if (source_fd != -1)
close(source_fd);
if (dest_fd != -1)
close(dest_fd);
exit(99);
}
