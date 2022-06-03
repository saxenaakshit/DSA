#include<iostream>
using namespace std;
void saydigi(int n,string arr[]){
if(n==0){
return;

}
int num=n%10;
n=n/10;
saydigi(n,arr);
cout<<arr[num]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"enter the number you want to see printed "<<endl;
    int n;
    cin>>n;
    saydigi(n,arr);
return 0;
}
