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






