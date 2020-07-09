/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:17:49 by kkara             #+#    #+#             */
/*   Updated: 2020/07/08 16:37:46 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print_numbers(void) {
	char letter;

	letter = 'z';
	while(letter >= "a") {
		ft_putchar(letter);
		letter --; }
}
