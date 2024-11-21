#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }
    int x;
    cin >>x;

    int lo=lower_bound(v.begin(),v.end(),x)-v.begin();
    int up=upper_bound(v.begin(),v.end(),x)-v.begin();

    cout<<lo<<endl;
    cout<<up<<endl;
}

