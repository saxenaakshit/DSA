#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Human {
public:
int age;
int weight;
void solve(){
    cout<<"Hello humans";
}
};

class animals{
    public:
 
    void solve(){
        cout<<"hello guys";
    }
};


class Female:public Human,public animals{



};



int main(){
   

   Female neha;
   
   //to remove inheritance ambiguity
    neha.Human::solve();
    


return 0;
}
/*Inheritence-
the child class can enherit the functions and properties from the parent class

types--
single 
multilevel
multiple
heirarchial
hybrid
*/