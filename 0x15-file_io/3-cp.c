#include "main.h"
/**
 * close_file - function that print an error when the file fail to close
 * @f: value of the file descriptor
 * Return: nothing
 */
void close_file(int f)
{
	dprintf(2, "Error: Can't close fd %d\n", f);
	exit(100);
}
/**
 * file_err - function that print error
 * @file: name file
 * @i: error value
 * Return: nothing
 */
void file_err(char *file, int i)
{
	switch (i)
	{
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", file);
			exit(98);
		case 99:
			dprintf(2, "Error: Can't write to %s\n", file);
			exit(99);
	}
}
/**
 * main - entry point : coping the content of file to another file
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int fo1, fo2;
	ssize_t fr, fw;
	char stock[1024];
/*	mode_t UGO = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);*/

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fo1 = open(argv[1], O_RDONLY);
	if (fo1 == -1)
		file_err(argv[1], 98);
	fo2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fo2 == -1)
		file_err(argv[2], 99);
	while ((fr = read(fo1, stock, 1024)) != 0)
	{
		if (fr == -1)
			file_err(argv[1], 98);
		fw = write(fo2, stock, fr);
		if (fw == -1)
			file_err(argv[2], 99);
	}
	if (close(fo1) == -1)
		close_file(fo1);
	close(fo1);
	if (close(fo2) == -1)
		close_file(fo2);
	close(fo2);
	return (0);
}
