#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

class Animal {
private:
    std::string name;
    double height;
    double weight;

    static int numOfAnimals;

public:
    std::string getName() {return name;}
    void setName(std::string name) {this->name = name;}
    double getHeight() {return height;}
    void setHeight(double height) {this->height = height;}
    double getWeight() {return weight;}
    void setWeight(double weight) {this->weight = weight;}

    void setAll(std::string, double, double);
    Animal(std::string, double, double);
    Animal();
    ~Animal();

    static int getNumOfAnimals() {return numOfAnimals;}
    void toString();
};

int Animal::numOfAnimals = 0;
void Animal::setAll(std::string name, double height, double weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal() {
    this->name = "";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal() {
    std::cout << "Animal " << this->name << " destroyed\n";
}

void Animal::toString() {
    std::cout << this->name << " is " <<
    this->height << " cms tall and " <<
    this->weight << " kgs in weight\n";
}

class Dog: public Animal {
private:
    std::string sound = "Woof";
public:
    void makeSound() {
        std::cout << "The dog " <<
        this->getName() << " says " <<
        this->sound << "\n";
    }
    Dog(std::string, double, double, std::string);
    // Dog: Animal(){};
    void toString();
};

Dog::Dog (std::string name, double height, double weight, std::string sound)
    : Animal(name, height, weight) {
    this->sound = sound;
}

void Dog::toString() {
    std::cout << this->getName() << " is " <<
    this->getHeight() << " cms tall and " <<
    this->getWeight() << " kgs in weight and says " <<
    this->sound << "\n";
}

int main() {
    Animal fred;
    fred.toString();
    fred.setName("Fred");
    fred.setHeight(33);
    fred.setWeight(10);
    fred.toString();

    Animal tom("Tom", 44, 12);
    tom.toString();

    Dog spot("Spot", 38, 16, "Wooooof");
    spot.toString();

    std::cout << "Number of animals created: " << Animal::getNumOfAnimals() << "\n";

    return 0;
}