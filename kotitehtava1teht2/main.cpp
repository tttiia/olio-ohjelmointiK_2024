#include <iostream>
#include <cstdlib>
#include <ctime>

// Funktio arvauksen käsittelyä varten
void arvauspeli(int arvattavaLuku) {
    int arvaus;

    do {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> arvaus;

        // Tarkistetaan arvaus
        if (arvaus < arvattavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (arvaus > arvattavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Onneksi olkoon! Arvasit oikein." << std::endl;
        }

    } while (arvaus != arvattavaLuku);
}

int main() {
    // Asetetaan satunnaislukugeneraattori
    std::srand(std::time(0));

    // Arvotaan satunnainen luku välillä 1-20
    int arvattavaLuku = std::rand() % 20 + 1;

    // Pelin aloitusviesti
    std::cout << "Tervetuloa arvaukseen! Arvaa luku väliltä 1-20." << std::endl;

                // Kutsutaan arvauspeli-funktiota
                arvauspeli(arvattavaLuku);

    return 0;
}
