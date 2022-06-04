#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sq_root(int n){
    int s=0;
    int e=n;

    int mid=s+(e-s)/2;
    int ans=-1;
    int temp=0;
    
    while(s<=e){
temp=mid*mid;
if(n==temp){
    return mid;
}
else if(temp>=n){
   
    e=mid-1;
}
else if(temp<=n){
    ans=mid;//if number is not perfect square then it is helpful
    s=mid+1;
    }
     mid=s+(e-s)/2;
}
return ans;
}

int main(){
    int n;
    cout<<"enter the element to find out the square root "<<endl;
    cin>>n;
    cout<<sq_root(n);
return 0;
}
