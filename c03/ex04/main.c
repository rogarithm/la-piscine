#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
   printf("you: %s\n", ft_strstr("He", "He"));
   printf("answer: %s\n", strstr("He", "He"));
   printf("you: %s\n", ft_strstr("n c haysta ck", "haysta"));
   printf("answer: %s\n", strstr("n c haysta ck", "haysta"));
   printf("you: %s\n", ft_strstr("n c haysta ck", "haysta"));
   printf("answer: %s\n", strstr("n c haysta ck", "haysta"));
   printf("you: %s\n", ft_strstr("", "12341234"));
   printf("answer: %s\n", strstr("", "12341234"));
   printf("you: %s\n", ft_strstr("12341234", ""));
   printf("answer: %s\n", strstr("12341234", ""));
   printf("you: %s\n", ft_strstr("", ""));
   printf("answer: %s\n", strstr("", ""));
   return 0;
}
