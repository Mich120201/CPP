/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:12:03 by mich              #+#    #+#             */
/*   Updated: 2023/06/01 15:24:34 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	Harl harl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("");
	harl.complain("michela");
	return 0;
}
