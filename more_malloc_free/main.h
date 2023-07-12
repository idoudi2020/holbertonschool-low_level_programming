#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *_strcat(char *dest, char *src);
char *_strcpy(char *v, char *src);
char *_strncat(char *dest, char *src, int n);
#endif
