# Files Introduction
When you ask your system to open a file, it returns a file descriptor (It is an integer), this system keeps in memory some sort of table which associates every file descriptor opened by a process with a file. When you get this file descriptor you can use to manipulate the file, 

0 o << stdin >> : Entry standard
1 o  << stdout >> : Standard Exit
2 o << stder >> : Error Exix

## File Manipulato - Open

```shell-script
int open(char *path, int flags[,mode])
path = fichero
flagas = Opening mode
perm = permissions

# Return Value
File descriptor (int) o -1 in error case

# Open a file
- O_RDONLY
- O_WRONLY
- O_RDWR
- O_CREAT
- O_TRUNC
- O_APPEND
```

## Example
```c
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "j12.h"

int main()
{
int fd;

fd = open("42", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
ft_putnbr(fd);
return (0);
}
```

## File Manipulation - Write

```shell-script
-> man 2 write
int write (int fd, char *buf, int count);

fd = File descriptor

buf = buffer source

count = Name bytes to write

-> Return Value

Name of bytes to write or -1 in error case
```

```shell-script
-> man 2 read

int read (int fd, char *buf, int count);

fd = File 

buf = buffer destination

count = 


-> man 2 lseek

int lseek(int fd, int offset, in mode)

fd = file descriptor

offset = offset of result or calcul

mode = mode of calcul

```








