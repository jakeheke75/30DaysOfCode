#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// performance measure header
#include <iomanip>
#include <chrono>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

        // my solution proposal
        Node* removeDuplicates(Node *head) {
            vector<int> values;
            Node *start{nullptr}, *head2{nullptr};
            while(head) {
                values.push_back(head->data);
                head = head->next;
            }
            if(!values.empty()) {
                values.erase(unique(values.begin(), values.end()), values.end());
                start = new Node(values[0]);
                head2 = start;
                for(auto itr=values.begin()+1; itr<values.end(); itr++) {
                    head2->next = new Node(*itr);
                    head2 = head2->next;
                }
            }
            return start;
        }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};

int main()
{
    Node* head=NULL;
    Solution mylist;
    int T,data;
    cout<<"Insert the number of elements of the list\n";
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    auto t1 {chrono::high_resolution_clock::now()};
    head=mylist.removeDuplicates(head);
    auto t2 {chrono::high_resolution_clock::now()};
    chrono::duration<double, milli> ms_double {t2 - t1};
    cout << setprecision(17) << ms_double.count() << " ms\n";    
    mylist.display(head);
}