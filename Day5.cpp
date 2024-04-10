// Program for calculating simple interest.
// #include<iostream>
// using namespace std;
// int main() {
//     float p = 1000; // principal
//     float r = 30;   // interest rate
//     float t = 3;  // term
//     float si = (p*r*t)/100; // formula for calculating simple interest.
//     cout<<"Simple Interest: "<<endl;
// }


// Program for calculating simple interest by taking input from user.

// #include <iostream>
// using namespace std;
// int main() {
//     float p;
//     float r;
//     float t;
//     cout << "Please Enter Principal: " << endl; 
//     cin >> p;
//     cout << "Please Enter Interest Rate: " << endl;
//     cin >> r; // Corrected from cin r;
//     cout << "Please Enter Term: " << endl;
//     cin >> t;
//     float si = (p * r * t) / 100;
//     cout << "Simple Interest: " << si << endl;
//     }

// Program for simple calculator.

#include<iostream>
using namespace std;
int main() 
{
    int x;
    int y;
    string arithmeticOperation; 
    cout<<"Please! Enter first number: ";
    cin>>x;
    cout<<"Please! Enter second number: ";
    cin>>y;
    cout<<"Please! Enter arithmetic operation: ";
    cin>>arithmeticOperation;
    if(arithmeticOperation == "Addition") {
        int sum = x + y;
        cout<<"The sum of first and second number is: "<<sum<<endl;
    }
    else if(arithmeticOperation == "Subtraction"){
        int sub = x - y;
        cout<<"The difference between first and second number is: "<<sub<<endl;
    }
    else if(arithmeticOperation == "Multiplication"){
        int mul = x * y;
        cout<<"The product of first and second number is: "<<mul<<endl;
    }
    else if (arithmeticOperation == "Modulus") {
    int mod = x % y;
    cout << "The modulus of first and second number is: " << mod << endl;
    }
    else if(arithmeticOperation == "Division"){
        float div = x / y;
        cout<<"The division of first and second number is: "<<div<<endl;
    }
}
