# libft
42Cursus-libft/42Lisboa

 > [subject](subject.pdf)
# Contents
 1. [Intro](https://github.com/mlanca-c/libft/blob/main/README.md#intro)
	* [Keywords](https://github.com/mlanca-c/libft/blob/main/README.md#Keywords)
 3. [Bonus](https://github.com/mlanca-c/libft/blob/main/README.md#Bonus)
	* [Singly Linked List](https://github.com/mlanca-c/libft/blob/main/README.md#singly-linked-list)
 4. [Results](https://github.com/mlanca-c/libft/blob/main/README.md#Results)
 5. [Tests](https://github.com/mlanca-c/libft/blob/main/README.md#Tests)

# Intro
 This is the very first project of the 42 cursus.
 The aim is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.
 This library will help you for all your future C projects.

## Keywords
 > [libft](https://velog.io/@bahn/Libft-%EC%B4%9D-%EC%A0%95%EB%A6%AC), [Makefile](https://makefiletutorial.com/), [norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf), [C Library](https://devdocs.io/c/), [Linked List](https://www.geeksforgeeks.org/data-structures/linked-list/singly-linked-list/)

# Bonus
 ```
 typedef struct		s_list
 {
 	void			*content;
 	struct s_list	*next;
 }					t_list;
 ```
 |:--------:|:--------------:|
 |content	|data contained in the element. The void * allows to store any kind of data|
 |next		|next element’s address or NULL if it’s the last element|

## Singly Linked List

# Results
  1st try: [results](results/1st_try) (100%)
  ```
  initial_errors: | test_ft_atoi: OK | test_ft_bzero: OK | test_ft_calloc: OK | test_ft_isalnum: OK | test_ft_isalpha: OK | test_ft_isascii: OK | test_ft_isdigit: OK | test_ft_isprint: OK | test_ft_itoa: OK | test_ft_memccpy: OK | test_ft_memchr: OK | test_ft_memcmp: OK | test_ft_memcpy: OK | test_ft_memmove: OK | test_ft_memset: OK | test_ft_putchar_fd: OK | test_ft_putendl_fd: OK | test_ft_putnbr_fd: OK | test_ft_putstr_fd: OK | test_ft_split: OK | test_ft_strchr: OK | test_ft_strdup: OK | test_ft_strjoin: OK | test_ft_strlcat: OK | test_ft_strlcpy: OK | test_ft_strlen: OK | test_ft_strmapi: OK | test_ft_strncmp: OK | test_ft_strnstr: OK | test_ft_strrchr: Error encountered while testing | test_ft_strtrim: OK | test_ft_substr: OK | test_ft_tolower: OK | test_ft_toupper: OK | bonus: Segmentation fault, 8/9 functions correct
  ```
  2nd try: [results](results/2nd_try) (115%)

  ```
  initial_errors: | test_ft_atoi: OK | test_ft_bzero: OK | test_ft_calloc: OK | test_ft_isalnum: OK | test_ft_isalpha: OK | test_ft_isascii: OK | test_ft_isdigit: OK | test_ft_isprint: OK | test_ft_itoa: OK | test_ft_memccpy: OK | test_ft_memchr: OK | test_ft_memcmp: OK | test_ft_memcpy: OK | test_ft_memmove: OK | test_ft_memset: OK | test_ft_putchar_fd: OK | test_ft_putendl_fd: OK | test_ft_putnbr_fd: OK | test_ft_putstr_fd: OK | test_ft_split: OK | test_ft_strchr: OK | test_ft_strdup: OK | test_ft_strjoin: OK | test_ft_strlcat: OK | test_ft_strlcpy: OK | test_ft_strlen: OK | test_ft_strmapi: OK | test_ft_strncmp: OK | test_ft_strnstr: OK | test_ft_strrchr: OK | test_ft_strtrim: OK | test_ft_substr: OK | test_ft_tolower: OK | test_ft_toupper: OK | bonus: 9/9 functions correct
  ```

# Tests
 These are the tests I used in my project. I advise you to use all of them, since they test different thing and tend to complement each other.

 * [Tripouille/libftTester](https://github.com/Tripouille/libftTester)
 * [jtoty/Libftest](https://github.com/jtoty/Libftest)
 * [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)

