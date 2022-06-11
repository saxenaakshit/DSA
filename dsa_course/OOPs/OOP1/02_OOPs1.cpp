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

};
int main(){
    //object creation
    Human obj;

   // accessing is available because it is public
    cout<<obj.age;


return 0;
}

/*access modifier:-

private-> accessable only in the class where it is created.
public-> access anywhere
protected*/