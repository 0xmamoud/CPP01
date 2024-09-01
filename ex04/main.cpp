#include <iostream>
#include <fstream>
#include <string>

std::string findAndReplace(std::string &str, std::string toFind, std::string newValue) {
	std::string newStr = str;
	size_t pos = str.find(toFind);

	while (pos != std::string::npos)
	{
		newStr = str.substr(0, pos) + newValue + str.substr(pos + toFind.length());
		pos = newStr.find(toFind);
	}
	return newStr;
}


int main(int argc, char const *argv[])
{
	if (argc != 4) {
		std::cerr << "usage: ./sed filename string1 string2" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ifstream infile(argv[1]);
	if (!infile.is_open()) {
		std::cerr << argv[1] << " fails to open" << std::endl;
	}

	std::string fileName = argv[1];
	std::ofstream outfile(fileName.append(".replace"));
	if (!outfile.is_open()) {	
		std::cerr << fileName << "fails to open" << std::endl;
		infile.close();
	}

	std::string line;
	std::string toFind = argv[2];
	std::string toReplace = argv[3];
	while (std::getline(infile, line))
	{
		outfile << findAndReplace(line,toFind, toReplace) << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
