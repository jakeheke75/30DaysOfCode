#include <string>
#include <iostream>

int main() {
    std::string input;
    getline(std::cin, input);
    try {
        int num {std::stoi(input)};
        std::cout << num << '\n';
        return 0;
    }
    catch (std::invalid_argument const& ex) {
        std::cout << "Bad String\n";
    }
}