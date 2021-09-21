# Libft
## Introduction

Libft is a project for Standard C library that override a set of their functions and must behave the same as the originals.

## What do I learn?

The base of C, with pointers, memory allocation and basic data structure operations.

### Part 1 - Libc functions

Re-code a set of the `libc` functions, as defined in their `man`. The functions will need to present the same prototype and behaviors as the originals

- [x] [`ft_isalpha`](src/ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](src/ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](src/ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](src/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](src/ft_isprint.c)	- checks for any printable character.
- [x] [`ft_strlen`](src/ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](src/ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](src/ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](src/ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](src/ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](src/ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](src/ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_toupper`](src/ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](src/ft_tolower.c)	- convert char to lowercase.
- [x] [`ft_strchr`](src/ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](src/ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](src/ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](src/ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](src/ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](src/ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_atoi`](src/ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_strdup`](src/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.
- [x] [`ft_calloc`](src/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

###  Part 2 - Additional functions

This part has a set of functions that are either not included in the libc, or included in a different form.

- [x] [`ft_substr`](src/ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](src/ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](src/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](src/ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](src/ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](src/ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](src/ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](src/ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](src/ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](src/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](src/ft_putnbr_fd.c)	- output a number to a file descriptor.

## Make

Inside `src` directory

| Command       | Usage                                                                          |
| ------------- | ------------------------------------------------------------------------------ |
| `make`        | creates `.o` files for each function as well as the main library file, libft.a |
| `make clean`  | removes the `.o` files used to create the library                              |
| `make fclean` | removes the `.o` & `.a` files used to create the library                       |
| `make re`     | removes all `.o` & `.a` files, then remakes them                               |
