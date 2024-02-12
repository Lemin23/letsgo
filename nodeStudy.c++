// over view about node and liked list 

#include<iostream>

using namespace std;

struct node {
    int data;
    node * next;
};

class linked_list{
private:
    node *head, *tails;
public:

    linked_list()
    {
        head = NULL;
        tails = NULL;
    }
    void add_node(int n){
        node *temp = new node;
        temp->data= n;
        temp->next= NULL;

        if (head == NULL)
        {
            head = temp;
            tails = temp;
        }
        else
        {
            tails->next = temp;
            tails = tails->next;
        }
    }


};


int main (){
    linked_list a;
    a.add_node(2);
    a.add_node(1);
    return 0 ;
}

