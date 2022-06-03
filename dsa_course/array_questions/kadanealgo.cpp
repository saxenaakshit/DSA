#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//through this algo we find maximum continous sum ignoring negative numbers
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int kadane(int arr[],int n){
int maxAbTak=0;
int ans=INT_MIN;
for(int i=0;i<n;i++){

    maxAbTak=maxAbTak+arr[i];
    ans=max(maxAbTak,ans);
    if(maxAbTak<0){
        maxAbTak=0;
    }
}
return ans;

}
int main(){ int key;
    int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
    cout<<"the maximum continous sum is: "<<kadane(array,size);


return 0;
}
