/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 00:11:02 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/06 00:15:05 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int error(std::string err)
{
	if (err == "args")
		std::cerr << "Wrong arguments\nUsage: ./replace [filename] [to_substitute] [substitute]";
	else if (err == "file")
		std::cerr << "Error opening file";
	else
		std::cerr << "Error Unknown";
	std::cerr << std::endl;
	return 1;
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return error("args");
	
	std::ifstream ifs(av[1]);
	if (!ifs.is_open())
		return error("file");
	std::ofstream ofs((av[1] + std::string(".replace")).c_str());
	if (!ofs.is_open())
		return error("file");

	char c = 0;
	std::string subs = av[2];

	while(ifs.get(c))
	{
		std::string tmp = "";
		int i = 0;

		if (c != subs[i])
		{
			ofs.put(c);
			continue;
		}
		while (subs[i] && c == subs[i])
		{
			tmp = tmp + c;
			ifs.get(c);
			i++;
		}
		if (!subs[i])
		{
			ofs.write(av[3], std::string(av[3]).size());
			ofs.put(c);
		}
		else
		{
			i = 0;
			while (tmp[i])
				ofs.put(tmp[i++]);
		}
	}

	ifs.close();
	ofs.close();
	return 0;
}