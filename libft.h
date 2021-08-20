/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:31:48 by dmontema          #+#    #+#             */
/*   Updated: 2021/08/20 19:00:58 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
//void *ft_memmove(void *dst, const void *ssrc, size_t len);
//size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
//size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
//void *ft_memchr(const void *s, int c, size_t n);
//int ft_memcmp(const void *s1, const void *s2);
//char *ft_strnstr(const char *hazstack, const char *needle, size_t len);
//int ft_atoi (const char *str);

#endif
