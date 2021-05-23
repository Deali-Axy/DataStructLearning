#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    Node *node1;
    node1 = (Node *)malloc(sizeof(struct Node));
    node1->data = 1;

    Node *node2;
    node2 = (Node *)malloc(sizeof(Node));
    node2->data = 2;

    node1->next = node2;

    Node node3;
    node3.data = 3;
    node2->next = &node3;

    cout << node1->data << endl;
    cout << node1->next->data << endl;
    cout << node2->next->data << endl;
    cout << node3.data << endl;

    return 0;
}
