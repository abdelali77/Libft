#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

// --------------------------------------------------------- //

// ft_atoi
// int main()
// {
// 	char s[] = "     \v\r\t214748434336478fdfd";
// 	printf("%d\n", atoi(s));
// }

// --------------------------------------------------------- //

// ft_isalpha
// int main()
// {
//     printf("%d\n", ft_isalpha('a'));
// }

// --------------------------------------------------------- //

// ft_isdigit

// int main()
// {
//     printf("%d\n", ft_isdigit('5'));
// }

// --------------------------------------------------------- //

// ft_isalnum
// int main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// }

// --------------------------------------------------------- //

// ft_isascii
// int main()
// {
// 	printf("%d\n", ft_isascii('a'));
// }

// --------------------------------------------------------- //

// ft_isprint
// int main()
// {
// 	printf("%d\n", ft_isprint(127));
// }

// --------------------------------------------------------- //

// ft_tolower
// int main()
// {
// 	printf("%d\n", ft_tolower('A'));
// }

// --------------------------------------------------------- //

// ft_toupper
// int main()
// {
// 	printf("%d\n", ft_toupper('a'));
// }

// --------------------------------------------------------- //

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

// --------------------------------------------------------- //

// ft_strlen
// int main()
// {
// 	char s[] = "hello";
// 	printf("%d\n", ft_strlen(s1));
// }

// --------------------------------------------------------- //

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

// --------------------------------------------------------- //

// ft_memset
// int main()
// {
// 	char string[100];
// 	printf("%s\n", ft_memset(string , '~', sizeof(char) * 7));
// };

// --------------------------------------------------------- //

// ft_bzero
// int main()
// {
// 	char string[200];
// 	bzero(string,  sizeof(char)*15);
// 	printf("%s\n", string);
// }

// --------------------------------------------------------- //

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

// --------------------------------------------------------- //

// ft_strchr
// int main()
// {
// 	char s[] = "bbbde";
// 	printf("%s\n", ft_strchr(s, 't'));
// 	printf("%s\n", strchr(s, 't'));
// }

// --------------------------------------------------------- //

// ft_strrchr
// int main()
// {
// 	char s[] = "tbbbde";
// 	printf("%s\n", ft_strrchr(s, 't'));
// 	printf("%s\n", strrchr(s, 't'));
// }

// --------------------------------------------------------- //

// ft_memchr
// int main()
// {
// 	char s[] = "hello";
// 	printf("%s\n", ft_memchr(s, '\0', 6));
// 	printf("%s\n", memchr(s, '\0', 6));
// }

// --------------------------------------------------------- //

// ft_memcmp
// 	int main()
// {
// 	char s1[] = "he\0llo";
// 	char s2[] = "he\0llw";
// 	printf("%d\n", ft_memcmp(s1, s2, 7));
// 	printf("%d\n", memcmp(s1, s2, 7));
// }

// --------------------------------------------------------- //

// ft_memmove
// int main()
// {
// 	char str[8] = "ABCDEFG";
// 	char *s = ft_memmove(str + 3, str, 5);//ft_memmove(str + 3, str, 5);
// 	printf("%s\n", s);
// }

// --------------------------------------------------------- //

// ft_strnstr
// int main()
// {
// 	char str[] = "hello world!";
// 	char to_find[] = "t";
// 	printf("%s\n", ft_strnstr(str, to_find, 54));
// 	printf("%s\n", strnstr(str, to_find, 54));
// }

// --------------------------------------------------------- //

// ft_strlcat
// int main()
// {
// 	const char src[] = "klez is the best";
// 	char dst[120] = "hello ";
// 	char dst1[120] = "hello ";

// 	printf("%lu => %s\n", ft_strlcat(dst, src, 1), dst);
// 	printf("%lu => %s\n", strlcat(dst1, src, 1), dst1);
// }

// --------------------------------------------------------- //

// ft_calloc
// int main()
// {
// 	// Testing ft_calloc with an empty string
// 	int *empty_string = ft_calloc(0, 0);

// 	printf("[%d]", empty_string[0]);
// 	printf("[%d]", empty_string[1]);
// 	printf("[%d]", empty_string[2]);
// 	printf("[%d]", empty_string[3]);
// 	printf("[%d]", empty_string[4]);
// 	printf("[%d]\n", empty_string[5]);
// 	if (empty_string == NULL) {
// 		printf("Memory allocation failed for empty string.\n");
// 	}

// 	// Ensure the allocated memory contains an empty string or null terminator
// 	if (empty_string[0] == '\0') {
// 		printf("Empty string successfully allocated.\n");
// 	} else {
// 		printf("Allocation successful, but memory does not contain an empty string.\n");
// 	}
// 	return 0;
// }

// --------------------------------------------------------- //

// ft_strdup
// int main()
// {
// 	char s[] = "abdelali";
// 	char *s1 = ft_strdup(s);
// 	printf("%s\n", s1);
// }

// --------------------------------------------------------- //

// ft_substr
// int main()
// {
// 	//char s[] = "123456789";
// 	char *h = ft_substr("hola", 4294967295, 0);
// 	printf("%s\n", h);
// }

// --------------------------------------------------------- //

// ft_strjoin
// int main()
// {
// 	char *s1 = NULL;
// 	char *s2 = NULL;
// 	char *s = ft_strjoin(s1, s2);
// 	printf("%s\n", s);
// }

// --------------------------------------------------------- //

