#include "Human.h"
namespace module_oop {
Human::Human(Profession p, std::string name, std::string surname, int age, int weight, int height) {
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->weight = weight;
	this->height = height;
	this->p = p;
}

int Human::birthYear() const {
	const int currentYear = 2023;
	return currentYear - age;
}
double Human::bodyMassIndex() const {
	return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
}
void Human::printHuman() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Surname:" << surname << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Weight: " << weight << std::endl;
	std::cout << "Height: " << height << std::endl;
	std::cout << "Birth year: " << birthYear() << std::endl;
	std::cout << "Body mass index: " << bodyMassIndex() << std::endl;
}
const std::string& Human::getName() const {
	return name;
}
void Human::setName(const std::string& name) {
	this->name = name;
}
Human& Human::operator++() {
	age++;
	return *this;
}
Human Human::operator++(int) {
	Human temp = *this;
	age++;
	return temp;
}
Human& Human::operator--() {
	age--;
	return *this;
}
Human Human::operator--(int) {
	Human temp = *this;
	age--;
	return temp;
}
bool Human::operator<(const Human& other) const {
	return this->age < other.age;
}
bool Human::operator>(const Human& other) const {
	return this->age > other.age;
}
std::ostream& operator<<(std::ostream& out, const Human& human) {
	out << "Name: " << human.name << std::endl;
	out << "Surname:" << human.surname << std::endl;
	out << "Age: " << human.age << std::endl;
	out << "Weight: " << human.weight << std::endl;
	out << "Height: " << human.height << std::endl;
	out << "Birth year: " << human.birthYear() << std::endl;
	out << "Body mass index: " << human.bodyMassIndex() << std::endl;
	out << "Profession: " << human.p << std::endl;
	return out;
}
}
 