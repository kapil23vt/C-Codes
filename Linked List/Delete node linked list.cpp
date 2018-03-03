#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void InsertatHead(int key) {
    // add new node pointing to head
    // shift head

    Node* newnode = new Node;
    newnode->data = key;

    // newnode stores address of head, so newnode points to first
    newnode->next = head;
    head = newnode;

    cout << "head data is" << head->data << endl;
}

void Print() {

    Node* temp = head;

    while(temp) {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

void Delete(int n) {

    // When deleting the first position, just move head forward
    if(n == 1) {
        head = head->next;
        return;
    }

    Node *temp = head;

    // when n is 2, temp should point to first node
    // since temp stores address of head, it is already pointing to first node

    for(int i = 0; i < n - 2; i++)
    {
        temp = temp->next;
        cout << "i is " << i << endl;
    }

    Node* deletenode = temp->next; // nth Node
    temp->next = deletenode->next; // (n + 1)th Node
    delete deletenode;

}

int main() {

    head = NULL; //Empty list
    InsertatHead(2);
    InsertatHead(4);
    InsertatHead(6);
    InsertatHead(5); //List: 2,4,6,5
    Print();
    int n;
    cout << "Enter a position" << endl;
    cin >> n;
    Delete(n);
    Print();
    return 0;
}
