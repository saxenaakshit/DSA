#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> v1,vector<int> v2)
{
    vector<int> v3;
    int m = v1.size();
    int n = v2.size();
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (v1[i] <= v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else
        {
            v3.push_back(v2[j]);
            j++;
        }
    }
    while (i < m)
    {
        v3.push_back(v1[i]);
        i++;
    }
    while (j < n)
    {
        v3.push_back(v2[j]);
        j++;
    }
    return v3;
}

int main()
{
    vector<int> first;
    vector<int> sec;
    int size1, size2;
    cout << "enter the size of the first array " << endl;
    cin >> size1;
    cout << "enter the size of the second array " << endl;
    cin >> size2;

    cout << "now enter the first array :" << endl;

    for (int i = 0; i < size1; i++)
    {
        int k;
        cin >> k;
        first.push_back(k);
    }
    cout << "now enter thesecond array :" << endl;

    for (int i = 0; i < size2; i++)
    {
        int k;
        cin >> k;
        sec.push_back(k);
    }
    
    vector<int> thi=merge(first,sec);
    
    cout << "the sorted merged array is : " << endl;
    for (int i=0;i<thi.size();i++)
    {
        cout << thi[i] << " ";
    }

    return 0;
}