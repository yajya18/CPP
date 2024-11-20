#include<iostream>
#include<vector>
typedef std::string str_t;
//or
using str_t = std::string;

int main(){
    using namespace std;
    std::string FirstName;
    str_t LastName;
    cout<<"What is your first name?";
    cin>>FirstName;
    cout<<'\n'<<"What is your Last name";
    cin>>LastName;
    cout<<'\n'<<"Hi, "<<FirstName<<" "<<LastName;
return 0;
}