#include<iostream>
#include<vector>
using namespace std;


// // 1. Write a C++ program to create and display a Singly Linked List.
// struct node {
//     int data;
//     node *next;
// };

// class linked_list {
//     private:
//         node *head;
//     public:
//         linked_list(){
//             head = NULL;
//         }
//         void take_node(int n){
//             node *new_node = new node;
//             new_node->data = n;
//             new_node->next = head;
//             head = new_node;
//         }
//         void display(){
//             cout<<"We are printing the linked list: "<<endl;
//             node *temp = head;
//             while (temp != NULL)
//             {
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
            
//         }
// };  


// int main(){
//     int a=1,b=2,c=3;
//     cout<<"hi this program create a linked list and display it "<<endl;
//     cout<< " Enter three number of the node"<<endl;
//     //cin>>a>>b>>c;
//     linked_list lemin;
//     lemin.take_node(a);
//     lemin.take_node(b);
//     lemin.take_node(c);
//     lemin.display();

//     return 0 ;
// }


// Write a C++ program to create a singly linked list of n nodes and display it in reverse order.
struct node {
    int data;
    node *next;
};
class linked_list {
    private:
        node *head;
    public:
    linked_list (){
        head = NULL;
    }
        void add_node(int n){
            node *temp = new node;
            temp->data = n;
            temp->next = head;
            head = temp;
        }
        void reverse(){
            node *prev= new node;
            node *next = new node;
            prev = NULL;
            next = NULL;
            while (head != NULL)
            {
                next = head->next;
                head->next = prev;
                prev = head;
                head = next;
            }
            head = prev;
            
        }
        void display (){
            node *dis = new node;
            dis = head;
            while (dis != NULL)
            {
                cout<<dis->data<<" ";
                dis = dis->next;
            }
        }
};

int main (){
    linked_list lemin;
    lemin.add_node(1);
    lemin.add_node(2);
    lemin.add_node(3);
    lemin.add_node(4);
    lemin.reverse();
    lemin.display();

    return 0;
}
