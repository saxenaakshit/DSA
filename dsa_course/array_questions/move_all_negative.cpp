#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){

    cin>>arr[i];
}
}
void sort(int ar[],int n){
 int j = 0;
 int i=0;
  
        while(i<n){
        if (ar[i] < 0)
        {
            //if (i != j)
                swap(ar[i], ar[j]);
            j++;
          //  i++;
        }
        i++;
    }
    

    
    
}
int main(){
    int size;
    cout<<"enter the size : "<<endl;
    cin>>size;
    int *arr=new int[size];
    inp(arr,size);
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    

return 0;
}