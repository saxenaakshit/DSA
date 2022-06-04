#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void pivot(int arr[],int n){
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
    cout<<arr[s];

}
int main(){
    int key;
    int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
   
    pivot(array,size);
 

    
return 0;
}
