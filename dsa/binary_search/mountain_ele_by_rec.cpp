#include<iostream>
using namespace std;
int mountRec(int arr[],int s,int e){
    int mid=e+(s-e)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(arr[mid]<arr[mid+1]){
       return mountRec(arr,mid+1,e);
    }
    else 
        return mountRec(arr,s,mid-1);

    

}

int main(){cout<<"enter the size of the array "<<endl;
int n;
cin>>n;
    int *arr=new int[n];//heap memory allocation
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<< mountRec(arr,0,n-1);
return 0;
}
