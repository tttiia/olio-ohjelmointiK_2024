#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(std::string n) : name(n) {
        std::cout << "Chef " << name << " constructed." << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destructed." << std::endl;
    }

    std::string getName() const {
        return name;
    }
};

class ItalianChef : public Chef {
private:
    double flourAmount;
    double waterAmount;

public:
    ItalianChef(std::string n, double flour, double water)
        : Chef(n), flourAmount(flour), waterAmount(water) {
        std::cout << "Italian Chef " << getName() << " constructed." << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Italian Chef " << getName() << " destructed." << std::endl;
    }

    void makePasta() {
        std::cout << "Italian Chef " << getName() << " makes pasta with jauhot = "
                  << flourAmount << " ja vesi = " << waterAmount << std::endl;
    }
};

int main() {
    Chef regularChef("Alice");

    ItalianChef italianChef("Luigi", 250.0, 100.0);
    italianChef.makePasta();

    return 0;
}
