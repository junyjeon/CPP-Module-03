#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>

class ClapTrap {
private:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;
public:
	ClapTrap();
	~ClapTrap();
	// ClapTrap(const ClapTrap &);
	// ClapTrap &operator=(const ClapTrap &);

	ClapTrap(std::string);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap() {};

ClapTrap::~ClapTrap() {};

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoint(10), energyPoint(10), attackDamage(10) {
	std::cout << "ClapTrap" << name << " is born!" << std::endl;
	std::cout << "    Hit points(" << hitPoint << ")" << std::endl;
	std::cout << " Energy points(" << energyPoint << ")" << std::endl;
	std::cout << " Attack damage(" << attackDamage << ")" << std::endl;
};

void ClapTrap::attack(const std::string &target) {
	if (hitPoint == 0 || energyPoint == 0)
		return ;
	std::cout << "ClapTrap" << name << "attacks" << target << ", causing" << attackDamage << "points of damage!";
	attackDamage -= hitPoint;
	energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	(void)amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	attackDamage += amount;
	energyPoint--;
}


#endif
