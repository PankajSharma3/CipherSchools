#include<iostream>
#include<string>
using namespace std;
class stu{
    public:
    string name;
    int attendence;
    float total_marks;
    void calculate_percentage(){
        cout<<total_marks<<"%";
    }
};
class client{
    private:
    int credit_number;
    int cvv;
    int user_name;
    int password;
    public:
    string name;
    void set_credit_card_number(int number){
        credit_number = number;
    }
};
int main()
{
    // stu a,b,c;
    // a.name = "Rohit";
    // a.attendence = 90;
    // a.total_marks = 69;
    // a.calculate_percentage();
    client a,b,c;
    a.name = "Rohit";
    a.set_credit_card_number(87654);
}
