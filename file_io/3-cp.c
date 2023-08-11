#include "main.h"

/**
 * closefiles - function closes two file descriptors and handles errors
 * @file_from: file descriptor of the source file
 * @file_to: file descriptor of the destination file
 *
 */
void closefiles(int file_from, int file_to)
{
  if (close(file_from) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
      exit(100);
    }
  if (close(file_to) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
      exit(100);
    }
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success
 *
 */

int main(int argc, const char *argv[])
{
  int file_to, file_from, read_b = 0, write_b = 0;
  char buffer[BUFFER_SIZE];

  if (argc != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }
  file_from = open(argv[1], O_RDONLY);
  if (file_from == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
      exit(98);
    }
  file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
  if (file_to == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
      close(file_from);
      exit(99);
    }

  while ((read_b = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
      write_b = write(file_to, buffer, read_b);
      if (write_b != read_b)
	{
	  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	  close(file_from), close(file_to);
	  exit(99);
	}
    }
  if (read_b < 0)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
      close(file_from), close(file_to);
      exit(98);
    }
  closefiles(file_from, file_to);
  return (0);
}
