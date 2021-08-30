# Libft
An implementation of libc functions from scratch.

## 🗂 Table of Contents
- [Libft](#libft)
	- [🗂 Table of Contents](#-table-of-contents)
	- [🧐 About](#-about)
	- [🏁 Getting Started](#-getting-started)
			- [⚙️ Installing](#️-installing)
	- [🎈 How to Use](#-how-to-use)
			- [👁️‍🗨️ Demonstration](#️️-demonstration)
	- [📋 Available Functions and Descriptions](#-available-functions-and-descriptions)
	- [🏫 42 École | 42 São Paulo](#-42-école--42-são-paulo)

## 🧐 About
This is an implementation of libc functions from scratch. This project is part of 42 École/ 42 SP curriculum.\
Topics such as memory allocation, ASCII table, string manipulation, and others were addressed.

## 🏁 Getting Started
A C compiler such as `gcc` or `clang` is needed.

#### ⚙️ Installing
To compile the entire library, clone the repo, and run the commad `make`.
```
$ git clone https://github.com/filipebafica/libft.git
$ cd libft
$ make
```
This is going to generate a `libft.a` file that you can compile with your source code.
```
$ gcc my_source.c -I ./libft/includes ./libft/libft.a
$ ./a.out
```
## 🎈 How to Use
Just call the desired function (go to [Available Functions and Descriptions](#-available-functions-and-descriptions) to see all available functions).
```
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strjoin("up the ", "irons!"));
	return (0);
}
```
#### 👁️‍🗨️ Demonstration
To see a demonstration compile the demo of the desired function (just add `_demo` to the end of the function's name).
```
$ gcc ./libft/demos/ft_strjoin_demo.c -I ./libft/includes ./libft/libft.a
$ ./a.out
```
## 📋 Available Functions and Descriptions
| Function      | Prototype                                                           | Description                                                                                                                                                                                        |
| ------------- | ------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_atoi       | `int	ft_atoi(const char *nptr)`                                     | Converts the initial portion of the string pointed to by nptr to int.                                                                                                                              |
| ft_bzero      | `void	ft_bzero(void *s, size_t n)`                                  | Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing '\0') to that area.                                                     |
| ft_calloc     | `void	*ft_calloc(size_t nmemb, size_t size)`                        | Allocates memory for an array of nmemb elements of size bytes each and returns a pointer  to  the  allocated memory.  The memory is set to zero.                                                   |
| ft_isalnum    | `int	ft_isalnum(int c)`                                             | Checks for an alphanumeric character.                                                                                                                                                              |
| ft_isalpha    | `int	ft_isalpha(int c)`                                             | Checks for an alphabetic character.                                                                                                                                                                |
| ft_isascii    | `int	ft_isascii(int c)`                                             | Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.                                                                                                            |
| ft_isdigit    | `int	ft_isdigit(int c)`                                             | Checks for a digit (0 through 9).                                                                                                                                                                  |
| ft_isprint    | `int	ft_isprint(int c)`                                             | Checks for any printable character including space.                                                                                                                                                |
| ft_itoa       | `char	*ft_itoa(int n)`                                              | Returns a string representing the integer received as an argument.                                                                                                                                 |
| ft_memccpy    | `void	*ft_memccpy(void *dest, const void *src, int c, size_t n)`    | Copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.                                                                                      |
| ft_memchr     | `void	*ft_memchr(const void *s, int c, size_t n)`                   | Scans the initial n bytes of the memory area pointed to by s for the first instance of c. Returns a pointer to the matching byte or NULL if the character does not occur in the given memory area. |
| ft_memcmp     | `int	ft_memcmp(const void *s1, const void *s2, size_t n)`           | Compares the first n bytes. Returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found.                                                                      |
| ft_memcpy     | `void	*ft_memcpy(void *dest, const void *src, size_t n)`            | Copies n bytes from memory area src to memory area dest.                                                                                                                                           |
| ft_memmove    | `void	*ft_memmove(void *dest, const void *src, size_t len)`         | Copies n bytes from memory area src to memory area dest. The memory areas may overlap.                                                                                                             |
| ft_memset     | `void	*ft_memset(void *s, int c, size_t n)`                         | Fills the first n bytes of the memory area pointed to by s with the constant byte c.                                                                                                               |
| ft_putchar_fd | `void	ft_putchar_fd(char c, int fd)`                                | Outputs the character ’c’ to the given file descriptor.                                                                                                                                            |
| ft_putendl_fd | `void	ft_putendl_fd(char *s, int fd)`                               | Outputs the string ’s’ to the given file descriptor, followed by a newline.                                                                                                                        |
| ft_putnbr_fd  | `void	ft_putnbr_fd(int n, int fd)`                                  | Outputs the integer ’n’ to the given file descriptor.                                                                                                                                              |
| ft_putstr_fd  | `void	ft_putstr_fd(char *s, int fd)`                                | Outputs the string ’s’ to the given file descriptor.                                                                                                                                               |
| ft_split      | `char	**ft_split(char const *s, char c)`                            | Returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.                                                                                                      |
| ft_strchr     | `char	*ft_strchr(const char *s, int c)`                             | Returns a pointer to the first occurrence of the character c in the string s.                                                                                                                      |
| ft_strdup     | `char	*ft_strdup(const char *s)`                                    | Returns a pointer to a new string which is a duplicate of the string s.                                                                                                                            |
| ft_strjoin    | `char	*ft_strjoin(char const *s1, char const *s2)`                  | Returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.                                                                                                                   |
| ft_strlcat    | `size_t	ft_strlcat(char *dest, const char *src, size_t size)`       | Appends the NUL-terminated string src to the end of dst. It will append at most size - ft_strlen(dst) - 1 bytes, NUL-terminating the result.                                                       |
| ft_strlcpy    | `size_t	ft_strlcpy(char *dst, const char *src, size_t size)`        | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.                                                                                            |
| ft_strlen     | `size_t	ft_strlen(const char *s)`                                   | Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').                                                                                                   |
| ft_strmapi    | `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))`    | Applies the function ’f’ to each character of the string ’s’ to create a new string.                                                                                                               |
| ft_strncmp    | `int	ft_strncmp(const char *s1, const char *s2, size_t n)`          | Compares only the first (at most) n bytes of s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found.                                                            |
| ft_strnstr    | `char	*ft_strnstr(const char *big, const char *little, size_t len)` | Locates the first occurrence of the null-terminated string little in the string **big**.                                                                                                           |
| ft_strrchr    | `char	*ft_strrchr(const char *s, int c)`                            | Returns a pointer to the last occurrence of the character c in the string s.                                                                                                                       |
| ft_strtrim    | `char	*ft_strtrim(char const *s1, char const *set)`                 | Returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.                                                                                |
| ft_substr     | `char	*ft_substr(char const *s, unsigned int start, size_t len)`    | Returns a substring from the string ’s’. The substring begins at index ’start’ and is ofmaximum size ’len’.                                                                                        |
| ft_tolower    | `int	ft_tolower(int c)`                                             | Returns its lowercase equivalent.                                                                                                                                                                  |
| ft_toupper    | `int	ft_toupper(int c)`                                             | Returns its uppercasse equivalent.                                                                                                                                                                 |

## 🏫 42 École | 42 São Paulo
42 École is a network of tech schools spread around the world where anyone can learn how to code for free.\
At 42 there are no teachers or classrooms, each student learn from and work with each other (peer-to-peer learning).\
To see more go to https://www.42.fr/ and https://www.42sp.org.br/.
