#include <iostream>
#include "strong.cpp"
#include "template.cpp"


int main() {
    Compare <int> a(1, 3);
    std::cout << "Hello, World!" << std::endl;
    std::cout << add(1, 2) << std::endl;
    std::cout << a.max() << std::endl;
    return 0;
}