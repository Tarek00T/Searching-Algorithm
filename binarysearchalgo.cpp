#include<bits/stdc++.h>
using namespace std;
int bsa(int arr[],int size,int target)
{
    int left=0, right=size-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;

}
int main ()
{
    int arr[]= {1,2,5,7,8,21,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=21;
    int result = bsa(arr, size, target);
    if(result!=-1) cout<<result<<endl;
    else cout<<"NOT"<<endl;
}
