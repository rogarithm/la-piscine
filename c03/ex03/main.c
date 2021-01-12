#include <stdio.h>
#include <string.h>

char *ft_strncat(char* dest, char *src, unsigned int nb);

int main(void)
{
	char dest[40] = "I love ";
	char src[] = "the way you smile at me.";
	
	char dests[40] = "I love ";
	char srcs[] = "the way you smile at me.";
	ft_strncat(dest, src, 0);
	printf("%s\n %s", dest, strncat(dests, srcs, 0));
	return (0);
}
