#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Karen;
	
	if (ac != 2)
		return (1);
	Karen.complain(av[1]);
	return (0);
}

/* int	main(void)
{
	Harl	Karen;
	Karen.complain("DEBUG");
	Karen.complain("DEBUG1");
	Karen.complain("INFO");
	Karen.complain("1INFO");
	Karen.complain("WARNING");
	Karen.complain("warning");
	Karen.complain("ERROR");
	Karen.complain("Error");
	Karen.complain("123");
	Karen.complain("");
	Karen.complain(std::string());
} */
