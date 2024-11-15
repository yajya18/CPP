#include<iostream>
#include<vector>
typedef std::string str_t;
//or
using str_t = std::string;

int main(){
    using namespace std;
    std::string FirstName = "Yajya";
    str_t LastName = "Arora";
    cout<<FirstName<<" "<<LastName;
return 0;
}