#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << BLUE << "Def WrongAnimal construtor called" << RESET << std::endl;
	SetType("Def animal");
}

WrongAnimal::WrongAnimal(const std::string type) {
	std::cout << BLUE << "Def type WrongAnimal construtor called" << RESET << std::endl;
	SetType(type);
}

void	WrongAnimal::SetType(const std::string &type) {
	WrongAnimal::_type = type;
}

const std::string	&WrongAnimal::GetType() const {
	return (this->_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << BLUE << "wrong animal Sound of nature" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << BLUE << "Def destructer called" << RESET << std::endl;
}
