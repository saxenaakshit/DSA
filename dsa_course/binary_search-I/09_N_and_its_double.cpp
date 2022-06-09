#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
bool binary_search1(int arr[],int s,int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[mid]==key){
          return true;
      }
      else if(arr[mid]>key){
          end=mid-1;
      }
      else if(arr[mid]<key){
          start=mid+1;
      }
      mid=start+((end-start)/2);
  }
    return false;
}
bool checkIfExist(int arr[],int n){
  sort(arr, arr+n);
  cout<<arr[0]<<arr[1];
        bool ans;
        int k=n-1;
        for(int i=0;i<k;i++)
        {
            if(arr[i]>0 ){

            int temp=2*arr[i];
                ans= binary_search1( arr,i+1,k,temp);
            }
            else if(arr[i]<0 && (arr[i]%2==0)){
                int temp=(arr[i]/2);
                ans= binary_search1( arr,i+1,k,temp);
            }
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
    cout<<checkIfExist(array,size);
return 0;
}
