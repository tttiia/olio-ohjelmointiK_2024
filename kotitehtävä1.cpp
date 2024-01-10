#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Asetetaan satunnaislukugeneraattori
    std::srand(std::time(0));

    // Arvotaan satunnainen luku välillä 1-20
    int arvattavaLuku = std::rand() % 20 + 1;

    // Pelin aloitusviesti
    std::cout << "Tervetuloa arvaukseen! Arvaa luku valilta 1-20." << std::endl;

        // Pelaajan arvaus
        int arvaus;

    do {
        std::cout << "Syota arvauksesi: ";
        std::cin >> arvaus;

        // Tarkistetaan arvaus
        if (arvaus < arvattavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (arvaus > arvattavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "jeee! Arvasit oikein." << std::endl;
        }

    } while (arvaus != arvattavaLuku);

    return 0;
}
