/*
 *write a c++ programe to enter temp in celcius and convert it into fahrenheit.
 */
#include <iostream>
using namespace std;
int main(){
    //declaration of variables
    double celcius,fahrenheit;
    //enter temp in celcius
    cout << "what is the temp in celcius?";
    cin >> celcius;
    //convert into fahrenheit
    fahrenheit = (celcius*5/9)+32;
    //display the output
    cout << "temp in fahrenheit: " << fahrenheit << endl;
    return 0;
  }
      

