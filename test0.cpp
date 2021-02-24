#include <iostream>

class Animal
{
	public:
		Animal()
		{
			std::cout << "Animal Contructor" << std::endl;
		}
		~Animal()
		{
			std::cout << "Animal Destrctor" << std::endl;
		}
};
class Cat : public Animal
{
	public:
		Cat()
		{
			std::cout << "Cat Constructor" << std::endl;
		}
		~Cat()
		{
			std::cout << "Cat Destructor" << std::endl;
		}
};

int main()
{
//	Animal animal;
	Cat cat;
	return 0;
}
