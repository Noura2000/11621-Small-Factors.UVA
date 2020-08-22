#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    long long ml=1,n;
    vector<long long>v;
    for(int i=0;i<32;i++)
        for(int j=0;j<32;j++)
    {
        ml=pow(2,i)*pow(3,j);
        if(ml>pow(2,31)) break;
        v.push_back(ml);
    }
    sort(v.begin(),v.end());
    while(cin>>n&&n!=0)
    {
        cout<<*lower_bound(v.begin(),v.end(),n)<<endl;
    }
    return 0;
}
