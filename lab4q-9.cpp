/*
 *write a c++ programe to enter P,T,R and calculate simple interest.
 */
#include<iostream>
using namespace std;
int main(){
  //declaration variables
  float P,T,R,I;
  //enter P
  cout << "what is value of P";
  cin >> P;
  //enter T
  cout << "what is the value of T";
  cin >> T;
  //enter R
  cout << "what is the value of R";
  cin >> R;
  //calculate I
  I=P*T*R;
  //display output
  cout <<"the value of I:" << I<<endl;
  return 0;
 } 
