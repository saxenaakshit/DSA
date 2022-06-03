#include<iostream>
using namespace std;
int main(){
    int arra[7]={1,2,3,4,7,9,10};
    int key;
cout<<"enter the element you want to find"<<endl;
cin>>key;
int start=0;
int end=6;
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

return 0;
}
