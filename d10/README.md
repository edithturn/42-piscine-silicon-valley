# Makefile Introduction

## Makefile rules
```c
rule_a:
	echo "ruler A"
```

```shell-script
make rule_a
```

```c
# Write Makefile
rule_a:
	echo "ruler A"
rule_b: regla_a
	echo "ruler B"
```

```shell-script
make rule_b
```

## Makefile variables

```c
TEXT = "42 is for the braves"

ruler_a:
	echo $(TEXT)
```

```c
make
```

## Makefile example

```c
NAME = awesomeprog

SRC = source.c toto.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

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

```c
#include <unistd.h>

typedef void (*funptr)(char);

void ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int main()
{
	funptr f;
	
	f = &ft_putchar;
	f('z');
	return(0);	
}
```

### Pointers to functions - Example

```shell-script
- put_stdout -> Wrote in standar output 
- put_file	 -> Wrote in a file
- put_network -> Wrote in network

funtion put(where, what)
{
	if(where == STDOUT)
		put_stdout( what);
	else if( where == FILE )
		put_file( what )
	else if ( where == NETWORK )
		put_network( what );
	else
		error();
}

```


