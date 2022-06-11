#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Human {
protected:
int age;
int weight;
void solve(){
    cout<<"Hello humans";
}
};

class animals{
    public:
 
   
};


class Female:public Human,public animals{
//private:
public:
void setAge(int n){
    age=n;
}
int getAge(){
    return age;
}


};



int main(){
   

   Female neha;

  // neha.age=12;
   //inaccesable beacuse protected parent and public class give protected in output so to access it getter & setter will be used.

   neha.setAge(5);
   cout<<neha.getAge();


    


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