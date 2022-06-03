#include<iostream>
using namespace std;
void mergesarr(int arr[],int s,int mid, int e){
int ind1=mid-s+1;
int ind2=mid-e;
int *arr1=new int[ind1];
int *arr2=new int[ind2];

for(int i=0,k=0;i<=ind1;i++){
    arr1[i]=arr[k];
    k++;
}
int k=mid+1;
for(int i=0;i<=ind2;i++){
    arr2[i]=arr[k++];
 
}
int i=0;
int j=0;
int l=s;
while(i<=ind1&&j<=ind2){
    if(arr1[i]<arr2[j]){
        arr[l]=arr1[i];
        i++;
        l++;

    }

    else{
    arr[l]=arr2[j];
    j++;
    l++;
}
}
while(i<=ind1){
      arr[l]=arr1[i];
        i++;
        l++;
}
while(j<=ind2){
       arr[l]=arr2[j];
    j++;
    l++;
}

// for(int i=0,j=0;i<(e-s+1);i++,j++){
  
// arr[i]=arr1[j];

// }

}
void merges(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    if(s>=e){
        return ;
    }
    merges(arr,s,mid);
    merges(arr,mid+1,e);

    mergesarr(arr,s,mid,e);
}
int main(){
    int arr[5]={4,2,8,5,3};
    merges(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
