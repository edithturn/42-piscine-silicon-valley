# Chanined List Introduction
Chained lists are a group of links dispersed in memory, but interconnected, forming a chain. This links contain some data, a link or a pointer to the next element/structure in our list.
Chanined lists only need to be linked to the new element.

## Chained list examples

### list.h
```c
#ifndef __list_h__
#define __list_h__

type struct s_list t_lists;

struct s_lists {
	char *str;
	t_list *next;	
};

#endif
```

### list.c
```c
#include <stdlib.h>
#include "list.h"

int main(void)
{
	t_list *list;

	list = NULL;
	list = add_link(list, "toto\n");


	return (0);	
}

```

## Makefile example

```c

```

```shell-script
make
make clean
make fclean
make re
```

## Pointers to functions

### Sintax

```c
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
	return;
}

int main()
{
	void (*f)(char);

	f = &ft_putchar;
	f('z');
	return (0);
}
```
