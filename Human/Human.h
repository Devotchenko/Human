#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include <iostream>
namespace module_oop{
	enum Profession
	{
		teacher = 0,
		student,
		plumber,
	};
class Human {
private:
	std::string name;
	std::string surname;
	int age;
	int weight;
	int height;
	Profession profession;
public:
	Human(Profession p, std::string name, std::string surname, int age, int weight, int height);
	int birthYear() const;
	double bodyMassIndex() const;
	void printHuman();
	const std::string& getName() const;
	void setName(const std::string& name);
	const std::string& getSurname() const;
	void setSurname(const std::string& surname);
	int getAge() const;
	void setAge(int age);
	int getWeight() const;
	void setWeight(int weight);
	int getHeight() const;
	void setHeight(int height);
	Profession getProfession() const;
	void setProfession(Profession p);

	Human& operator++();
	Human operator++(int);
	Human& operator--();
	Human operator--(int);
	bool operator<(const Human& other) const;
	bool operator>(const Human& other) const;
	friend std::ostream& operator<<(std::ostream& out, const Human& human);
};
}
#endif // !HUMAN_H

