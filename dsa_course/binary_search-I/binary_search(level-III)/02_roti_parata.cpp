#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool ifpossible(int arr[],int mid,int n,int parata1){

int time=0;
int parata=0;

    for(int j=0;j<n;j++){
     time=arr[j];

     int i=2;
   while(time<=mid){
       parata++;
       time=time+(arr[j]*i);
       i++;
   }
   if(parata>=parata1) return true;
}
return false;
    }


int minitime(int arr[],int n,int size,int p){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(ifpossible(arr,mid,size,p)){
            ans=mid;
            e=mid-1;
        }
        else
        s=mid+1;
    mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
    int parata;
int chef_size;
cout<<"enter the number of paratas to make : "<<endl;
cin>>parata;
cout<<"enter the number of chefs followed by there rank : "<<endl;
cin>>chef_size;
//cout<<"enter array: "<<endl;
int *rank= new int[chef_size];
for(int i=0;i<chef_size;i++){
cin>>rank[chef_size];

int n=rank[1]*((parata*(parata+1))/2);

cout<<minitime(rank,n,chef_size,parata);
}
return 0;
}
