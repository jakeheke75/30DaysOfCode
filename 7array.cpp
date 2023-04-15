#include <iostream>
#include <array>
using namespace std;

int main() {

    array<int, 4> arr {1, 2, 3, 4};
    cout << "the size of the array is " << arr.size() << '\n';
    cout << "the begin of the array is " << arr.begin() << '\n';
    cout << "the end of the array is " << arr.end() << '\n';
    cout << "the back of the array is " << arr.back() << '\n';
    cout << "the back of the array is " << arr.back() << '\n';
    cout << "the front of the array is " << arr.front() << '\n';
    cout << "is the array empty " << arr.empty() << '\n';
    for (auto iter = arr.begin(); iter != arr.end(); iter++)
        cout << ' ' << *iter;
    cout << '\n';
    for (auto iter = arr.rbegin(); iter != arr.rend(); iter++)
        cout << ' ' << *iter;
    cout << '\n';

    return 0;
    
}