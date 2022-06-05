#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int ispossible(int arr[],int n,int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            int diff=arr[i]-mid;
            sum=sum+diff;
        }
    }
    return sum;


}

int eko(int arr[],int n,int key){
    int s=0;
   int e= *max_element(arr,arr+n);
   int mid=s+(e-s)/2;
   int ans;

   while(s<=e){
       if(ispossible(arr,n,mid)>=key){
          ans=mid;
          s=mid+1;
       }
       else if(key>ispossible(arr,n,mid)){
           e=mid-1;
       }
       mid=s+(e-s)/2;
   }
   return ans;
}



int main(){
int size;
int target;
cout<<"enter the size and target : "<<endl;
cin>>size>>target;
cout<<"enter array: "<<endl;
int *arr= new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}

cout<<eko(arr,size,target);
return 0;
}
