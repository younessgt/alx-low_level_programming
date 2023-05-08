#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the pointer
 * Return: i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * create_file -  function that creates a file
 * @filename: file to create
 * @text_content: text that should be written in the file
 * Return: 1 (success) -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int s, fo;
	ssize_t fw;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo == -1)
		return (-1);
	if (text_content != NULL)
	{
		s = _strlen(text_content);
		fw = write(fo, text_content, s);
		if (fw == -1)
		{
			close(fo);
			return (-1);
		}
	}
	close(fo);
	return (1);
}
