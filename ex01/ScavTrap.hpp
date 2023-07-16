//생성자, 소멸자, ATTACK() 다른거 출력
//소멸자는 역순으로 호출됨
// 포인트가 다름
// guardGate(); 추가
//

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	void attack(const std::string &target);
	void guardGate();
	~ScavTrap();
};

ScavTrap::ScavTrap() : ClapTrap() {
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

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	ClapTrap(other.name);
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is destroyed" << std::endl;
}

# endif