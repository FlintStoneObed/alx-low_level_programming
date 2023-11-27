#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
void display_usage(char *program_name);
int open_source_file(char *filename);
int open_destination_file(char *filename);
void copy_file_content(int source_fd, int dest_fd);
void handle_error(char *message, char *filename, int source_fd, int dest_fd);

#endif
