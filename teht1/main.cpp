#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(std::string n) : name(n) {}

    void makeSalad() {
        std::cout << name << " makes a salad." << std::endl;
    }

    void makeSoup() {
        std::cout << name << " makes soup." << std::endl;
    }
};

class ItalianChef : public Chef {
public:
    ItalianChef(std::string n) : Chef(n) {}

    std::string getName() {
        return Chef::getName();  // In case you want to access the private 'name' member from the base class
    }

    void makePasta() {
        std::cout << getName() << " makes pasta." << std::endl;
    }
};








