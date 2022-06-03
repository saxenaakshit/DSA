#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
   for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
             }
               
            
            else
                break;
            
        }
       arr[j+1]=temp;
        
}
}

int main(){

    int size;
    cout<<"enter the size "<<endl;
cin>>size;
int arra[size];
cout<<"enter the elements "<<endl;
for(int i=0;i<size;i++){
    cin>>arra[i];

}
insertionSort(arra,size);
for(int i=0;i<size;i++){
    cout<<arra[i]<<" ";

}
return 0;
}
