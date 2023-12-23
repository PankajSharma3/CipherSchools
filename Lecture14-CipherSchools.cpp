#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int c;
    c = *x;
    *x=*y;
    *y = c;
    cout<<"Swapping is completed"<<endl;
}
int main()
{
    int a=3,b=4;
    swap(&a,&b);
    cout<<"The values of a and b after swapping is "<<a<<" "<<b;
}
