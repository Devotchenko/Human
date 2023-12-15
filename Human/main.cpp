#include <iostream>
#include "Human.h"

int main()
{
    
    module_oop::Human person(module_oop::Profession::teacher,"ivan", "ivanov", 20, 90, 200);
    person.printHuman();
    module_oop::Human person2(module_oop::Profession::plumber,"petar", "petrov", 20, 80, 180);
    person2.printHuman();
    if (person < person2) {
		std::cout << person.getName() << " younger than  " << person2.getName() << std::endl;
	}
    else if (person > person2) {
		std::cout << person.getName() << " older than " << person2.getName() << std::endl;
	}
    else {
		std::cout << person.getName() << " and " << person2.getName() << " the same age" << std::endl;
	}   
    
    return 0;
}