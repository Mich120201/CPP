/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:58:34 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 09:59:59 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address contained in stringPTR: " << strPTR << std::endl;
	std::cout << "Address contained in stringREF: " << &strREF << std::endl;
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *strPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << strREF << std::endl;

	return 0;
}
