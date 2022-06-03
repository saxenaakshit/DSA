#include<iostream>
using namespace std;

bool issorted(int arr[],int n){
if(n==0||n==1){
    return true;
}
else if(arr[0]>arr[1]){
    return false;
}
else{
    bool ans=issorted(arr+1,n-1);
    return ans;
}
}
int main(){cout<<"enter the size of the array "<<endl;
int n;
cin>>n;
    int *arr=new int[n];//heap memory allocation
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< issorted(arr,n)<<endl;
return 0;
}
