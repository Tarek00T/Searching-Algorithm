#include <bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int arr[mx];
int main()
{
    int n,x;
    cin >>n>>x;
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    int upperbound=-1;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]>x)
        {
            upperbound=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(upperbound==-1)
        upperbound=n;
    cout<<upperbound<<endl;

}
/*8 8
5 6 6 6 8 8 11 11
*/

