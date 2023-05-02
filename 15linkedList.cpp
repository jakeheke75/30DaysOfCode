#include <iostream>
#include <cstddef>

class Node {
    public:
        int data;
        Node* next;

        Node(int d) {
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
      Node* insert(Node* head, int data) {
          if (head == NULL)
              head = new Node(data);
          else {
              Node* tail {head};
              while (tail && tail->next != NULL)
                  tail = tail->next;
              tail->next = new Node(data);
          }
          return head;
      }

      void display(Node* head) {
          Node* start = head;
          while (start) {
              std::cout << start->data << " ";
              start = start->next;
          }
      }
};

int main() {
	Node* head = NULL;
  	Solution mylist;
    int T, data;
    std::cin >> T;
    while (T-- > 0) {
        std::cin >> data;
        head = mylist.insert(head, data);
    }	
	mylist.display(head);
    return 0;	
}