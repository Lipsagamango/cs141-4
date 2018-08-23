/*
 *write a c++ program to calculate the area of an equilateral triangle.
 */
#include<iostream>
using namespace std;
int main(){
   //declaring variables
   double side,area;
   // enter length of side
   cout <<"what is the length of side?";
   cin >> side;
   //find the area
   area = (1.73*side*side)/4;
   //display output
   cout << "find the area of triangle:"<< area <<endl;
   return 0;
  }
