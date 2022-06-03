#include<iostream>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){

    cin>>arr[i];
}
}
void printpair(int ar[],int n,int sum){

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(ar[i]+ar[j]==sum){
               cout<<" the pair is "<<ar[i]<<","<<ar[j]<<endl;
               break;
           }
       }
    }
}
int main(){
    int size;
    cout<<"enter the size : "<<endl;
    cin>>size;
    int *arr=new int[size];
        inp(arr,size);
    int sum;
    cout<<"enter the sum :"<<endl;
    cin>>sum;
    printpair(arr,size,sum);

return 0;
}
