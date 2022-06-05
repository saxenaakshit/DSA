#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int binary_search1(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==key){
          return mid;
      }
      else if(arr[mid]>key){
          end=mid-1;
      }
      else if(arr[mid]<key){
          start=mid+1;
      }
      mid=start+((end-start)/2);
  }
    return -1;
}
int main(){
    int key;
    int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
    cout<<"enter the key you want to find out "<<endl;
    cin>>key;
    cout<<"index of the key is :"<<binary_search1(array,size,key)<<endl;
    cout<<binary_search(array,array+size,key);

    
return 0;
}
