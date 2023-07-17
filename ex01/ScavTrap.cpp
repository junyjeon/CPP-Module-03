#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default") {
	std::cout << "ScavTrap " << name << " is created" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " is created" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (hitPoint == 0 || energyPoint == 0)
		std::cout << "ScavTrap " << name << " can't attack!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoint--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}


ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is destroyed" << std::endl;
}
 