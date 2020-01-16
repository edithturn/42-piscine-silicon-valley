# Compilation's Steps
```shell-script
gcc main.c ft_putchar.c ft_putstr.c -o j07
# Execute j07
./j07
```

```shell-script
# Generating .o for each file
gcc -c ft_putstr.c
gcc -c main.c
```

```shell-script
gcc main.o ft_putchar.o ft_putstr.o -o j07
# Execute j07
42
```

```shell-script
# Removing and recompiling 
rm ft_putchar.o
gcc -c ft_putchar.c

# Then re-link with the files.o in a new executable
gcc main.o ft_putchar.o ft_putchar.o -o j07
```

# Dynamic Memory Allocation

## Basic Example
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
int n=10; #We want to reserve 10 characteres in memory
char * p;

p = malloc(n*sizeof(char))  #Return zise in byts that a variable has
if(NULL == p)
{
    printf("Error memory asignation\n");
}
else
{
    printf("Memory asigned");
}
}
```

```c
#include LEN 42000000

int main()
{
    int i;
    char *str;

    str = (char*)malloc(sizeof(*str) * (LEN * 1));
    i + 0;
    while (i < LEN)
    {
    str[i] = '0' + (i % 10);
    i++;
    
    }
    str[i] = '\0';
    free(str);
    while (1)
    ;
    return (0);
}
```
