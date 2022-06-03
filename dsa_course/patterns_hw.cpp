#include<iostream>
using namespace std;
int main(){       
    cout<<"enter any value in the console for whicj you want to see the stars printed: "<<endl;
    int n4;
    cin>>n4;

    /*by last two patterns*/
    //half triangle lower
    for(int row=1;row<=n4;row++){
        for(int col=1;col<=n4-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<" *";
        }
 
        cout<<endl;
    }
    //inverted half triangle lower
    for(int row=1;row<=n4;row++){
        for(int col=1;col<=row-1;col++){
            cout<<" ";
        }
        for(int col=1;col<=n4-row+1;col++){
            cout<<" *";
        }
        cout<<endl;
    }


return 0;
}
