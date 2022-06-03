#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==1){
        return 1;
    }
    //processing +call
    return n*factorial(n-1);

}

void counting(int k){

if(k<0){
    return;
}

counting(k-1);
cout<<k<<" ";
}
int main(){
    int n;
    cout<<"enter the number of which you want to find factorial "<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    counting(5);

return 0;
}
