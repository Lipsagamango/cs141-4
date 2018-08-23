/*
 *write a c++ program to enter marks of five subjects and calculate total ,average,percentage.
 */
#include<iostream>
using namespace std;
int main(){
  //declaring variables
  float chem,maths,phy,bio,cs,total,ave,percent;
  //enter  marks of chem
  cout <<"what is the mark in che?";
  cin >> chem;
  //enter marks in maths
  cout << "what is the mark in maths?";
  cin >> maths;
  //enter marks in phy
  cout  << "what is the marks in phy?";
  cin >> phy;  
  // enter marks in bio
  cout <<" what is the marks in bio?";
  cin >> bio;
  //enter marks in cs
  cout <<"what is the marks in cs?";
  cin >> cs;
  //what is the total
  total= (chem+maths+phy+bio+cs);
  //what is the ave
  ave=(total/5);
  //what is the percent
  percent=(total/500*100);
  //display output
  cout <<"the total is:" << total<< endl;
  cout <<"the ave is:" << ave << endl;
  cout <<"the percent is:" << percent << endl;
  return 0;
}

