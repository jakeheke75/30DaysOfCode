#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// performance measure header
#include <iomanip>
#include <chrono>
using namespace std;

void isPrime(int n) {
    if(n == 1) {
        cout << "Not prime\n";
        return;
    }
    for(int counter = 2; counter < n; counter++) {
        if(n % counter == 0) {
            cout << "Not prime\n";
            return;
        }
    }
    cout << "Prime\n";
}

void isPrimeSqrt(int n) {
    if(n == 1) {
        cout << "Not prime\n";
        return;
    }
    for(int counter = 2; counter <= floor(sqrt(n)); counter++) {
        if(n % counter == 0) {
            cout << "Not prime\n";
            return;
        }
    }
    cout << "Prime\n";
}

int main() {
    int n, input;
    vector<int> numbers;
    cin >> n;
    while(n-- > 0) {
        cin >> input;
        numbers.push_back(input);
    }

    auto t1 {chrono::high_resolution_clock::now()};
    for(auto itr = numbers.begin(); itr < numbers.end(); itr++)
        isPrime(*itr);
    auto t2 {chrono::high_resolution_clock::now()};
    chrono::duration<double, milli> ms_double {t2 - t1};
    cout << setprecision(17) << ms_double.count() << " ms\n";

    t1 = chrono::high_resolution_clock::now();
    for(auto itr = numbers.begin(); itr < numbers.end(); itr++)
        isPrimeSqrt(*itr);
    t2 = chrono::high_resolution_clock::now();
    ms_double = t2 - t1;
    cout << setprecision(17) << ms_double.count() << " ms\n";     

    return 0;
}