#include<bits/stdc++.h>
using namespace std;
void  binary_search_algorithm()
{
    int n;
    cin >>n; //input any size
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];//input array elements
    }
    int target;
    cin >>target;// find target which we need
    if(binary_search(v.begin(),v.end(),target)) //using STL binary_srach function
        cout<<"FOUND"<<endl; //target this element given show the element then found or other wise not.
    else
        cout<<"NOT FOUND"<<endl;
}
int main() //code first read main function
{
    int t=1;
    //cin >>t; //testcase 1 ,2,3...
    while(t--)
    {
        binary_search_algorithm();//call..
    }
}
