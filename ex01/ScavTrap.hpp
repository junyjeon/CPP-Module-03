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

# endif