#include<iostream>
using namespace std;
void firstocc(int arr[],int si,int ele){
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
    cout<<"first occurence is " << ans<<endl;
}
void lastocc(int arr[],int si,int ele){
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
    cout<<"last occurence is " << ans<<endl;
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
firstocc(arra,size,key);
lastocc(arra,size,key);
return 0;
}
