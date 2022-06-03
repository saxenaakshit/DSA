#include<iostream>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){

    cin>>arr[i];
}
}
void sort(int ar[],int n){
int arr[3]={0};
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            arr[0]++;
        }
        else if(ar[i]==1)
        arr[1]++;
        else if(ar[i]==2)
        arr[2]++;

   
      
    }
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl<<arr[2]<<endl;
    int i=0;
 while(arr[0]!=0){
     ar[i++]=0;
     arr[0]--;
 }
 while(arr[1]!=0){
     ar[i++]=1;
     arr[1]--;
 }
 while(arr[2]!=0){
     ar[i++]=2;
     arr[2]--;
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



