#include <iostream>
#include <string>
#include <map>

int main() {  

    std::map<std::string, std::string> book;
    int n;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::string input;
        std::getline(std::cin, input);
        auto index {input.find(" ")};
        std::string name {input.substr(0, index)};
        std::string telephone {input.substr(index+1)};
        book.insert(std::pair{name, telephone});        
    }

    std::string search;
    while (std::getline(std::cin, search) && !search.empty()) {
        auto itr = book.find(search);
        if (itr != book.end())
            std::cout << itr->first << "=" << itr->second << '\n';
        else
            std::cout << "Not found\n";
    }

    return 0;
}