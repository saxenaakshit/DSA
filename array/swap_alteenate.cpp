#include<iostream>
using namespace std;
int main(){
int size,k;
int arra[100];
cout<<"enter the size "<<endl;
cin>>size;
cout<<"enter the elements "<<endl;
for(int i=0;i<size;i++){
    cin>>arra[i];

}
if(size%2==0){
    k=size;}
   else{
       k=size-1;
   }

for(int j=0;j<k;j++){
    int temp=arra[j];
    arra[j]=arra[j+1];
    arra[j+1]=temp;
    j++;

}
for(int i=0;i<size;i++){
    cout<<arra[i]<<" ";

}



return 0;
}