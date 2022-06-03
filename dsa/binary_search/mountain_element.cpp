#include<iostream>
using namespace std;
int mount(int arr[],int size){
    int s=0;
int e=size-1;
int mid=e+(s-e)/2;
while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else
    e=mid;
    mid=e+(s-e)/2;
}
return s;
}

int main(){
     cout<<"enter the size of the array "<<endl;
int n;
cin>>n;
    int *arr=new int[n];//heap memory allocation
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< mount(arr,n);
return 0;
}
