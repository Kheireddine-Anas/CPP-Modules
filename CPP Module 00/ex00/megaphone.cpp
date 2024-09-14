#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char c;

	if (ac > 1)
	{
		while (av[++i])
		{
			j = 0;
			while (av[i][j])
			{
				c = std::toupper(av[i][j++]);
				std::cout << c;
			}
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}