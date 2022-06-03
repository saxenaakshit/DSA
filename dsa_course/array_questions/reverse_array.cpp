#include<iostream>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void rev(int arr[],int size){
     int n=(size)/2;
     for(int i=0;i<=n-1;i++){
         int temp=arr[i];
         arr[i]=arr[size-1];
         arr[size-1]=temp;

         size--;
     }
}
void print(int ar[],int n){

    for(int i=0;i<n;i++){
        cout<<" "<<ar[i]<<endl;
    }
}
int main(){
     int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
    rev(array,size);
   print(array,size);


return 0;
}
