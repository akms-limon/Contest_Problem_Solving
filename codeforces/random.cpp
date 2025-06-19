#include <iostream>
#include <random>

int main() {
    // Create a random number generator
    std::random_device rd;                        // Non-deterministic seed
    std::mt19937 gen(rd());                       // Mersenne Twister RNG
    std::uniform_int_distribution<> dist(1, 4); // Range: 1 to 100

    // Generate and print 10 random numbers
    std::cout << "Random numbers: ";
        std::cout << dist(gen) << " ";
    std::cout << std::endl;

    return 0;
}