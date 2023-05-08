#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: pointer to character "file to read from"
 * @letters: number of letters that should be read and printed
 * Return: 0 if the file doesn't exist, can't be opened or the
 * writing process fails
 * else the number of bytes read is returned
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *stock;
	int fo;
	ssize_t fr, fw;

	if (filename == NULL)
		return (0);
	stock = malloc(sizeof(char) * letters);
	if (stock == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	fr = read(fo, stock, letters);
	fw = write(STDOUT_FILENO, stock, letters);
	if (fo == -1 || fr == -1 || fw == -1)
	{
		free(stock);
		close(fd);
		return (0);
	}
	free(stock);
	close(fo);
	return (fr);
}
