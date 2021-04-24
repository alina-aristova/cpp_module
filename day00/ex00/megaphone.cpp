#include <iostream>
#include <string>	

void printArgs(int argc, char **argv)
{
	int i = 1;
	int j = 0;


	while(argv[i] != NULL)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		if (i < argc - 1)
			std::cout << ' ';
		i++;	
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << std::endl;
    	return 1;
	}
	printArgs(argc,argv);
	return 0;
}