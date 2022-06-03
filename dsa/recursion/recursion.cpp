#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}

int powe(int n){
    //base condition
    if(n==0){
        return 1;
    }
    //recursive relation
    return 3*powe(n-1);
    //processing like updation addition can also be done -----------> if R.R at end than tail recursion otherwise head recursion
    /* code */
}

void counte(int n){
    if(n==0){
        return;//dont want to print less than that
    }
    cout<<" "<<n;
    counte(n-1);
}
int main(){
    int n,m,k;
    cout<<"enter the number to find out the factorial "<<endl;
    cin>>n;
    cout<<"enter the power you want to find of 3 "<<endl;
    cin>>m;
    cout<<"factorial is "<<endl;
    cout<<fact(n)<<endl;
    cout<<" 3 to the power "<<m<<" is:"<<powe(m);
    cout<<endl<<"now enter the number you want to see the counting of :"<<endl;
    cin>>k;
    counte(k);
    

return 0;
}
