# libft

The goal is to create a libary (including makefile) for use in future projects.

# Contents
1. [Makefile](#makefile)

2. [Mandatory - Part I](#mandi)

3. [Mandatory - Part II](#mandii)

# <a name="Makefile">Makefile</a>

Lets have a look at the Makefile.

|		Syntax		|		Result		|
|-------------------|-------------------|
|		`NAME = libft.a`	|	Compile libft.h into static libary libft.a	|
|		`CC = cc`	|	use cc to compile	|
|		`RM = rm -rf`	|	set a RM variable. Contains rm -rf. |
|		`CFLAGS = -Wall -Wextra -Werror`	|	Set compile flags as -Wall -Wextra -Werror |
|		`SRCS = `	|	sets a Variable that contains function names |
|		`OBJECTS : $(SRCS:.c=.o)`	|	sets Variable that takes function name and swaps .c with .o |
|		`all: $(NAME)`	|	Creates all Mandatory files	|
|		`%.o:%.c`	|	.o dependencies |
|		`clean`	|	Delete all *.o files	|
|		`fclean`	|	Delete all *.o files and libft.a	|
|		`re`		|	Execute command fclean and make	|

# <a name="mandi">Mandatory - Part I</a>
## Libc Functions

Next up the Mandatory functions of Part I

* [man](https://man7.org/linux/man-pages/man3/isspace.3.html) **isalpha**
* [man](https://man7.org/linux/man-pages/man3/isdigit.3p.html) **isdigit**
* [man](https://man7.org/linux/man-pages/man3/isalnum.3p.html) **isalnum**
* [man](https://man7.org/linux/man-pages/man3/isascii.3p.html) **isascii**
* [man](https://man7.org/linux/man-pages/man3/isprint.3p.html) **isprint**
* [man](https://man7.org/linux/man-pages/man3/strlen.3.html) **strlen**
* [man](https://man7.org/linux/man-pages/man3/memset.3.html) **memset**
* [man](https://man7.org/linux/man-pages/man3/bzero.3.html) **bzero**
* [man](https://man7.org/linux/man-pages/man3/memcpy.3.html) **memcpy**
* [man](https://man7.org/linux/man-pages/man3/memmove.3.html) **memmove**
* [man](https://linux.die.net/man/3/strlcpy) **strlcpy**
* [man](https://linux.die.net/man/3/strlcat) **strlcat**
* [man](https://man7.org/linux/man-pages/man3/toupper.3.html) **toupper**
* [man](https://man7.org/linux/man-pages/man3/tolower.3p.html) **tolower**
* [man](https://man7.org/linux/man-pages/man3/strchr.3.html) **strchr**
* [man](https://man7.org/linux/man-pages/man3/strrchr.3p.html) **strrchr**
* [man](https://man7.org/linux/man-pages/man3/strncmp.3p.html) **strncmp**
* [man](https://man7.org/linux/man-pages/man3/memchr.3.html) **memchr**
* [man](https://man7.org/linux/man-pages/man3/memcmp.3.html) **memcmp**
* [man](https://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3) **strnstr**
* [man](https://man7.org/linux/man-pages/man3/atoi.3.html) **atoi**
* [man](https://man7.org/linux/man-pages/man3/calloc.3p.html) **calloc**
* [man](https://man7.org/linux/man-pages/man3/strdup.3.html) **strdup**

# <a name="mandii">Mandatory - Part II</a>
## Additional Functions

Mandatory functions of Part II.


| Function       	|  ft_substr  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_substr(char const *s, unsigned int start, size_t len); |
| Parameters     	| #1.  The string from which to create the substring <br/> #2.  The start index of the substring in the string ’s’. <br/> #3.  The maximum length of the  substring. |
| Return value   	| The substring.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.	|

----------

| Function       	|  ft_strjoin  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strjoin(char const *s1, char const *s2); |
| Parameters     	| #1.  The prefix string. <br/> #2.  The suffix string. |
| Return value   	| The new string.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.	|

----------

| Function       	|  ft_strtrim  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strtrim(char const *s1, char const *set); |
| Parameters     	| #1.  The string to be trimmed. <br/> #2.  The reference set of characters to trim. |
| Return value   	| The trimmed string.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.	| 
  
 
----------

| Function       	|  ft_split  |
|----------------	|---------------------------------------	|
| Prototype      	| char **ft_split(char const *s, char c); |
| Parameters     	| #1.  The string to be split. <br/> #2.  The delimiter character. |
| Return value   	| The array of new strings resulting from the split. NULL if the allocation fails. |
| External functs | malloc, free |
| Description    	| Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must be ended by a NULL pointer.	|
 
----------

 
| Function       	|  ft_itoa  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_itoa(int n); |
| Parameters     	| #1.  the integer to convert. |
| Return value   	| The string representing the integer.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.	|

----------

 
| Function       	|  ft_strmapi  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |
| Parameters     	| #1.  The string on which to iterate. <br/> #2.  The function to apply to each character. |
| Return value   	| The string created from the successive applications of ’f’.  Returns NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.	|
 
----------

| Function       	|  ft_putchar_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putchar_fd(char c, int fd); |
| Parameters     	| #1.  The character to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the character ’c’ to the given file descriptor.	|
 
----------

| Function       	|  ft_putstr_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putstr_fd(char *s, int fd); |
| Parameters     	| #1.  The string to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the string ’s’ to the given file descriptor.	|
 
----------

| Function       	|  ft_putendl_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putendl_fd(char *s, int fd); |
| Parameters     	| #1.  The string to output. <br/> #2.  The file descriptor on which to write.. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the string ’s’ to the given file descriptor, followed by a newline.	|
 
----------

| Function       	|  ft_putnbr_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putnbr_fd(int n, int fd); |
| Parameters     	| #1.  The integer to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the integer ’n’ to the given file descriptor.	|
