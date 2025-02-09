#include<iostream>
#include<vector>
typedef std::string str_t;
//or
using str_t = std::string;

int main(){
    // using namespace std;

    str_t name;
    int age;
    std::cout<<"What is your full name?: ";
    std::getline(std::cin, name);
    std::cout<<"What is your age? ";
    std::cin>>age;
    std::cout<<"Hello, "<<name<<'\n';
    std::cout<<"You are "<<age<<" years old!!";

    // std::getline(std::cin>>std::ws, name); for removing any input in buffer

return 0;
}