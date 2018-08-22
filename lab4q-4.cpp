/*
 *write a c++ programe to convert days into years,weeks and dys.
 */
#include <iostream>
using namespace std;
int main(){
  //declaring of variables
  float days,years,weeks,dys;
  //enter the days
  cout << "what is number of days?";
  cin >> days;
  //convert into years
  years = days/365;
  //convert into weeks
  weeks = days/7;
  //convert into dys
  dys = days;
  //display output
  cout << "number of  years: " << years << endl;
  cout << "number of  weeks: " << weeks << endl;
  cout << "number of  dys: " << days << endl;
  return 0;
}
