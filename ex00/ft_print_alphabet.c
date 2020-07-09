/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:19:04 by kkara             #+#    #+#             */
/*   Updated: 2020/07/08 16:43:34 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_alphabet(void) {
	char letter;

	letter = 'a';
	while (letter <= 'z'){
		ft_putchar(letter);
		letter ++; }
}

