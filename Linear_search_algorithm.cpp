#include<bits/stdc++.h>
using namespace std;
void linear_search_algo()
{
    int n,flag=0;
    cin >>n; //input any size
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin >>array[i]; //input array elements
    }
    int target;
    cin >>target; // find target which we need
    for(int i=0; i<n; i++)
    {
        if(target==array[i]) // target and this array element index i th both are equal then into flag=1,break it other wise else flag=0
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
        cout<<"NOT FOUND"<<endl;  //target this element given show the element then found or other wise not.
    else
        cout<<"FOUND"<<endl;

}
int main () //code first read main function
{
    int t=1;
//cin >>t;
    while(t--) //testcase 1
    {
        linear_search_algo();
    }
}
