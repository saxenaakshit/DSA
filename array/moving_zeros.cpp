#include<iostream>

#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size1;
    cout<<"enter the size of the first array "<<endl;
    cin>>size1;


cout<<"now enter the first array :"<<endl;

    for(int i=0;i<size1;i++){
        int k;
        cin>>k;
v.push_back(k);
    }

    int k=0;
    for(int j=0;j<v.size();j++){
        if(v[j]!=0){
     swap(v[j],v[k]);
     k++;
        }
    }
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }


return 0;
}
