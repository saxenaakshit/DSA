#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int binary_search1(int arr[],int start,int end,int key){
   
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
void pivot(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    while(s<e){
        if(arr[0]<=arr[mid]){
          
            s=mid+1;
        }
        else if(arr[mid]<=arr[mid+1]){//or use only else
            e=mid;
        }
        mid=s+((e-s)/2);

    }
    if(target<arr[0]){
        cout<<binary_search1(arr,mid+1,n-1,target);
    }
    else if(target>arr[n-1]){
        cout<<binary_search1(arr,0,mid,target);
    }

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
    pivot(array,size,key);
 

    
return 0;
}
