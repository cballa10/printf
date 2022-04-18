#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
{
   (void) format;
   return printf("Test\n");
}
