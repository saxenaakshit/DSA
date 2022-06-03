//rectangular pattern
//solid
/*#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cout<<"enter the rows and columns you want to print \n";
    cin>>rows>>col;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){cout<<"*";
    } 
    cout<<endl;
    }
    return 0;
} */
//hollow
#include<iostream>
using namespace std;
int main(){
     int rows,col;
    cout<<"enter the rows and columns you want to print \n";
    cin>>rows>>col;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==rows||j==1||j==col){
                cout<<"*";
            }
        
            
            
            else
            cout<<" ";
        }
        cout<<"\n";
    }

return 0;
}
