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
Human(int gender,int age){
   // multiple parameterised constructor can be used
    this->gender=gender;
    this->age=age;
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

    Human *akshit=new Human('m',23);

    //where this pointer will get stored in the static memory
    
    cout<<suresh->age<<endl;
    cout<<suresh->gender<<endl;

   









  
   


return 0;
}

/*
features of constructors-
1. No return type
2. same name as class

types of constructor:--

1.Default constructor-
it gets automatically called when no constructors is defined
2.parameterised constructor-
here the values can be specified 
3.Copy Constructor-
it will get default creation if not defined earlier

it can also be created where referencing operator is used




*/