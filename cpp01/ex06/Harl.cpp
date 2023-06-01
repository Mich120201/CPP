/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:20:38 by mich              #+#    #+#             */
/*   Updated: 2023/06/01 15:22:12 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::complain( std::string level ){
	int	i;
	typedef void(Harl::*MessageFunction)(void);
	MessageFunction messageFunctions[4] = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	for (i = 0; i < 4; i++){
		if (level == levels[i])
			break;
	}
	switch (i){
		case 0:{
			MessageFunction messageFunction = messageFunctions[i];
			(this->*messageFunction)();
			i++;
		}
		case 1:{
			MessageFunction messageFunction = messageFunctions[i];
			(this->*messageFunction)();
			i++;
		}
		case 2:{
			MessageFunction messageFunction = messageFunctions[i];
			(this->*messageFunction)();
			i++;
		}
		case 3:{
			MessageFunction messageFunction = messageFunctions[i];
			(this->*messageFunction)();
			break;
		}
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl <<"I love having extra bacon for my" << std::endl <<
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl <<
	"You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl <<
	"I’ve been coming foryears whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable!" << std::endl
		<< "I want to speak to the manager now." << std::endl << std::endl;
}
