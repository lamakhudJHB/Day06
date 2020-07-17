/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:41:47 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/17 14:59:12 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char *str){
	int i;

	i = 0;

	while(str[i] != '\0'){
		write(1, &str[i], 1);
		i++;
	}
}

int main(){
	char *name = "ft_print_program_name";

	ft_putchar(name);
	ft_putchar(" ");
	return (0);
}

