#include <iostream>
#include <string>
#include <queue>
#include <stack>

class Solution {
    //Write your code here
    std::stack<char> stack;
    std::queue<char> queue;
    public:
    void pushCharacter(char ch) { stack.push(ch); }
    void enqueueCharacter(char ch) { queue.push(ch); }
    char popCharacter() { 
        char c {stack.top()};
        stack.pop();
        return c;
    }
    char dequeueCharacter() {
        char c {queue.front()};
        queue.pop();
        return c; 
    }
};

int main() {
    // read the string s.
    std::string s;
    std::getline(std::cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (size_t i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome {true};
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (size_t i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false; 
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome)
        std::cout << "The word, " << s << ", is a palindrome.\n";
    else 
        std::cout << "The word, " << s << ", is not a palindrome.\n";

    return 0;
}