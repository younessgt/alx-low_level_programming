#include "main.h"
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
	mode_t UGO = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fo1 = open(argv[1], O_RDONLY);
	if (fo1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fo2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, UGO);
	if (fo2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((fr = read(fo1, stock, 1024)) > 0)
	{
		if (fr == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fw = write(fo2, stock, fr);
		if (fw == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fo1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fo1);
		exit(100);
	}
	if (close(fo2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fo2);
		exit(100);
	}
	close(fo1);
	close(fo2);
	return (0);
}
