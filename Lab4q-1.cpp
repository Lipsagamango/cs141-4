/*
 *write a c++ program to enter length in cm and convert it into m and km.
 */
#include<iostream>
using namespace std;
int main(){
   //declaration of variables
   float cm,m,km;
   
   //enter length in cm
   cout << "what is the length in cm?";
   cin >> cm;
   //convert into m
   m = cm/100;
   //convert into km
   km = m/1000;
   //display the output
   cout << "length in m: "<< m << endl;
   cout << "length in km: "<< km << endl;
return 0;
}
