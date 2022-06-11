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

//getter&setter-->to access getter & setter define them in public(very important)

    public:
    void setAge(int n){
        age=n;
    }

    int getAge(){
        return age;
    }
    void setGender(char c){
        gender=c;
    }
    char getGender(){
    return gender;
    }



};


int main(){
    //object creation
    Human ramesh;
    cout<<ramesh.getAge();


    //accessing is not available and using getter&setter because it is private.
   


return 0;
}

/*access modifier:-

private-> accessable only in the class where it is created.
public-> access anywhere
protected*/