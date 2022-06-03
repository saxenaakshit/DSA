#include<iostream>
using namespace std;
void rev(int arr[],int size){
    int i=0;
   int j=size-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;

          }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }



}

int main(){
int size;
int arra[100];
cout<<"enter the size "<<endl;
cin>>size;
cout<<"enter the elements "<<endl;
for(int i=0;i<size;i++){
    cin>>arra[i];

}
rev(arra,size);
return 0;
}
