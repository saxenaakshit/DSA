#include<iostream>
using namespace std;
int main(){

cout<<"enter the binary number ";
long long int num;
int count=0;
cin>>num;
while(num>0){
   long long int i=num%10;
    if(i==1){
        count++;
        
    }
    else{

    }
    num=num/10;
}
cout<<"the number of 1's in the given binary number is " << count;
return 0;
}