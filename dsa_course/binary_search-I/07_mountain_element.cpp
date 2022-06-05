#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int mountain(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
  while(start<end){
      if(arr[mid]<=arr[mid+1]){
          start=mid+1;
      }
      else if(arr[mid]>arr[mid+1]){
          end=mid;
      }
      
      mid=start+((end-start)/2);
  }
    return start;
}
int main(){
    int size;
   
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);

    cout<<"index of the key is :"<<mountain(array,size)<<endl;


    
return 0;
}
