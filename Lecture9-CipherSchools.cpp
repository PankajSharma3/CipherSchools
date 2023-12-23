#include<iostream>
using namespace std;
int compare(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<compare(a,b);
}
