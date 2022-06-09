#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//class creation
class Human
{
//properties-->data members
    private:
    char gender;
    int age;

    int getAge(){
        return age;
    }


};
int main(){
    //object creation
    Human obj;

    //accessing is not available because it is private
    cout<<obj.age;


return 0;
}

/*access modifier:-

private-> accessable only in the class where it is created.
public-> access anywhere
protected