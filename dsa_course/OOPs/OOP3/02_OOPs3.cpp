#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//abstarct class

class animal{
    public:
int age;
string name[10];

virtual void speak(){};

};

class Cat:public animal{

//overiding
void speak(){
    cout<<"I am a cat "<<endl;
}
};

class Lion:public animal{
    public:

    void speak(){
        cout<<" I am a lion "<<endl;
    }
};
class dog:public animal{

    public:
//    void speak(){
//         cout<<" I am a dog "<<endl;
//     }

//it is not implementing it is termed as abstract class too
};

int main(){

    Lion sheru;
   sheru.speak();
   dog doggy;
  //doggy.speak();
return 0;
}
