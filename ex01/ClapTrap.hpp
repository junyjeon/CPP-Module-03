#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
private:
	std::string name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	unsigned int getDamage(void) const;
	unsigned int getHitPoint(void) const;
	void setDamage(unsigned int amount);
};


#endif
