#include<iostream>
using namespace std;
void sumo(int arr[],int size){
int store=0;
for(int i=0;i<size;i++){
    store=store+arr[i];
}
cout<<"the sum of the array you entered is :" << store<<endl;
}

int main(){
int size;
int arra[100];
cout<<"enter the size "<<endl;
cin>>size;
cout<<"enter the elements "<<endl;
for(int i=0;i<size;i++){
    cin>>arra[i];

}
sumo(arra,size);
return 0;
}