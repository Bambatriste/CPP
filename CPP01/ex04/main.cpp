#include <string>
#include <fstream>
#include <iostream>

int main(int ac , char **av)
{

	std::string str1;
	std::string str2;
	std::fstream input_fs;
	std::fstream output_fs;
	std::string tmp;

	if (ac != 4)
		return (1);
	input_fs.open(av[1]);
	if (!input_fs)
		return (1);
	str1 = av[2];
	str2 = av[3];

	//std::cout << std::string ((std::istreambuf_iterator<char>(input_fs)), std::istreambuf_iterator<char>());



	

	//std::cout << oesh;









	input_fs.close();

	//use : str erase && str insert to replace std::replace

	
}
