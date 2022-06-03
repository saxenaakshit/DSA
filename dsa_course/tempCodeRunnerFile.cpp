 cout<<"enter any value in the console for whicj you want to see the stars printed: "<<endl;
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }