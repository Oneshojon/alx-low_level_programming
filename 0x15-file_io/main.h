#ifndef main_h
#define main_h
#include <stddef.h>
#include <stdio.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int exit_code, const char *format, ...);
void print_error(int exit_code, const char *message, ...);
int main(int argc, char *argv[]);
#endif
