/*#include<iostream>
using namespace std;
int main(){
//it is comment facility used it is not included in the code
    int num;
    cout<<"enter the value you want to enter"<<endl;
    cin>>num;
    if(5>0)
    cout<<"the value you entered was "<<num<<endl;
else if(5<0)
cout<<"number is negative i.e "<<num;
int num1;
cout<<"enter 2nd value "<<endl;
cin>>num1;

switch (num1)
{
case 0:
cout<<"i am is case 0";
break;
case 7:
cout<<"i am in case 7";
break;

default:
cout<<"please enter a valid value";
    break;
}//make calculator program for practice
return 0;
}
*/

//calculator program

#include<iostream>
using namespace std;
int main(){
    char sign;
    cout<<"enter the operation you want to carry out :"<<endl;
    cin>>sign;
int a,b;
    cout<<"enter first number a: "<<endl;
    cin>>a;
    cout<<"enter second number b: "<<endl;
    cin>>b;

switch(sign){
    case '+':{cout<<"the sum is: "<<(a+b)<<endl;
    break;}
    case '-':{cout<<"the substraction is: "<<(a-b)<<endl;
    break;}
    case '/':{cout<<"the divisoion is: "<<(a/b)<<endl;
    break;}
    case '*':{cout<<"the multiplication is: "<<(a*b)<<endl;
    break;}
    default : {
        cout<<"please enter a valid operation! "<<endl;
    }
}
return 0;
}

