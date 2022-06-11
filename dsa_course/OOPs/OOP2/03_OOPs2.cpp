#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    char Name[10];
    char gender[2];
    int weight;
    void Hi(){
        cout<<"Hello humans "<<endl;
    }
    void Hi(int n){
        cout<<"Hello humans after "<<n<<" years"<<endl;
    }


};

class Animal:public Human{
    public:
    
void Hi(){
    cout<<"Hello pets how are you "<<endl;
}

};
int main(){

    Human *Neha=new Human;
    Animal doggy;
    Neha->Hi(5);
return 0;
}




/*parent =private-->All in Accessable

formula-- private>protected>public

parent         mode            result

public         private         private
public         public          public
public         protected       protected
protected      private          private
protected      public           protected
protected      protected         protected
*/



/* Polymorphism--

It is same name but different forms.

It is of two types-

1.compile time polymorphism-
a.method overloading-
it is to use same function in class either with different argument type or with different parameters,
b. Oprator overloading-
using the different operator for different operator.

2. run time poly
a. Method overiding

changing the method according to the requirement.
*/