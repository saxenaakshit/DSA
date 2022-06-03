#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5]={1,2,3,3,4};
    map <int,int> m;
    for(int i=0;i<5;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<5;i++){
        if(m[arr[i]]>1){
            cout<<arr[i]<<endl;
            break;
        }
    }

return 0;
}
