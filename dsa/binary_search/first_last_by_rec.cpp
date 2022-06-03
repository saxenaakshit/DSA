#include<iostream>
using namespace std;

void first_occ(int arr[],int s,int e,int key){

    int mid=e+(s-e)/2;
    
    if(s>=e){
        return ;
    }
   

   if(arr[mid]==key&&arr[mid-1]!=key){
       cout<< mid;
   }
   else if(arr[mid]==key){
    
       first_occ(arr,s,mid-1,key);
     
    }
    else if(arr[mid]>key){
    first_occ(arr,s,mid-1,key); 
    }
    else if(arr[mid]<key){
         first_occ(arr,mid+1,e,key);
    }
    
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
    cout<<"enter the key i will tell its first position "<<endl;
    int key;
    cin>>key;
first_occ(arr,0,n-1,key);
return 0;
}
