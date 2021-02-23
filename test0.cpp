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
/*
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
#include <iostream>
#include <unistd.h>

int main()
{
	while(1){
	std::cout << "Hello World!!" << std::endl;
	std::cout << "test0.cpp"  << std::endl;
	sleep(1);
	}
	return 0;
}
*/
