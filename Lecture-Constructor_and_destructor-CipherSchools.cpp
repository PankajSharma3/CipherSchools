#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float img;
    public:
    void set(int real,int img){
        this ->real = real;
        this ->img  = img;
    }
    void distance(){
        float dist;
        dist=(real*real)+(img*img);
        cout<<"Distance : "<<(dist)<<endl;
    }
};
class acc{
    public:
    int amount;
    int days;
    acc(){
        amount =0 ;
        days=0;
        cout<<"The constructor is called"<<endl;
    }
    ~acc()
    {
        cout<<"Now thr use of object is complete and the abject is getting destroyed"<<endl;
    }
    void initial(){
        amount = 0;
        days = 0;
    }
};
int main()
{
    acc c,d;
    complex a,b;
    a.set(3,4);
    a.distance();
}
