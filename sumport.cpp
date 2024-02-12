#include <iostream>
#include <vector>

int main() {
    // Using auto with lambda expressions
    auto func = [](int x, int y) { return x + y; };
    std::cout << "Result of lambda function: " << func(3, 4) << std::endl;

    // Using generic lambdas
    auto add = [](auto a, auto b) { return a + b; };
    std::cout << "Result of generic lambda: " << add(3, 4.5) << std::endl;

    // Using variable templates
    template<typename T>
    constexpr T pi = T(3.1415926535897932385);
    std::cout << "Value of pi: " << pi<double> << std::endl;

    // Using std::make_unique
    auto ptr = std::make_unique<int>(42);
    std::cout << "Value of pointer: " << *ptr << std::endl;

    // Using digit separators
    long long bigNumber = 1'000'000'000;
    std::cout << "Big number with separators: " << bigNumber << std::endl;

    return 0;
}
