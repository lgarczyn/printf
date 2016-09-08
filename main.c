/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 06:58:02 by lgarczyn          #+#    #+#             */
/*   Updated: 2016/08/10 06:58:03 by lgarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <locale.h>
#include <stdlib.h>
#include "public.h"
#include "stdio.h"

int			main(void)
{
	setlocale(LC_ALL, "en_US.UTF-8");
	/*ft_printf("%%i        |%i|\n", 1);
	ft_printf("%%+06i     |%+06i|\n", 1);
	ft_printf("%%#06x     |%#06x|\n", 1);
	ft_printf("%%+8.4i    |%+8.4i|\n", 1);
	ft_printf("%%+4.4i    |%+4.4i|\n", 1);
	ft_printf("%%+4.8i    |%+4.8i|\n", 1);
	ft_printf("%%+04.8i   |%+04.8i|\n", 1);
	ft_printf("%%+0.8i    |%+0.8i|\n", 1);
	ft_printf("%%+012.8i  |%+012.8i|\n", 1);
	ft_printf("%%+12.8i   |%+12.8i|\n", 1);
	ft_printf("%%+12.1i   |%+12.1i|\n", 1);
	ft_printf("%%+12.0i   |%+12.0i|\n", 0);
	ft_printf("%%+012i    |%i|\n", 1);
	ft_printf("%%+i       |%i|\n", 0xFFFFFFFF);
	ft_printf("%%+u       |%u|\n", 0xFFFFFFFF);
	ft_printf("%%+li      |%li|\n", 0xFFFFFFFFFFFFFFFF);
	ft_printf("%%+lu      |%lu|\n", 0xFFFFFFFFFFFFFFFF);
	ft_printf("%%p        |%p|\n", (void*)0);
	ft_printf("%%p        |%p|\n", (void*)0xFF);
	ft_printf("%%p        |%p|\n", (void*)0xFFFFFFFFFF);
	ft_printf("%%30p      |%30p|\n", (void*)0xFFFFFFFFFF);
	ft_printf("%%+lu      |%p|\n", (void*)0xABCDABCDABCDABCD);
	ft_printf("%%#o       |%#o|\n", 0xFFFFFFFF);
	ft_printf("%%-i       |%-i|\n", 1);
	ft_printf("%%-i       |%-i|\n", 0);
	ft_printf("%%-+8.4i   |%-+8.4i|\n", 1);
	ft_printf("%%-+4.4i   |%-+4.4i|\n", 1);
	ft_printf("%%-+4.8i   |%-+4.8i|\n", 1);
	ft_printf("%%-+12.8i  |%-+12.8i|\n", 1);
	ft_printf("%%-+12.1i  |%-+12.1i|\n", 1);
	ft_printf("%%-+12.0i  |%-+12.0i|\n", 0);
	ft_printf("%%+12.i    |%+12.i|\n", 0);
	ft_printf("%%-p       |%-p|\n", (void*)0);
	ft_printf("%%-30p     |%-30p|\n", (void*)0xFFFFFFFFFF);
	ft_printf("%%-#o      |%-#o|\n", 0xFFFFFFFF);
	ft_printf("%%#o       |%#o|\n", 0);
	//strings
	ft_printf("%%s        |%s\n", "test");
	ft_printf("%%s%%s    d   |%s%s\n", "test1", "test2");
	ft_printf("%%001s%%s d   |%s%s\n", "test1", "test2");
	ft_printf("%%c%%c    d   |%c%c\n", 'C', '\n');
	ft_printf("%lc\n", 945);//'α'
	ft_printf("%C\n", 928);//pi
	ft_printf("%C\n", 8657);//up arrow
	ft_printf("%C\n", 9827);//club
	ft_printf("%C\n", 8472);//pretty p
	ft_printf("%C\n", 8226);//bullet
	ft_printf("%C\n", 169);//copyright
	ft_printf("%C\n", 8364);//euro
	ft_printf("%C\n", 'b');//pi
	ft_printf("% 3i\n", 999);//pi
	short a = 32768;
	char b = 128;
	char c = -129;
	ft_printf("%hd\n", a);
	ft_printf("%hhd\n", b);
	ft_printf("%hhd\n", c);
	ft_printf("@moulitest: %#.o, %#.0o\n", 0, 0);
	ft_printf("@moulitest: %#.x, %#.0x\n", 0, 0);
	ft_printf("@moulitest: %.d, %.0d\n", 0, 0);
	
	wchar_t data[7] = {
		25105,
		26159,
		19968,
		21482,
		29483,
		12290,
		0,
	};
	ft_printf("\n%S\n", data);
	ft_printf("%#-08x\n", 42);
	ft_printf("%s\n", NULL);
	ft_printf("%S\n", (wchar_t*)NULL);
	ft_printf("% s\n", NULL);
	ft_printf("% S\n", (wchar_t*)NULL);
	ft_printf("%s\n", NULL);
	ft_printf("%b\n", 0xff990081);*/
	printf("{%30S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("{%+03d}\n", 0);
	printf("{%4.s}\n", "42");
	/* weird fucking o's
	printf("%%#o 0: %#o\n", 0);
	printf("%%o  0: %o\n", 0);
	printf("%%#o 1: %#o\n", 1);
	printf("%%o  1: %o\n", 1);
	printf("%%#x 0: %#x\n", 0);
	printf("%%x  0: %x\n", 0);
	printf("%%#x 1: %#x\n", 1);
	printf("%%x  1: %x\n", 1);
	printf("-----\n");
	printf("%%#.o 0: %#.o\n", 0);
	printf("%%.o  0: %.o\n", 0);
	printf("%%#.o 1: %#.o\n", 1);
	printf("%%.o  1: %.o\n", 1);
	printf("%%#.x 0: %#.x\n", 0);
	printf("%%.x  0: %.x\n", 0);
	printf("%%#.x 1: %#.x\n", 1);
	printf("%%.x  1: %.x\n", 1);
	printf("-----\n");
	printf("%%#.0o 0: %#.0o\n", 0);
	printf("%%.0o  0: %.0o\n", 0);
	printf("%%#.0o 1: %#.0o\n", 1);
	printf("%%.0o  1: %.0o\n", 1);
	printf("%%#.0x 0: %#.0x\n", 0);
	printf("%%.0x  0: %.0x\n", 0);
	printf("%%#.0x 1: %#.0x\n", 1);
	printf("%%.0x  1: %.0x\n", 1);
	printf("-----\n"); */

}
