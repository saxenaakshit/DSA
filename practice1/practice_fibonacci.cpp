#include<iostream>
using namespace std;
int main(){

int num;
int a=0;
int b=1;
int next;
cin>>num;
cout<<a<<" "<<b;
for(int i = 0;i<=num;i++){
    next=a+b;
    cout <<" "<<next;
    a=b;
    b=next;
    

}
return 0;
}