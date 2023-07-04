/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:30:28 by cwan              #+#    #+#             */
/*   Updated: 2023/07/03 14:11:51 by cwan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_PAGE_SIZE 14

void	ft_buffer_number(int number, int radix, int buffer[], int index)
{
	if (number > radix - 1)
		ft_buffer_number(number / radix, radix, buffer, index + 1);
	buffer[index] = number % radix;
}

void	ft_write_printable(char *c)
{
	if (*c >= ' ' && *c != 127)
		write(1, c, 1);
	else
		write(1, &".", 1);
}

void	ft_write_hex(unsigned int number, int radix, int char_count)
{
	int	buffer[MAX_PAGE_SIZE + 1];
	int	index;

	index = -1;
	while (index++ < MAX_PAGE_SIZE)
		buffer[index] = 0;
	ft_buffer_number(number, radix, buffer, 0);
	index = -1;
	while (index++ < char_count)
		write(1, &"0123456789abcdefgh"[buffer[char_count - index]], 1);
}

void	ft_print_memory_at(void *startadd, unsigned int size, char *address)
{
	int	index;

	ft_write_hex((unsigned int)address, 16, MAX_PAGE_SIZE);
	write(1, &": ", 2);
	index = 0;
	while (index++ < 16)
	{
		if (startadd + size <= (void *)(address + index - 1))
			write(1, &" ", 2);
		else
			ft_write_hex((unsigned char)*(address + index - 1), 16, 1);
		if (index % 2 == 0)
			write(1, &" ", 1);
	}
	index = 0;
	while (index++ < 16)
		if (startadd + size > (void *)(address + index - 1))
		ft_write_printable((char *)address + index - 1);
			
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*address;

	address = (char *)addr;
	while ((void *)address < (addr + size))
	{
		ft_print_memory_at(addr, size, address);
		write (1, &"\n", 1);
		address += 16;
	}
	return (addr);
}

#include <stdio.h>

int	main(void)
{
	char a[] = "salut, comment\ttu vas\n ? 42mots quarante-deux;";
	ft_print_memory(a, 64);
	return (0);
}
