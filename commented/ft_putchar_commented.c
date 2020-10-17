#include <unistd.h>

/*
   ** unistd.h is the unix header file. It's not C standard header.
   ** It is required to use write() in the program.
*/

void ft_putchar(char c);

/*
   ** Declared function prototype to prevent compile error
*/

int main()
{
    ft_putchar('z');
    return 0;
}

void ft_putchar(char c)
{
    int fd;
    int buffer_size;

    fd = 1;
    buffer_size = 0;

	write(fd, &c, buffer_size);
}
