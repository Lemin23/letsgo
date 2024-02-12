#include<iostream>
#include<string>
using namespace std;

class Lemin {
    private:
        string n;
        int age;
        int blas;

    public:
        Lemin ();
        Lemin (string name);
        Lemin (string name,int age, int n);
        
};

Lemin::Lemin ()
    : Lemin {"lemin",0,0} {
        cout<<"no-args constructor"<<endl;

}
Lemin::Lemin (string name)
    : Lemin {name,0,0} {
        cout<<"one-arg constructor"<<endl;
}

Lemin::Lemin (string name, int age , int num)
    : n{name}, age{age}, blas{num} {
        cout<<"Three agr constructor"<<endl;
    }


int main (){
    Lemin anohter;
    Lemin bechir ("bechir");
    Lemin persong("lemin",20,2);
    
  

    return 0 ; 
}