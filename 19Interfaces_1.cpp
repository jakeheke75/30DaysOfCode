#include <vector>
#include <iostream>

class AdvancedArithmetic {
    public:
    virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
    public:
    int divisorSum(int n) {
        std::vector<int> divisors;
        int i {n};
        for (; i > 0; i--) {
            if (n % i == 0)
                divisors.push_back(i);
        }
        int divisorSum {0};
        for (int n : divisors)
            divisorSum += n;
        return divisorSum;
    }
};

int main() {
    int n;
    std::cin >> n;
    AdvancedArithmetic *myCalculator {new Calculator()}; 
    int sum {myCalculator->divisorSum(n)};
    std::cout << "I implemented: AdvancedArithmetic\n" << sum << '\n';
    return 0;
}