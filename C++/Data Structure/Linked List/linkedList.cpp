/*
    * Linked List implentation in C++    
*/
#include <iostream>
using namespace std;

struct node {

    int data;
    node *next;
};

class Linked_list {

    private:
        node *head, *tail;
    public:
        Linked_list() {

            head = NULL;
            tail = NULL;
        }
    
    void insert(int n) {
        node * tmp = new node;
        tmp -> data = n;
        tmp -> next = NULL;

        if(head == NULL) {
            
            head = tmp;
            tail = tmp;
        }else{

            tail->next =tmp;
            tail = tail->next;
        }
    }

    void display() {
        node *tmp;
        tmp = head;
        while(tmp != NULL) {
            cout << tmp -> data << " ";
            tmp = tmp -> next;
        }
    }
    void deleteNode(int x)
    {
        if(head == NULL)
        {
            cout<<"Linked List is empty"<<endl;
            return;
        }
        if(head->data == x)
        {
            node* temp = head;
            head = head->next;
            delete(temp);
            return;
        }
        node* curr = head;
        while(curr->next && curr->next->data != x)
        {
            curr = curr->next;
        }
        if(curr->next == NULL)
        {
            cout<<"Element Not Found To Delete"<<"\n";
        }
        else
        {
            node* temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
    }
};

int main() {
    
    Linked_list a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(5);
    cout << "The linked list is: " << endl;
    a.display();
    return 0;
}
