#include <stdio.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[0] = "";
	char src[] = "be my one";

	char dest1[7] = "please";
	char src1[] = "be my one";

	char dest2[7] = "please";
	char src2[] = "be my one";

	char dest3[7+9+1] = "please";
	char src3[] = "be my one";

	char dest4[7+9+1+2] = "please";
	char src4[] = "be my one";


	char dest_[0] = "";
	char dest1_[7] = "please";
	char dest2_[7] = "please";
	char dest3_[7+9+1] = "please";
	char dest4_[7+9+1+2] = "please";

	char src_[] = "be my one";
	char src1_[] = "be my one";
	char src2_[] = "be my one";
	char src3_[] = "be my one";
	char src4_[] = "be my one";

	printf("%u should be %lu\n", ft_strlcat(dest, src, 0), strlcat(dest_, src_, 0));
	printf("%u should be %lu\n", ft_strlcat(dest1, src1, 7), strlcat(dest1_, src1_, 7));
	printf("%u should be %lu\n", ft_strlcat(dest2, src2, 5), strlcat(dest2_, src2_, 5));
	printf("%u should be %lu\n", ft_strlcat(dest3, src3, 17), strlcat(dest3_, src3_, 17));
	printf("%u should be %lu\n", ft_strlcat(dest4, src4, 19), strlcat(dest4_, src4_, 19));
	return (0);
}
