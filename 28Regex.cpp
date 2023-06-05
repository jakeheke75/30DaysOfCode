#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int lines;
    vector<string> names;
    string domain{"@gmail.com"};
    char name1[20], email1[50];

    scanf("%d", &lines);
    while (lines-- > 0) {
        scanf("%s %s", name1, email1);
        string name(name1);
        string email(email1);
/*         size_t len = email.size();
        size_t pos = email.size()-10;
        string substring{email.substr(email.size()-10, 10)}; */    
        if (email.compare(email.size()-10, 10, domain) == 0)
            names.push_back(name);
    }
    sort(names.begin(), names.end());
    for (auto n : names)
        cout << n <<  '\n';
    return 0;
}