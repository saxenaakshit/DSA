#include<iostream>
using namespace std;
int firstocc(int arr[],int si,int ele){
    int s=0,ans=-1;
    int e=si-1;
    int mid=s+e-s/2;
    while(s<=e){
        if(arr[mid]==ele){
            ans=mid;
            e=mid-1;

        }
        else if(ele>arr[mid]){
            s=mid+1;
        }
        else
        e=mid-1;
        mid=s+e-s/2;
    }

 return ans;
}
int lastocc(int arr[],int si,int ele){
    int s=0,ans=-1;
    int e=si-1;
    int mid=s+e-s/2;
    while(s<=e){
        if(arr[mid]==ele){
            ans=mid;
            s=mid+1;

        }
        else if(ele>arr[mid]){
            s=mid+1;
        }
        else
        e=mid-1;
        mid=s+e-s/2;

    }
    return ans;
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
int key;
cout<<"enter the element you want to find"<<endl;
cin>>key;
cout << "the count of "<<key <<" is "<<((lastocc(arra,size,key)-firstocc(arra,size,key))+1)<<endl;
return 0;
}
