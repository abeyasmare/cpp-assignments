 #include <iostream>
using namespace std;

int main(){

float weight,height,bmi;
string description;

cout << "Please entet your weight(kg):  ";
cin >> weight;
cout << "Please entet your height(m):  ";
cin >> height;
bmi = weight/(height*height);
//this code puts 20 and 25 in range as cdc.gov suggests
if (bmi<20){
 description = "underweight";
}else if (bmi >=20 && bmi < 25){
    description = "Healthy";
}else if (bmi>= 25){
 description = "overweight";
}

cout<< "your BMI is "<<bmi << " ,you are "<< description;

return 0;}
