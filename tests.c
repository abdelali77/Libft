#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

// ft_atoi
// int main()
// {
// 	char s[] = "     \v\r\t214748434336478fdfd";
// 	printf("%d\n", atoi(s));
// }

// ft_isalpha
// int main()
// {
//     printf("%d\n", ft_isalpha('a'));
// }

// ft_isdigit

// int main()
// {
//     printf("%d\n", ft_isdigit('5'));
// }

// ft_isalnum
// int main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// }

// ft_isascii
// int main()
// {
// 	printf("%d\n", ft_isascii('a'));
// }

// ft_isprint
// int main()
// {

// 	printf("%d\n", ft_isprint(127));
// }

// ft_tolower
// int main()
// {
// 	printf("%d\n", ft_tolower('A'));
// }

// ft_toupper
// int main()
// {
// 	printf("%d\n", ft_toupper('a'));
// }

// ft_strncmp
// int main()
// {
// 	char *s1 = "\200";
// 	char *s2 = "\0";
// 	size_t size = 1;
// 	int i1 = strncmp(s1, s2, size);
// 	int i2 = ft_strncmp(s1, s2, size);
// 	printf("%d\n", i1);
// 	printf("%d\n", i2);
// }

// ft_strlen
// int main()
// {
// 	char s[] = "hello";
// 	printf("%d\n", ft_strlen(s1));
// }

// ft_strlcpy
// int	main()
// {
// 	char s[] = "abdelali";
// 	char s2[] = "abdelali";
// 	char d[20];
// 	char d2[20];
// 	printf("%lu => %s\n", ft_strlcpy(d, s, 0), d);
// 	printf("%lu => %s\n", strlcpy(d2, s2, 0), d);
// }

// ft_memset
// int main()
// {
// 	char string[100];
// 	printf("%s\n", ft_memset(string , '~', sizeof(char) * 7));
// };

// ft_bzero
// int main()
// {
// 	char string[200];
// 	bzero(string,  sizeof(char)*15);
// 	printf("%s\n", string);
// }

// ft_memcpy
// int main()
// {
// 	// char str[] = "ABCDEF";
// 	// //char dst[20];
// 	// char *s = ft_memcpy(str + 2, str, 20);
// 	// // Destination and source are overlapping
// 	// printf("String: %s\n", s);
// 	int ints[] = {0, 34, 5};
// 	int ints2[3];

// 	//memcpy(ints2, ints, sizeof(ints));
// 	ft_memcpy(ints2, ints, sizeof(ints2));
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("[%d]", ints2[i]);
// 		i++;
// 	}
// }

// ft_strchr
// int main()
// {
// 	char s[] = "bbbde";
// 	printf("%s\n", ft_strchr(s, 't'));
// 	printf("%s\n", strchr(s, 't'));
// }

// ft_strrchr
// int main()
// {
// 	char s[] = "tbbbde";
// 	printf("%s\n", ft_strrchr(s, 't'));
// 	printf("%s\n", strrchr(s, 't'));
// }

// ft_memchr
// int main()
// {
// 	char s[] = "hello";
// 	printf("%s\n", ft_memchr(s, '\0', 6));
// 	printf("%s\n", memchr(s, '\0', 6));
// }

// ft_memcmp
// 	int main()
// {
// 	char s1[] = "he\0llo";
// 	char s2[] = "he\0llw";
// 	printf("%d\n", ft_memcmp(s1, s2, 7));
// 	printf("%d\n", memcmp(s1, s2, 7));
// }

// ft_memmove
// int main()
// {
// 	char str[8] = "ABCDEFG";
// 	char *s = ft_memmove(str + 3, str, 5);//ft_memmove(str + 3, str, 5);
// 	printf("%s\n", s);
// }

// ft_strnstr
// int main()
// {
// 	char str[] = "hello world!";
// 	char to_find[] = "t";
// 	printf("%s\n", ft_strnstr(str, to_find, 54));
// 	printf("%s\n", strnstr(str, to_find, 54));
// }

// ft_strlcat
// int main()
// {
// 	const char src[] = "klez is the best";
// 	char dst[120] = "hello ";
// 	char dst1[120] = "hello ";

// 	printf("%lu => %s\n", ft_strlcat(dst, src, 1), dst);
// 	printf("%lu => %s\n", strlcat(dst1, src, 1), dst1);
// }

// ft_calloc
// int main()
// {
// 	// Testing ft_calloc with an empty string
// 	char *empty_string = ft_calloc(0, 0);

// 	if (empty_string == NULL) {
// 		printf("Memory allocation failed for empty string.\n");
// 		return 1;
// 	}

// 	// Ensure the allocated memory contains an empty string or null terminator
// 	if (empty_string[0] == '\0') {
// 		printf("Empty string successfully allocated.\n");
// 	} else {
// 		printf("Allocation successful, but memory does not contain an empty string.\n");
// 	}

// 	// Free allocated memory
// 	free(empty_string);

// 	return 0;
// }

// ft_strdup
// int main()
// {
// 	char s[] = "abdelali";
// 	char *s1 = ft_strdup(s);
// 	printf("%s\n", s1);
// }

// ft_substr
// int main()
// {
// 	char s[] = "123456789";
// 	// char *h = ft_substr(s, 2, 3000000000);
// 	char *h = ft_substr(s, 3, 42000000);
// 	printf("%s\n", h);
// }

// ft_strjoin
// int main()
// {
// 	char *s1 = NULL;
// 	char *s2 = NULL;
// 	char *s = ft_strjoin(s1, s2);
// 	printf("%s\n", s);
// }

// ft_strtrim
// int main()
// {
// 	char *s1 = "123";
// 	char *s2 = "tme";
// 	char *ret = ft_strtrim(s1, "");
// 	printf("%s", ret);
// 	return 0;
// }

// ft_itoa
int main()
{
	printf("%s\n", ft_itoa(483648));
}
