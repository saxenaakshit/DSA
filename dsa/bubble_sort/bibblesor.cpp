#include<iostream>
using namespace std;
int bubbl(int arra[],int size){
    for(int i=0;i<size-1;i++){//i represents number of rounds
        for(int j=0;j<size-i-1;j++){
            if(arra[j]>arra[j+1]){//j represents how much pair comparisions are gonna happen
                swap(arra[j+1],arra[j]);
            }
            else if(arra[j+1]<arra[j]){

            }
        }
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
bubbl(arra,size);
for(int i=0;i<size;i++){
    cout<<arra[i]<<" ";

}

return 0;
}
