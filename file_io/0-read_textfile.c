#include "main.h"

/**
 *read_textfile -reads text from a file and prints it
 *@filename: name of file to read
 *@letters : number of bytes to read
 *
 *Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
  int file;
    ssize_t bytes;
    char buf[BUFFER_SIZE * 8];
    if (!filename || !letters)
	return (0);
    file = open(filename, O_RDONLY);
    if (file == -1)
      {
	return (0);
      }
    bytes = read(file, &buf[0], lettres);
    bytes = write(STDOUT_FILENO, &buf[0], bytes);
    close (file);

    return (bytes);
}
