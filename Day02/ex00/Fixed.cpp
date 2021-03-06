#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator= (const Fixed &assign) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = assign.getRawBits();
	return (*this);
}

const int		&Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed_point = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

