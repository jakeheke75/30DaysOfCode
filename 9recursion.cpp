#include <iostream>

int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return n;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << factorial(n) << '\n';
}