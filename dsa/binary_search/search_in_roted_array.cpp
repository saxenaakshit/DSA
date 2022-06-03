#include<iostream>
using namespace std;
int ispiviot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid= s+(s-e)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
         s=mid+1;}
        else{
         e=mid;}
         mid=s+(e-s)/2;  }
      
        return s;
    }
int binary(int arr[],int s,int e,int key){
        int start=s;
int end=e;
int k= (start+end)/2;
while(start<=end){
if(key==arr[k])
return k;
else if(key>arr[k])
{
    start=k+1;
    
}
else{
    end=k-1;
}
k= (start+end)/2;

}
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
int piv=ispiviot(arra,size);

    
        if(arra[piv]<key && key<arra[size-1]){
         cout<<binary(arra,piv+1,size-1,key);}
        else{
      
         cout<<binary(arra,0,piv-1,key);}
     

return 0;
}
