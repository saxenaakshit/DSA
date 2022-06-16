#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//static keyword
class Hero{
    public:
static int time;

string name;
int energy;

Hero(string name,int energy){
    this->energy=energy;
    name=name;
}
static void namef(){
    cout<<time<<" ";
}
};

//defination of static 
int Hero ::time=5;

int main(){
    Hero *paul=new Hero("paul",23);//why it is not printing the name?

    cout<<paul->name<<endl<<paul->energy<<endl<<Hero::time<<endl;
    paul->namef();
return 0;
}
