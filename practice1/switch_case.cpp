#include<iostream>
using namespace std;
int main(){
int amt;
cout<<"enter the amount"<<endl;
cin>>amt;
int o=0;
int h=0;
int t=0;
int f=0;


h=amt/100;
amt=amt%100;

cout<<"number of 100 rs notes"<<h<<endl;


f=amt/50;
amt=amt%50;
cout<<"number of 50 rs notes"<<f<<endl;


t=amt/20;
amt=amt%20;
cout<<"number of 20 rs notes"<<t<<endl;


o=amt/1;
cout<<"number of 1rs notes"<<o<<endl;



    


cout<<"enter valid number"<<endl;
    
// while(i>1){
//     cout<<"hello";
//     switch(i){
//         case 2: exit(1);

//     }
// }

return 0;
}