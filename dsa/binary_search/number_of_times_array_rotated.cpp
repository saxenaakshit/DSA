#include<iostream>//array rotated = index of the lowest element
using namespace std;
int piviot(int arr[],int size){
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

int main(){
    
int arra[5]={8,10,17,1,3};

cout<<"enter the elements "<<endl;
for(int i=0;i<5;i++){
    cin>>arra[i];

}
cout<<"piviot is "<<piviot(arra,5)<<endl;

return 0;
}