#include <stdio.h>
#include <stdlib.h>

#include "../ft_putchar.c"
#include "../ft_tolower.c"
#include "../ft_strlcat.c"
#include "../ft_strcmp.c"
#include "../ft_isdelim.c"
#include "../ft_atoi.c"
#include "../ft_itoa.c"
#include "../ft_numlen.c"
#include "../ft_strdup.c"
#include "../ft_strlen.c"
#include "../ft_memccpy.c"
#include "../ft_strtrim.c"
#include "../ft_strnew.c"
#include "../ft_bzero.c"
#include "../ft_strrev.c"

int	ft_atoi(const char *str);


int main(void)
{
	// ft_memccpy
	char s1[16] = "";
	char s2[15] = "collect at my";
	printf("User: ft_memccpy\t %s\n", ft_memccpy(s1, s2, 'a', 16));
	printf("User: ft_memccpy\t %s\n", s1);//must be empty, as we just returned pointer to the last
	printf("Original: memccpy\t %s\n", memccpy(s1, s2, 'a', 16));
	printf("Original: memccpy\t %s\n", s1);

	// ft_tolower
	int ft_tolower(int c);
    int	x;
    int y;

    x = 130;
    y = 67;
    if (x == ft_tolower(x) && y + 32 == ft_tolower(y))
    	puts("ft_tolower\tOK\tOK");
	else
    	printf ("ft_tolower\tFAIL with input x = %d\n, y = %d\n", x, y);

	// ft_strcmp
	const char *str1;
	const char *str2;
	str1 = "abcdef";
	str2 = "abcde\200";
	printf("User: ft_strcmp\t %d\n", ft_strcmp(str1, str2));
	printf("Original: strcmp\t %d\n", strcmp(str1, str2));

	//ft_strlcat
	char des[0xF00] = "there is no stars in the sky";
	char *stl = "the cake is a lie !\0I'm hidden lol\r\n";
	printf("User: ft_strlcat\t %zu\n", ft_strlcat(des, stl, 5));
	printf("Original: strlcat\t %zu\n", strlcat(des, stl, 5));
	// ft_atoi
	char *a;
	char *b;
	char *c;
	char *d;

	a = " balf120";
	b = "-9999999999999999999999999999";
	c = "46976209";
	d = "386saf";
	printf("User: ft_atoi\t %d\n", ft_atoi(a));
	printf("Original: atoi\t %d\n", atoi(a));
	printf("User: ft_atoi\t %d\n", ft_atoi(b));
	printf("Original: atoi\t %d\n", atoi(b));
	printf("User: ft_atoi\t %d\n", ft_atoi(c));
	printf("Original: atoi\t %d\n", atoi(c));
	printf("User: ft_atoi\t %d\n", ft_atoi(d));
	printf("Original: atoi\t %d\n", atoi(d));

	// ft_strtrim
	char *s3;
	char *s4;
	s3  = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("User: ft_strtrim %s\n", ft_strtrim(s3));
	s4 = "  \t \t \n   \n\n\n\t";
	printf("User: ft_strtrim with empty input %s\n", ft_strtrim(s4));

	// ft_itoa
	int itoa, itoa1, itoa2;
	itoa = -358;
	itoa1 = 12358;
	itoa2 = 0;
	printf("User: ft_itoa %s\n", ft_itoa(itoa));
	printf("User: ft_itoa %s\n", ft_itoa(itoa1));
	printf("User: ft_itoa %s\n", ft_itoa(itoa2));

	//ft_strrev
	char string[] = "abcdefg!?";
	printf("Normal output ft_strrev: %s\n", string);
	printf("Reverse output ft_strrev: %s\n", ft_strrev(string));

	return (0);

}