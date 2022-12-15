 #include <iostream>
using namespace std;

int main(){
int firstNumber,secondNumber;
cout << "enter the first number: ";
cin >> firstNumber;
cout << "enter the second number: ";
cin>> secondNumber;
// using xor to swap two variables
firstNumber = firstNumber ^ secondNumber;
secondNumber = firstNumber ^ secondNumber;
firstNumber = firstNumber ^ secondNumber;

cout << "first number: "<< firstNumber<< endl<< " second number: "<< secondNumber;

return 0;}
