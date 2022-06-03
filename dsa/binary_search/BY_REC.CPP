#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

}
int binsearch(int arr[],int s,int e,int key){
    cout<<"function call---->"<<endl;
    print(arr,s,e);//to see how the function call is working out
        int mid=s+((e-s)/2);
    if(s>e){
        return -1;
    }
    

    else if(arr[mid]==key)
    return mid;
    else if(arr[mid]<key){
        return binsearch(arr,mid+1,e,key);

    }
    else
    return binsearch(arr,s,mid-1,key);
}
int main(){cout<<"enter the size of the array "<<endl;
int n;
cin>>n;
    int *arr=new int[n];//heap memory allocation
    cout<<"enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"enter the key i will tell you the index "<<endl;
    int key;
    cin>>key;
  int ans= binsearch(arr,0,n-1,key);
  cout<<"the index of the element is : "<<ans;
return 0;
}
