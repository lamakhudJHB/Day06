/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:18:03 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/17 15:24:41 by lamakhud         ###   ########.fr       */
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
	ft_putchar("str");
	return (0);
}
