#include<iostream>
using namespace std;
int piviot(int arr[],int size,int ele){
    int s=0;
    int e=size-1;
    int mid= s+((e-s)/2);
    while(s<=e){
        if(arr[mid]==ele){
        return mid;}
        else if(arr[mid]<ele){
         s=mid+1;}
         else if(arr[mid]>ele){
         e=mid-1;
         }
         mid=s+((e-s)/2);  }
    
      return -1;
    }



 
    

int main(){
    
int arra[5]={1,12,14,15,19};

//cout<<"enter the elements "<<endl;

cout<<"piviot is "<<piviot(arra,5,15)<<endl;

return 0;
}