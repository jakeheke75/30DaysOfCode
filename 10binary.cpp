#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>

int main() {

    int decimal;
    std::cin >> decimal;
    int remainder;
    std::vector<int> binary, ones;
    int counter {0};
    
    while (decimal > 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary.insert(binary.begin(), remainder);
        if (remainder == 1)
            counter++;
        else {
            ones.insert(ones.begin(), counter);
            counter = 0;
        }   
    }

    ones.insert(ones.begin(), counter);
    std::sort(ones.begin(), ones.end(), std::greater<int>());
    std::cout << ones.front() << '\n';

    return 0;    
}

//// various attempts
/*     const int n {20};
    std::string binary {std::bitset<n>(decimal).to_string()};
    std::string::size_type start {0};
    std::string::size_type index {0};
    //int count {0};
    while (index != std::string::npos) {
        index = binary.find('1', start);
        std::cout << index << '\n';
        if (index != std::string::npos) {

        }
    } */

    /* for (auto c : binary) {
        if (c == '1')
            count++;
    }
    std::cout << binary << '\n';
    std::cout << count << '\n'; */