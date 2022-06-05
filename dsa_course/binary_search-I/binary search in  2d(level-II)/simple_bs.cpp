#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void inp(int arr[][3],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
}
bool binary_search1(int arr[][3],int n ,int row,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
  while(start<=end){
      if(arr[row][mid]==key){
          return true;
      }
      else if(arr[row][mid]>key){
          end=mid-1;
      }
      else if(arr[row][mid]<key){
          start=mid+1;
      }
      mid=start+((end-start)/2);
  }
    return false;
}


bool bs(int arr[][3],int n,int target){

    int s=0;
    int e=n-1;
   int  mid=s+e/2;
    while(s<=e){
        if(arr[mid][0]==target){
            return true;
        }
        else if(arr[mid][n-1]==target){
            return true;
        }
        else if(arr[mid][0]<=target && arr[mid][n-1]>=target){
            int ans=binary_search1(arr, n,mid,target);
return ans;

        }
        else if(arr[mid][0]>target){
            e=mid-1;
        }
        else if(arr[mid][n-1]<target){
            s=mid+1;
        }
         mid=s+e/2;
    }

return false;

    }

int main(){
    int n,m,key;
    cout<<"enter number of rows and columns "<<endl;
    cin>>n;

    cout<<"enter key: "<<endl;
    cin>>key;

    cout<<"enter the array ";
    int array[n][n];
    inp(array,n);
    bs(array,n,key);



return 0;
}
