#ifndef FILE_H
#define FILE_H

int _putchar(char c);

/* Project functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif