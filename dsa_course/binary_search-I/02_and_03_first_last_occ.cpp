#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int firstocc(int arr[],int size,int key){
    int start=0;int ans=-1;
    int end=size-1;
    int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==key){
          ans= mid;
          end=mid-1;
      }
      else if(arr[mid]>key){
          end=mid-1;
      }
      else if(arr[mid]<key){
          start=mid+1;
      }
      mid=start+((end-start)/2);
  }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int start=0;int ans=-1;
    int end=size-1;
    int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==key){
          ans= mid;
          start=mid+1;
      }
      else if(arr[mid]>key){
          end=mid-1;
      }
      else if(arr[mid]<key){
          start=mid+1;
      }
      mid=start+((end-start)/2);
  }
    return ans;
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
    cout<<"first occurence of the key is :"<<firstocc(array,size,key)<<endl;
    cout<<"Last occurence of the key is :"<<lastocc(array,size,key)<<endl;

    cout<<"number of occurences in the key "<<(lastocc(array,size,key)-firstocc(array,size,key)+1)<<endl;
    

    
return 0;
}