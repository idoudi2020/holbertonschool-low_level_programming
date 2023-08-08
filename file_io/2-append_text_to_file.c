#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int file, len = 0, write_b = 0;

  if (!filename)
    {
      return (-1);
    }

  file = open(filename, O_WRONLY | O_APPEND);
  if (file == -1)
    {
      return (-1);
    }
  if (text_content)
    {
      len = strlen(text_content);
      write_b = write(file, text_content, len);
      if (write_b == -1)
	{
	  close(file);
	  return (-1);
	}
    }
  close(file);
  return (1);
}
