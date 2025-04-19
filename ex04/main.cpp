#include "main.hpp"

std::string my_replace(std::string str, std::string from, std::string to)
{
	if (from.empty())
		return str;
	size_t start_pos = 0;
	while((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str = str.substr(0, start_pos) + to + str.substr(start_pos + from.length(), str.length());
		start_pos += to.length();
	}
	return str;
}


int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Argument is not 4." << std::endl;
		return 1;
	}
	std::string file_name = argv[1];
	std::string file_name_replace = file_name + ".replace";
	std::string from = argv[2];
	std::string to = argv[3];
	std::ifstream file(file_name);
	if (!file)
	{
		std::cerr << "Input file not opened." << std::endl;
		return 1;
	}
	std::ofstream file_replace(file_name_replace);
	if (!file_replace)
	{
		std::cerr << "Output file not opened." << std::endl;
		file.close();
		return 1;
	}
	std::string line;
	while (std::getline(file, line))
	{
		line = my_replace(line, from, to);
		file_replace << line << std::endl;
	}
	file.close();
	file_replace.close();
}

