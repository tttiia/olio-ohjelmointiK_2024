#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(std::string n) : name(n) {
        std::cout << "Chef " << name << " konstruktori." << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori." << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad." << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup." << std::endl;
    }
};

int main() {
    Chef chef1("gordon ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    Chef chef2("anthony bourdain");
    chef2.makeSalad();
    chef2.makeSoup();

    return 0;
}
