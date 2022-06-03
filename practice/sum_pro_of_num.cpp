#include<iostream>
using namespace std;
int main(){

int num,count=0,c,count1=1;
cin>>num;

while( num>0){
    c=num%10;
    count=count+c;
    count1=count1*c;
    num=num/10;

}
cout<<"the product is "<<count1<<endl;
cout<<"the sum is "<<count;
return 0;
}