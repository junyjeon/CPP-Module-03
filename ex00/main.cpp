#include "ClapTrap.hpp"

int main(void) {
	ClapTrap Jun("Jun");
	ClapTrap choi("choi");

	Jun.setDamage(5);
	choi.setDamage(9);
	std::cout << std::endl;

	Jun.attack("choi");
	choi.takeDamage(Jun.getDamage());

	choi.attack("Jun");
	Jun.takeDamage(choi.getDamage());
	Jun.beRepaired(20);
	std::cout << std::endl;

	Jun.attack("choi");
	choi.takeDamage(Jun.getDamage());
	choi.attack("Jun");
	Jun.takeDamage(choi.getDamage());
	choi.beRepaired(20);
	std::cout << std::endl;
	
	return (0);
}