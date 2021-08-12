<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/surfi89/libft?color=critical" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/surfi89/libft?color=yellow" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/libft?color=blueviolet" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/surfi89/libft?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).


### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/sources/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](libft/sources/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](libft/sources/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](libft/sources/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](libft/sources/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](libft/sources/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/sources/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/sources/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](libft/sources/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/sources/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/sources/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/sources/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/sources/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/sources/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/sources/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/sources/ft_strlen.c)				- find length of string.
* [`ft_strchr`](libft/sources/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/sources/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](libft/sources/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](libft/sources/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](libft/sources/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](libft/sources/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](libft/sources/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](libft/sources/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/sources/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/sources/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/sources/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/sources/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](libft/sources/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](libft/sources/ft_striteri.c)			- 
* [`ft_putchar_fd`](libft/sources/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](libft/sources/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](libft/sources/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](libft/sources/ft_putnbr_fd.c)		- output integer to given file.

### Linked list functions (bonus)

* [`ft_lstnew`](libft/sources/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](libft/sources/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](libft/sources/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](libft/sources/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](libft/sources/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](libft/sources/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](libft/sources/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/sources/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/sources/ft_lstmap.c)				- apply function to content of all list's elements into new list.


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

## 📋 Testing

You can use any of this third party testers to test the project

* [jtoty/Libftest](https://github.com/jtoty/Libftest)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
