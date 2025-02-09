#include<iostream>
#include<cmath>
int main(){
    // double x = 3;
    // double y = 4;
    // double z;

    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(2,3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(3.14);
    // z = ceil(3.14);
    // z = floor(3.99);

    // std::cout << z;

    //Calculating hypotenuse of a triangle
    double A,B;
    double hypotenuse;
    std::cout<<"Calculating the length of the hypotenuse"<<std::endl;
    using namespace std;
    cout<<"What is the length of 1st side?: ";
    cin>>A;
    cout<<"\nWhat is the length of 2nd side?: ";
    cin>>B;
    double a = pow(A,2);
    double b = pow(B,2);
    double h = sqrt(a+b);
    cout<<"The length of the hypotenuse is : "<<h;
    return 0;
}