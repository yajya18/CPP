#include<iostream>
#include<vector>
typedef std::string str_t;
//or
using str_t = std::string;

int main(){
    using namespace std;
    std::string FirstName;
    str_t LastName;
    int age;
    cout<<"What is your first name? ";
    cin>>FirstName;
    cout<<"What is your Last name? ";
    cin>>LastName;
    cout<<"What is your age? ";
    cin>>age;
    cout<<'\n'<<"Hi, "<<FirstName<<" "<<LastName<<endl;
    cout<<"You are "<<age<<" years old";
return 0;
}