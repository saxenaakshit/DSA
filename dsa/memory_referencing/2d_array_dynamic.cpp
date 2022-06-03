#include<iostream>
using namespace std;
int main(){
    //creating a normal 2-d array
    int m,n,k;
    cout<<"for normal array "<<endl;
    cin>>m>>n;
    int arr1[m][n];
    //creating a 2-d array in heap memory
    cout<<"for the array created by dynamic memory allocation "<<endl;
    cin>>k;
    int **arr=new int*[k];
    //joining each pointer with an array
    for(int i=0;i<k;i++){
     arr[i]=new int[k];
    }
    //taking input
    cout<<"enter the array "<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    //printing the array
     for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//creation of arry of differnt column and rows
cout<<" array whose rows and columns are differnt "<<endl;
int row,col;
cin>>row>>col;
int **arr2=new int*[row];
for(int i=0;i<row;i++){
    arr2[i]=new int[col];
}
//input and printing
cout<<"enter the array "<<endl;
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //printing the array
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
       //releasing the memory
    for(int i=0;i<row;i++){
        delete []arr2[i];
    }
    delete []arr2;

    //creation of jagged array

/* jagged array is a type of array in which the numbers of columns in each row is different 

like rows are three but the number of columns can be differnt in each row
*/





return 0;
}
