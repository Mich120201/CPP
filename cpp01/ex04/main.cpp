/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:16:20 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 15:21:57 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Replace.hpp"

void	replace_string(std::string &text,const std::string first,const std::string second){
	std::string::size_type start_pos = 0;

	while ((start_pos = text.find(first, start_pos)) != std::string::npos){
		text.erase(start_pos, first.length());
		text.insert(start_pos, second);
		start_pos += second.length();
	}
}

std::string	getPath(const std::string &fileName){
	return fileName;
}

void	modify_file(Replace *replace){
	std::string text;
	std::ifstream input_file(getPath(replace->get_file()).c_str());
	if (!input_file.good()){
		std::cout <<  "\033[1;31m" << "Error: Input file does not exist"  << "\033[0m" << std::endl;
		return;
	}
	std::ofstream output_file(getPath(replace->get_fileBackup()).c_str());
	if (!output_file.good()){
		std::cout <<  "\033[1;31m" << "Error: Output file error"  << "\033[0m" << std::endl;
		return;
	}

	if (input_file.is_open() && output_file.is_open()){
		while (std::getline(input_file, text)){
			replace_string(text, replace->get_fstStr(), replace->get_sndStr());
			output_file << text << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	else
		std::cout <<  "\033[1;31m" << "Error with file"  << "\033[0m" << std::endl;
}

int	main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Input a Filename and two string" << std::endl;
	}
	std::string file = argv[1];
	std::string fstStr = argv[2];
	std::string sndStr = argv[3];
	std::string filebackup = file + ".replace";
	Replace replace(file, fstStr, sndStr, filebackup);
	modify_file(&replace);
	return 0;
}
