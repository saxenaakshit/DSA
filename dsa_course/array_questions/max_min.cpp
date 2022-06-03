#include<iostream>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}}
void printmax(int ar[],int n){
    int ans=INT_MIN;

    for(int i=0;i<n;i++){
       if( ar[i]>ans){
           ans=ar[i];
       }

    }
    cout<<"the greatest number is :"<<ans;
}
void printmin(int ar[],int n){
    int min=INT_MAX;

    for(int i=0;i<n;i++){
       if( ar[i]<min){
          min=ar[i];
       }

    }
    cout<<"the smallest number is :"<<min;
}
int main(){
    int size;
    cout<<"size :"<<endl;
    cin>>size;
    int *array=new int[size];
    inp(array,size);
    printmax(array,size);
    printmin(array,size);

return 0;
}
