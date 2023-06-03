#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string inputLine;
    int dd, mm, yyyy, dates[6]{0}, fine{0};

    scanf("%d %d %d", &dd, &mm, &yyyy);
    dates[0] = dd;
    dates[1] = mm;
    dates[2] = yyyy;

    scanf("%d %d %d", &dd, &mm, &yyyy);
    dates[3] = dd;
    dates[4] = mm;
    dates[5] = yyyy;

    if (dates[2] < dates[5]) {}
    else if (dates[0] <= dates[3] && dates[1] <= dates[4] && dates[2] == dates[5]) {}
    else if (dates[0] > dates[3] && dates[1] == dates[4] && dates[2] == dates[5])
        fine = 15*(dates[0]-dates[3]);
    else if (dates[1] > dates[4] && dates[2] == dates[5])
        fine = 500*(dates[1]-dates[4]);
    else if (dates[2] > dates[5])
        fine = 10000;
    
    cout << fine << '\n';
    return 0;
}