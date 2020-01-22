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

t_list *add_link(t_list * list, char *str);
void print_list(t_list * list);

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
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");

	print_list(list);
	
	return (0);	
}

```

### add_link.c

```c
#include <stdlib.h>
#include "list.h"

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;
	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;	
	}
	return tmp;


}
```
### print_list.c
```c
#include "list.h"

void print_list(t_list *list)
{
	while()
	{
		ft_putstr(list->str);
	}
}

```

```shell-script
gcc *.c
```



