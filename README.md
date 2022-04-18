# 0X11. C - printf

# Description:
This is a team project where we learn how to use git in a team setting, together with the complexities of printf.

_printf replicates the C standard library printf() function.

# Prototype:
int _printf(const char *format, ...);

# Usage:
  - Prints a string to the standard output, according to a given format

  - All files will be compiled on Ubuntu 20.04 LTS using gcc, with the command -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
 
# Examples:
_printf("This is a number: %d", 10) prints "This is a number: 10"

_printf("This is a team project\n") prints "This is a team project", followed by a new line

# Tasks:
These are the project's task;

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
  - Write a function that produces output according to a format.
        
        c : converts to character
        
        s : converts to string
        
1. Education is when you read the fine print. Experience is what you get if you don't
  - Handle the following conversion specifiers:

        d : converts input into a base 10 integer
        
        i : converts input into an integer
        
2. Just because it's in print doesn't mean it's the gospel
   - Create a man page for your function
   
