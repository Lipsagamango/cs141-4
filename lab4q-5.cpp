/*
 *write a c++ programe to enter two angles of a triangle(ABC) and find the third angle.
 */
#include <iostream>
using namespace std;
int main(){
  //declearing variables 
  float A,B,C;
  //enter measurement of angle A
  cout << "what is the measurement of angle A?" << endl;
  cin >> A;
  //enter measurement of angle B
  cout << "what is the measurement of angle B?"<< endl;
  cin >> B;
  //find the measurement of angle C
  C = 180-(A+B);
  // display output 
  cout << "measurement of angle C : " << C << endl;
  return 0;
}
