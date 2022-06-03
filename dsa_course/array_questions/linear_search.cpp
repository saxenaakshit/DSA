#include<iostream>
using namespace std;
void inp(int arr[],int size){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
int search(int arr[],int size,int key){
    int inx;
    for(int i=0;i<size;i++){
        
        if(key==arr[i]){
            inx=i;
            break;
        }
    }
    return inx+1;
}
int main(){
    int key;
    int size;
    cout<<"enter the number of elements :"<<endl;
    cin>>size;
    int *array = new int[size];
    cout<<" enter the elements "<<endl;
    inp(array,size);
    cout<<"enter the key you want to find out "<<endl;
    cin>>key;
    cout<<"index of the key is :"<<search(array,size,key)<<endl;
    
return 0;
}
