#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//class creation
class Human
{
//properties-->data members
   public:
    char gender;
    int age;
//non-parameterised constructer
Human(){
    cout<<"I am in constructor"<<endl;

}
//parameterised constructor
Human(int age){
    this->age=age;
}

//copy constructer
Human(Human &temp){
    this->age=temp.age;
    this->gender=temp.gender;

}

/*Destructor-
It got called by default as similiar to the constructor
but only in case of static objects.

In case of dynamic objects we will have call the destructor manually.
*/

~Human(){
    cout<<"Destructor called"<<" "<<endl;
}






};


int main(){
    //object creation
    Human ramesh;//static creation
    ramesh.gender='m';
    cout<<ramesh.age<<endl;
    cout<<ramesh.gender<<endl;

    Human *suresh=new Human(10);
    suresh->gender='f';

    //where this pointer suresh will get stored in the static memory
    
    cout<<suresh->age<<endl;
    cout<<suresh->gender<<endl;

     Human jignesh(ramesh);//static can only be allocated in static object

    cout<<jignesh.age<<endl;
    cout<<jignesh.gender<<endl;

    delete suresh;



    
  
   


return 0;
}
