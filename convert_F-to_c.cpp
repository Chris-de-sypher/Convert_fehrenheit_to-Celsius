// Conversion of fehrenheit to celcius
// (F - 32)* (5/9)
#include <iostream> // iostream provides the basics input and output services for c++ program which uses cin, cout, clog, and cerr for sending data.
// #include is a function that let us use the built in modules in our c++ programm

using namespace std; // declaring the std as a global makes it easier for us to output data easily without invoking the std.
int main(){
    int fehrenheit, celsius; // we declared the variable fehrenheit and celsius which is also the same as int fehrenheit; int celsius; -- i.e this variable are undefined
    cout << "Enter tempreture in °F: \n";
    cin >> fehrenheit;                                          // receives the user input value;
    celsius = (fehrenheit - 32.0) * 5.0 / 9.0;  // Conversion expression for converting Fehrenheit to Celsius
    cout << "Tempreture in fehrenheit :" << fehrenheit << "°F"; // output the user input value which was declared on line 10;
    cout << "Tempreture in Celsius :" << celsius << "° C";      // outputs the the value data after the conversion was carried out on line 11
}