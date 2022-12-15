#include <iostream>
using namespace std;
int main (){
    int number,temp,remainder;
    bool isvalid=false;
//this will make sure the value entered by the user is positive intiger.
while(!isvalid){
    cout<< "Enter a number between 0 - 32767:  ";
    cin >>number;
if (number >=0 && number <=32767 ){
    isvalid = true;
}else{
cout<< "Invalid input the number must be between 0-32767\n";
}
    }

    for(int counter=100000;counter>1;counter/=10 ){
      remainder = number%counter;
for (int n=counter/10; n>=1; n/=10){
     temp = remainder/n;
    cout<< temp<< "    ";
    remainder= remainder%n;
}cout<< endl;
    }


return 0;}
