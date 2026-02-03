#include <iostream>
#include <random>
 
int main() 
{
    std::mt19937 mt{std::random_device{}()};
    std::uniform_int_distribution<int> die6{-100, 100};
 
    std::cout << "mt()=" << mt() << "\n";
    std::cout << "die6(mt)=" << die6(mt) << "\n";
    return 0;
}
