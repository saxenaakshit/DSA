#include<iostream>
using namespace std;
int main(){
int size;
int arra[100];
cout<<"enter the size "<<endl;
cin>>size;
cout<<"enter the elements "<<endl;
for(int i=0;i<size;i++){
    cin>>arra[i];

}
int key;
cout<<"enter the element you want to find"<<endl;
cin>>key;
int start=0;
int end=size-1;
int k= (start+end)/2;
while(start<=end){
if(key==arra[k])
cout<<k;
if(key>arra[k])
{
    start=k+1;
    
}
else if(k<arra[k]){
    end=k-1;
}
k= (start+end)/2;

}
return -1;




return 0;
}