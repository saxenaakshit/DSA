#include<iostream>
using namespace std;
int sels(int arra[],int size){
    int minindex;
    for(int i=0;i<size-1;i++){
         minindex=i;
        {
            for(int j=i+1;j<size;j++){
                if(arra[j]<arra[minindex])
                {
minindex=j;
                }
                swap(arra[minindex],arra[i]);
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


sels(arra,size);
for(int i=0;i<size;i++){
    cout<<" "<<arra[i];

}



return 0;
}
