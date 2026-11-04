*This project has been created as part of the 42 curriculum by jbrito.*

# LIBFT

## Description

Libft is my first C library built as the first project of the 42 Common Core. The goal is to understand how standard functions work by creating them from scratch. It will also be used as a personal toolbox to reuse in later 42 projects.

The library is compiled into a static archive, `libft.a`, using `cc` with the flags `-Wall -Wextra -Werror` and the `ar` command. No global variables are used. The only external functions are `malloc`, `free` and `write`.

### Library content

**Part 1 - Libc functions**
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`,
`ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`,
`ft_strdup`, `ft_atoi`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`,
`ft_memcmp`, `ft_calloc`.

**Part 2 - Additional functions**
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`,
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

**Part 3 - Linked lists** (using `t_list`, with `content` and `next`)
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`,
`ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Instructions

To compile the library from the root of the repository:

```bash
make # builds libft.a
make clean # removes the object files
make fclean # removes the object files and libft.a
make re # fclean + all
```

To use it in your own program, include the header and link the archive.

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Resources

- `man` pages of the functions (ex: `man strlen`, `man memmove`, etc.).
- 42 Libft subject.
- GNU make documentation.
- Community tester used to check the work: libftTester (Tripouille) together with valgrind, Francinette (xicodomingues).

### How AI was used

I used Claude kind of as a private tutor and professor while building this project. It was used for:

- **Concept explanations**: `size_t`, `void *`, `const`, `unsigned char`, function pointers, linked list and `t_list **`, object files and static libraries.

- **Step-by-step guidance**: hints and questions while I wrote each function myself, and review of my code to point out bugs or to make it cleaner.

- **Debugging**: understanding compiler errors and libftTester failures (`ft_strncmp` unsigned comparison, `ft_calloc` overflow check, `ft_substr` allocation size, `ft_itoa` digit counting), handling allocation failures in `ft_split` (freeing what was already allocated) and `ft_lstmap`, norminette fixes in `libft.h` and setting up the WSL/clang/valgrind environment for testing.

- **Project structure**: The Makefile structure was suggested and explained by the AI and then adapted and understood by me.

- **Documentation**: a personal study guide and the structure of this README.

I can explain every function in this repository.