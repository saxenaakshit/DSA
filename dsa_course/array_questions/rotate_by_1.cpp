#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void printrotate(int ar[],int n){
int temp=ar[n-1];
    for(int i=n-1;i>=0;i--){
        swap(ar[i],ar[i-1]);
    }
    ar[0]=temp;
}
void print(int ar[],int n){

    for(int i=0;i<n;i++){
        cout<<" "<<ar[i];
    }
}
int main(){
     int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
    
   printrotate(array,size);
   print(array,size);


return 0;
}

