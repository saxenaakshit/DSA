#include<iostream>
using namespace std;

int sumar(int arr[],int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return arr[0];

    }
    else {
      
        int ans=arr[0]+sumar(arr+1,n-1);
        return ans;
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
    cout<<"the sum of the array is : "<<sumar(arr,n)<<endl;
return 0;
}
