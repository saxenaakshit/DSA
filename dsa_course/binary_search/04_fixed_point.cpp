#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int fixed_point(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==mid){
          return mid;
      }
      else if(arr[mid]>mid){
          end=mid-1;
      }
      else {
          start=mid+1;
      }
      mid=start+((end-start)/2);
  }
    return -1;
}
int main(){
   
    int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
 
    cout<<"index of the key is :"<<fixed_point(array,size)<<endl;
 

    
return 0;
}
//10, -1, 0, 3, 10, 11, 30, 50, 100    int mid = (low + high)/2;  /*low + (high - low)/2;*/
