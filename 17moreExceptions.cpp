#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

// Write your code here
class Calculator {
    public:
    int power(int base, int exponent) {
        if (base < 0 || exponent < 0)
            throw std::runtime_error{"n and p should be non-negative"};
        else
            return std::pow(base, exponent);
    }
};

int main() {
    Calculator myCalculator {Calculator()};
    int T, n, p;
    std::cin >> T;
    while (T-- > 0) {
      if (scanf("%d %d",&n, &p) == 2) {
         try {
               int ans {myCalculator.power(n, p)};
               std::cout << ans << '\n'; 
         }
         catch(exception& e) {
             std::cout << e.what() << '\n';
         }
      }
    }
    return 0;
}