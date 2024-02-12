#include <iostream>

int main() {
#ifdef __clang__
    std::cout << "Using Clang compiler" << std::endl;
#elif defined(__GNUC__) || defined(__GNUG__)
    std::cout << "Using GCC compiler" << std::endl;
#elif defined(_MSC_VER)
    std::cout << "Using Microsoft Visual C++ compiler" << std::endl;
#else
    std::cout << "Unknown compiler" << std::endl;
#endif

    std::cout << "C++ Standard Version: " << __cplusplus << std::endl;

    return 0;
}
