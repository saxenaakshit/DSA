#include<iostream>
using namespace std;
void bubble(int arr[],int size){
    bool issort=false;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                issort=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(issort==false)
        {cout<<"already sorted array"<<endl;
        break;}

    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";

    }
    cout<<endl;

}
int main(){

int arr[5]={1,2,3,4,5};
int arr2[6]={3,1,2,8,7,0};
bubble(arr,5);
bubble(arr2,6);
return 0;
}
