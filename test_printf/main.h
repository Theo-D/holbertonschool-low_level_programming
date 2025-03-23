#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void printNil(void);
int _putchar(char c);
void printChar(va_list args);
void printStr(va_list args);
void printFloat(va_list args, unsigned int decimal);
void printInt(va_list args);

typedef struct printForm {
	char formSpec;
	void (*printX)(va_list args);
} printForm_t;

#endif
