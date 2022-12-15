#include <iostream>
using namespace std;
int main(){
    int second,sec,minute,hour;
cout << "input the elapsed second:\t";
cin >>second;
hour = second/3600;
minute = (second% 3600)/60;
sec = ((second%3600)%60);

cout <<hour<< ":"<< minute<< ":"<<sec;
return 0;
}