// ft_strtrim
// int main()
// {
// 	char *s1 = "123";
// 	char *s2 = "tme";
// 	char *ret = ft_strtrim(s1, "");
// 	printf("%s", ret);
// 	return 0;
// }

// --------------------------------------------------------- //

// ft_itoa
// int main()
// {
// 	printf("%s\n", ft_itoa(483648));
// }

// --------------------------------------------------------- //

// ft_strmapi
// char	to_upper(unsigned int n, char c)  
// {
// 	(void) n;
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }
// int main(void)  
// {
// 	char s[] = "HELLO";
//     printf("%s\n", ft_strmapi(s, to_upper));
//     return (0);
// }

// --------------------------------------------------------- //

// ft_striteri
// void	to_upper(unsigned int n, char c)  
// {
// 	(void) n;
// 	if (c >= 'A' && c <= 'Z')
// 	{
// 		c += 32;
// 		write(1, &c, 1);
// 	}
// 	write(1, &c, 1);
// }
// int main(void)  
// {
// 	char s[] = "HELLO";
// 	ft_striteri(s, to_upper);
//     printf("%s\n", s);
//     return (0);
// }

// --------------------------------------------------------- //

// ft_split
// int main()
// {
// 	char s[] = " is this wi";
// 	int i = 0;
// 	char **arr = ft_split(s, ' ');
// 	while (i < 3)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }

// --------------------------------------------------------- //

// ft_lstnew
// int main()
// {
// 	int	*n;

// 	n = malloc(sizeof(int));
// 	*n = 1337;
// 	t_list *node1 = ft_lstnew(n);
// 	t_list *node2 = ft_lstnew(" is the best");
// 	printf("%d", *(int *)node1->content);
// 	printf("%s\n", (char *)node2->content);
// }

// --------------------------------------------------------- //

// ft_lstadd_front
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew("1337");
// 	ft_lstadd_front(&head, n1);
// 	t_list *n2 = ft_lstnew("NeH");
// 	ft_lstadd_front(&head, n2);
// 	t_list *n3 = ft_lstnew("aaa");
// 	ft_lstadd_front(&head, n3);

// 	t_list *curr = head;
// 	while (curr != NULL)
// 	{
// 		printf("%s\n", (char *)curr->content);
// 		curr = curr->next;
// 	}
// }

// --------------------------------------------------------- //

// ft_lstsize
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew("1337");
// 	ft_lstadd_front(&head, n1);
// 	t_list *n2 = ft_lstnew("NeH");
// 	ft_lstadd_front(&head, n2);
// 	// t_list *n3 = ft_lstnew("aaa");
// 	// ft_lstadd_front(&head, n3);

// 	int	n = ft_lstsize(head);
// 	printf("%d\n", n);
// }

// --------------------------------------------------------- //

// ft_lstlast
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew("1337");
// 	ft_lstadd_front(&head, n1);
// 	t_list *n2 = ft_lstnew("NeH");
// 	ft_lstadd_front(&head, n2);

// 	t_list *n = ft_lstlast(head);
// 	printf("%s\n", (char *)n->content);
// }

// --------------------------------------------------------- //

// ft_lstadd_back
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew("1337");
// 	ft_lstadd_back(&head, n1);
// 	t_list *n2 = ft_lstnew("NeH");
// 	ft_lstadd_back(&head, n2);

// 	t_list *curr = head;
// 	while (curr != NULL)
// 	{
// 		printf("%s\n", curr->content);
// 		curr = curr->next;
// 	}
// }

// --------------------------------------------------------- //

//ft_lstdelone AND ft_lstdelone AND ft_lstiter
void	clean(void *content)
{
	free(content);
}
void	*edit(void *content)
{
	char *s = (char *)content;
	// int *s = (int *)content;
	// *s += 100;
	int i = 0;
	while (s[i])
	{
		s[i] += 32;
		i++;
	}
	return (s);
}
// int main()
// {
// 	t_list *head = NULL;
// 	int s;
// 	int *ss = &s;
// 	s = 100;
// 	t_list *node1 = ft_lstnew(ft_strdup("1337"));
// 	t_list *node2 = ft_lstnew(ft_strdup("13"));
// 	t_list *node3 = ft_lstnew(ft_strdup("37"));
// 	t_list *node4 = ft_lstnew(ft_strdup("aaa"));
// 	t_list *node5 = ft_lstnew(ss);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstadd_back(&head, node4);
// 	ft_lstadd_back(&head, node5);
// 	ft_lstdelone(node2, clean);
// 	node1->next = node3;
// 	t_list *curr = head;
// 	ft_lstclear(&head, clean);
// 	node2->next = NULL;
// 	ft_lstiter(node4, edit);
// 	ft_lstiter(node5, edit);
// 	t_list *curr = head;
// 	printf("%d\n", *(int *)curr->next->next->next->next->content);
// 	while (curr != NULL)
// 	{
// 		printf("%s\n", (char *)curr->content);
// 		curr = curr->next;
// 	}	
// }

// --------------------------------------------------------- //

// ft_lstmap
int main()
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew(strdup("NNN"));
	t_list *node2 = ft_lstnew(strdup("HHH"));
	t_list *node3 = ft_lstnew(strdup("EEE"));
	t_list *node4 = ft_lstnew(strdup("AAA"));
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	ft_lstmap(head, edit, clean);
	t_list *curr = head;
	while (curr != NULL)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}    
}

// --------------------------------------------------------- //