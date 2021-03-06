#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP


#include	"IMaterialSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource {

	private:
		AMateria*	_source[4];
		bool		_fill[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &type);

		MateriaSource&	operator=(MateriaSource const &assign);

};

#endif
