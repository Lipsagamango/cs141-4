/*
 *write a c++ program to enter base and height of a triangle and find its area.
 */
#include <iostream>
using namespace std;
int main(){
    //declaring variables 
    double B,H,A;
    //enter length of B 
    cout <<"what is the length of B?";
    cin >> B;
    //enter length of H
    cout <<"what is the length of H?";
    cin >> H;
    //find the value of A
    A = (B*H)/2;
    //display output 
    cout <<"what is the value of A:"<< A << endl;
    return 0;
}
    
