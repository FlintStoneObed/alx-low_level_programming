/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to char pointer - the string
 * @to: string to set @s to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
