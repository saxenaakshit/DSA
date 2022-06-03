#include<iostream>
using namespace std;
bool linsearch(int arr[],int n, int key){
    if(n==0){
        return false;}
    else if(arr[0]==key){
            return true;
    }
     else{
     bool ans=linsearch(arr+1,n-1,key);
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
    cout<<"enter the key i will tell you if it is present or not"<<endl;
    int key;
    cin>>key;
   bool ans= linsearch(arr,n,key);
   if(ans==1){
       cout<<"PRESENT"<<endl;
   }
   else
   cout<<"NOT PRESENT "<<endl;

return 0;
}
