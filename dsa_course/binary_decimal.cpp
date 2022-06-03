#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number for which you find out the bianry number: "<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    int bit;
    while(n!=0){
        
         bit=n&1;
         ans=(bit*pow(10,i))+ans;
         n=n>>1;
         i++;
         
    }
    cout<<ans;
return 0;
}
