#include<iostream>
using namespace std;
int main(){
    //1.half triangle(upper2)
    cout<<"enter any value in the console for whicj you want to see the stars printed: "<<endl;
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2.inverted half triangle(lower2)
    cout<<"enter any value in the console for which you want to see the stars printed: "<<endl;
    int n1;
    cin>>n1;
           
    for(int row1=1;row1<=n1;row1++){

        for(int col1=1;col1<=n1-row1+1;col1++){
            cout<<"*";
            
        }
        cout<<endl;
    }
    //3.inverted half triangle lower by using counter
        cout<<"enter any value in the console for which you want to see the stars printed: "<<endl;
    int n2;
    cin>>n2;
           int n3=n2+1;
    for(int row1=1;row1<=n2;row1++){
n3--;
        for(int col1=1;col1<=n3;col1++){
            cout<<"*";
            
        }
        cout<<endl;
    }

    //4.half traingle(upper1)
        cout<<"enter any value in the console for whicj you want to see the stars printed: "<<endl;
    int n4;
    cin>>n4;
    for(int row=1;row<=n4;row++){
        for(int col=1;col<=n4-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
     //5.inverted half traingle(lower1)
        cout<<"enter any value in the console for whicj you want to see the stars printed: "<<endl;
    int n5;
    cin>>n5;
    for(int row=1;row<=n5;row++){
        for(int col=1;col<=row-1;col++){
            cout<<" ";
        }
        for(int col=1;col<=n5-row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    //6.hollow inverted half triangle(lower2) 
     cout<<"enter any value in the console for which you want to see the stars printed: "<<endl;
    int n1;
    cin>>n1;
           
 for(int row1=1;row1<=n1;row1++){
if(row1==1||row1==n1){
    if(row1==1){
        for(int col1=1;col1<=n1;col1++){
            cout<<"*";
            
        }
    }
   else if(row1==n1){
        cout<<'*';

    }
}
else{

    cout<<"*";
       for(int col1=1;col1<=n1-row1-1;col1++){
            cout<<" ";
            
        }
        cout<<"*";

}
cout<<endl;
    }
    
    




return 0;
}
