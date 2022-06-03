/*#include<iostream>
using namespace std;
int main(){
    cout<<"enter any value"<<endl;
int num,num1;
cin>>num;
cin>>num1;
while(num!=0){
    cout<<"value entered "<<num<<endl;
    num--;
    cout<<"my name is akshit "<<endl;
}
int c=0;
while(num1!=0){
    c=c+num1;
    num1--;
    cout<<c;
}
cout<<"sum "<<c;

//for loop(to do)
return 0;
}*/

//prime number

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int i=2;
    int ctr=0;
    while(i<sqrt(n)){//or simply n
        if(n%i==0){
            ctr++;
            break;
        }
        i++;
    }
    if(ctr==0){
        printf("number is prime");

    }
    else
    printf("number is not prime ");
return 0;
}

