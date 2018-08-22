/*
 *write a c++ programe to enter temp in fahrenheit and convert it into celcius.
 */
#include <iostream>
using namespace std;
int main(){ 
    // declearing variables
    double fahrenheit,celcius;
    // enter temp in fahrenheit 
    cout << "what is the temp in fahrenheit?";
    cin >> fahrenheit;
    // convert into celcius
    celcius = (fahrenheit-32)*9/5;
    //display the output
    cout << "temp in celcius : " << celcius << endl;
    return 0;
}

