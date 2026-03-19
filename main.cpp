#include <iostream>
 
double add(double a, double b) {
    return a + b;
}
 
 
int main() {
    std::cout << "Test 1: " << ((add(2, 3) == 5) ? "Pass" : "Fail") << ' ';
    std::cout << "Test 2: " << ((add(-1, -1) == -2) ? "Pass" : "Fail") << ' ';
    std::cout << "Test 3: " << ((add(-.1, -1) == -1.1f) ? "Pass" : "Fail") << '\n';
    return 0;
}