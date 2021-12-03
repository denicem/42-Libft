/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:32:13 by dmontema          #+#    #+#             */
/*   Updated: 2021/12/03 20:58:34 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main ()
{
    //printf("%d\n", ft_isalnum('3'));
    //printf("%d\n", ft_isalnum('M'));
    //printf("%d\n", ft_isalnum('s'));
    //printf("%d\n", ft_isalnum('!'));
    //printf("%d\n", ft_isascii('!'));
    //printf("%d\n", ft_isascii("Ü"));

    //printf("%zu\n", ft_strlen("Hello"));

    //printf("%d\n", ft_toupper('a'));
    //printf("%d\n", ft_toupper('B'));
    //printf("%d\n", ft_tolower('a'));
    //printf("%d\n", ft_tolower('B'));

    /*char *s = "Hallo!";
    if (ft_strchr(s, 97) != NULL)
        printf("SUCCESS!");
    else    printf("FAILED!");*/

    /*char str[19];
    printf("B%s %lu\n", str, ft_strlen(str));
    ft_memset(str, '0', 8);
    //ft_bzero(str, 8);
    printf("A%s %lu\n", str, ft_strlen(str));*/

    /*char *str = NULL;
    if (ft_memset(str, '0', 8))
        printf("NOTNULL");*/

    //printf("%s\n", ft_memchr("Hallo", 'l', 5));

    //char str[11] = " and Vienna";
    //char str2[20] = "Heilbronn";

    /*printf("%s\n", str2);
    ft_memcpy(str2, str, 6);
    printf("%s\n", str2);

    printf("%d\n", ft_strncmp("Hallo", "Halle", 5));

    printf("%d\n", atoi("H"));*/

    //printf("before strlcpy: %s\n", str2);
    //printf("%lu\n", ft_strlcat(str2, str, 15));
    //printf("after strlcpy: %s\n", str2);
    //printf("%lu\n", ft_strlen(str) + ft_strlen(str2));

    //printf("%d\n", ft_memcmp("Halle", "Hallo"));

    //printf("%s\n", strnstr("42Heilbronn", "ilbr", 11));
    //printf("%s\n", strnstr("42Heilbronn", "ilbr", 10));
    //printf("%s\n", strnstr("42Heilbronn", "ilbr", 9));
    //printf("%s\n", strnstr("42Heilbronn", "bronn", 11));
    //printf("%s\n", strnstr("42Heilbronn", "bronn", 10));
    //printf("%s\n", strnstr("42Heilbronn", "bronn", 9));
    //printf("%s\n", strnstr("42Heilbronn", "2Heilbro", 11));
    //printf("%s\n", strnstr("42Heilbronn", "2Heilbro", 10));
    //printf("%s\n", strnstr("42Heilbronn", "2Heilbro", 9));

    //printf("%d\n", ft_atoi("123H"));
    //printf("%d\n", ft_atoi("1234567"));
    //printf("%d\n", ft_isdigit('5') - 48);

    //char str[20] = "Hello 42Heilbronn.";
    //ft_memset(NULL, 0, 20);
    //ft_bzero(str, 20);
    //printf("%s\n", str);

    //char str[11] = "Halli";
    //char *str1 = "";
    //printf("%lu %lu\n", sizeof(str), ft_strlen(str));
    //size_t sz = strlcat(str, str1, 11);
    //printf("str: %s, sz: %lu\n", str, sz);

    //char *str1 = malloc(9);
    //char *str2 = malloc(9);
    //char *str3 = ft_substr(str, 3, 9);
    //strlcpy(str1, str + 2, 9);
    //ft_strlcpy(str2, str + 2, 9);
    //printf("%s\n%s\n%s\n", str1, str2, str3);
    //printf("%zu\n%zu\n", ft_strlen(str1), ft_strlen(str2));

    //char	*str = "i just want this part #############";
	//size_t	size = 22;
	//char	*ret = ft_substr(str, 0, size);
    //printf("%s", ret);

    //ft_memmove(NULL, NULL, 0);

    //char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	//char	*d1 = strrchr(src, '\0');
	//char	*d2 = ft_strrchr(src, '\0');
    //printf("%s\n%s\n", d1, d2);

    //printf("%d\n", atoi("-123"));
    //printf("%d\n", ft_atoi("-123"));

    //char *s1 = "12345";
    //ft_memset(s1, 48, 5);

    // const char *str1;
    // const char *str2; 
    // const char *str3;
  
    // str1 = ft_strnstr("lorem ipsum dolor sit amet", "", 30);
    // str2 = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
    // str3 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
  
    // if (str1)
    //     printf("%s\n", str1);
    // else
    //     printf("NULL\n");
    
    // if (str2)
    //     printf("%s\n", str2);
    // else
    //     printf("NULL\n");

    // if (str3)
    //     printf("%s\n", str2);
    // else
    //     printf("NULL\n");

    // printf("1  %d\n", ft_atoi("0"));
    // printf("2  %d\n", ft_atoi("546:5"));
    // printf("3  %d\n", ft_atoi("-4886"));
    // printf("4  %d\n", ft_atoi("+548"));
    // printf("5  %d\n", ft_atoi("054854"));
    // printf("6  %d\n", ft_atoi("000074"));
    // printf("7  %d\n", ft_atoi("+-54"));
    // printf("8  %d\n", ft_atoi("-+48"));
    // printf("9  %d\n", ft_atoi("--47"));
    // printf("10 %d\n", ft_atoi("++47"));
    // printf("11 %d\n", ft_atoi("+47+5"));
    // printf("12 %d\n", ft_atoi("-47-5"));
    // printf("13 %d\n", ft_atoi("\e475"));
    // printf("14 %d\n", ft_atoi("\t\n\r\v\f  469 \n"));
    // printf("15 %d\n", ft_atoi("-2147483648"));
    // printf("16 %d\n", ft_atoi("2147483647"));
    // printf("17 %d\n", ft_atoi("\t\n\r\v\fd469 \n"));
    // printf("18 %d\n", ft_atoi("n\n\n  -46\b9 \n5d6"));
    // printf("19 %d\n", ft_atoi(""));
    //printf("%d\n", __INT_MAX__);
    //printf("%d\n", __INT_MIN__);

    // printf("%d\n", '\b'); // value = 8
    // printf("%d\n", '\t'); // value = 9
    // printf("%d\n", '\n'); // value = 10
    // printf("%d\n", '\v'); // value = 11
    // printf("%d\n", '\f'); // value = 12
    // printf("%d\n", '\r'); // value = 13
    // printf("%d\n", '\e'); // value = 27

    // printf("%d\n", memcmp("t\200", "t\0", 2));
    // printf("%d\n", (unsigned char) '\2');
    // printf("%d\n", (unsigned char) '\0');
    // printf("%d\n", (unsigned char) '\2' -  (unsigned char)'\0');

    //printf("%lu\n", (size_t) -1+1);

    // char *dest;
    // dest = malloc(sizeof(dest) * 15);
    // memset(dest, 0, 15);
    // memset(dest, 'r', 6);
    // dest[11] = 'a';

    // printf("%lu\n", ft_strlcat(dest, "", 15));
    // printf("%lu\n", strlcat(dest, "", 15));

	// printf("%s\n", ft_itoa(123));
	// printf("%s\n", ft_itoa(-123));
	// printf("%s\n", ft_itoa(4564654));
	// printf("%s\n", ft_itoa(-156123));

	// char *s = "Hello";

	// printf("%s\n", s+1);

	//printf("%zu\n", ft_strlen(ft_strtrim("          ", " ")));
	//printf("%zu\n", ft_strlen("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  "));

	// char **arr = ft_split("lorem ipsum dolor sit amet", ' ');
	// // char **arr = ft_split("          ", ' ');
	
	// int i = 0;
	// while (*arr)
	// {
	// 	while (**arr)
	// 	{
	// 		printf("%d", **arr);
	// 		(*arr)++;
	// 	}

	// 	printf("%d\n", **arr);
	// 	printf("%s\n", *arr);
	// 	arr++;
	// 	i++;
	// }
	// // printf("%d\n", i);

	// // printf("%s\n", "Ha" + "llo");
	// //system("leaks test");
	// char	*i1 = ft_itoa(-623);
	// char	*i2 = ft_itoa(156);
	// char	*i3 = ft_itoa(-0);
	// printf("%s, %s, %s\n", i1, i2, i3);

	// printf("%d\n", atoi("99999999999999999999999999"));
	// printf("%d\n", atoi("-99999999999999999999999999"));

	// printf("%d\n", ft_atoi("99999999999999999999999999"));
	// printf("%d\n", ft_atoi("-99999999999999999999999999"));

	//printf("%s\n", ft_strtrim("Hei442lbronn424242", "42"));

	return (0);
}
