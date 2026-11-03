*This project has been created as part of the 42 curriculum by jbrito@student.42porto.com.*

# Libft

## Description

Libft is my first own C library, built as the first project of the 42 Common Core.
The goal is to understand how common standard functions work by reimplementing them from scratch,
and to build a personal toolbox that will be reused in later 42 projects.

The library is compiled into a static archive, `libft.a`, using `cc` with the flags
`-Wall -Wextra -Werror` and the `ar` command. No global variables are used, and helper
functions are declared `static`. The only external functions used are `malloc`, `free` and `write`.

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

Compile the library from the root of the repository:

```bash
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean + all
```

To use it in your own program, include the header and link the archive:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

- `man` pages of the reimplemented functions (`man 3 strlen`, `man 3 memmove`, etc.)
- 42 Libft subject
- GNU Make documentation
- Community testers used to validate the work: libftTester (Tripouille), together with valgrind

### How AI was used

I used Claude (Anthropic) as a tutor while building this project. It was used for:

- **Concept explanations**: `size_t`, `void *`, `const`, `unsigned char`, function pointers,
  linked lists and `t_list **`, object files and static libraries.
- **Step-by-step guidance**: hints and questions while I wrote each function myself,
  and review of my code to point out bugs (wrong return types, missing NULL checks, off-by-one errors).
- **Debugging**: understanding compiler errors and libftTester failures
  (`ft_strncmp` unsigned comparison, `ft_calloc` overflow check, `ft_substr` allocation size,
  `ft_itoa` digit counting), and setting up the WSL/clang/valgrind environment for testing.
- **Project structure**: the `libft.h` prototype layout and the Makefile structure were
  suggested by the AI and then adapted and understood by me. A reference `ft_itoa` found online was also
  compared against my own version.
- **Documentation**: a personal study guide and the structure of this README.

I can explain every function in this repository.
