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

    void makeSalad() {
        std::cout << "Chef " << name << " makes a salad." << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup." << std::endl;
    }

    std::string getName() const {
        return name;
    }
};

class ItalianChef : public Chef {
public:
    ItalianChef(std::string n) : Chef(n) {
        std::cout << "Italian Chef " << getName() << " constructed." << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Italian Chef " << getName() << " destructed." << std::endl;
    }

    void makePasta() {
        std::cout << "Italian Chef " << getName() << " makes pasta." << std::endl;
    }
};

int main() {
    Chef regularChef("Alice");
    regularChef.makeSalad();
    regularChef.makeSoup();

    ItalianChef italianChef("Luigi");
    italianChef.makeSalad();
    italianChef.makePasta();
    italianChef.makeSoup();

    return 0;
}
