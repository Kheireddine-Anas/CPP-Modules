/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:01:54 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 11:19:52 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
	std::string filename;
	std::string content;
	std::string line;
	std::string s1;
	std::string s2;

	if (ac == 4) {
		filename = av[1];
		s1 = av[2];
		s2 = av[3];

		std::ifstream fl(filename.c_str());
		if (!fl.is_open()) {
			std::cout << "Error Opening the file!" << std::endl;
			return 1;
		}

		while (std::getline(fl, line)) {
			content += line + "\n";
		}
		fl.close();

		std::size_t pos = 0;
		while ((pos = content.find(s1, pos)) != std::string::npos) {
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos += s2.length();
		}

		std::string outname = filename + ".replace";
		std::ofstream outputFile(outname.c_str());
		if (!outputFile.is_open()) {
			std::cout << "Unable to create the file" << std::endl;
			return 1;
		}

		outputFile << content;
		outputFile.close();

		std::cout << "File saved as: " << outname << std::endl;
		return 0;
	} else {
		std::cout << "Usage: " << av[0] << " <filename> <string1> <string2>" << std::endl;
		return 1;
	}
}
