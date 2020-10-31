#include <stdio.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[20] = "Help ";
	char src[] = "me please!";
	
	char dest2[20] = "Help ";
	char src2[] = "me please!";

	char dest3[20] = "Help ";
	char src3[] = "me please!";
	
	char dest4[20] = "Help ";
	char src4[] = "me please!";
	printf("%u should be %lu\n", ft_strlcat(dest, src, 11), strlcat(dest, src, 11));
	printf("%u should be %lu\n", ft_strlcat(dest2, src2, 6), strlcat(dest2, src2, 6));
	printf("%u should be %lu\n", ft_strlcat(dest3, src3, 2), strlcat(dest3, src3, 2));
	printf("%u should be %lu\n", ft_strlcat(dest4, src4, 1), strlcat(dest4, src4, 1));
	return (0);
}
