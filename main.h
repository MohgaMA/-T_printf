#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int print_buf(char *buf, unsigned int nbuf);
int _strlen(const char *s);
int print_buf(char *buf, unsigned int nbuf);
#endif
