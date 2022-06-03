#include<iostream>
using namespace std;
int parti(int arr[],int s,int e){

int piviot=arr[s];
int count=0;
for(int i=s+1;i<=e;i++){
    if(arr[i]<=piviot){
        count++;
    }
}

int piviotindex=s+count;
swap(arr[piviotindex],arr[s]);
int i=s,j=e;
while(i<piviotindex&&j>piviotindex){
while(arr[i]<piviot){
    i++;
}
while(arr[j]>piviot)
j--;

if(i<piviotindex&&j>piviotindex){
swap(arr[i++],arr[j--]);}
}
return piviotindex;
}

void quicks(int arr[],int s,int e){
    if(s>=e){
        return;
    }
   int p=parti(arr,s,e);

    quicks(arr,s,p-1);
    quicks(arr,p+1,e);
    
    
}
int main(){
     int arr[10]={4,90,76,2,4,1};
     int n=6;
    quicks(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
