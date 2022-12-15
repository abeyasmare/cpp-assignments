
/* 3) setting constant profit margin using memory constant
the input will be positive and it will be the buying price  and the output will be the input(buying price) plus the profit margin of the shopkeeper wanted which is 15%*/
algorithm
getting the buying price
1 GET price
calculating the profit with the profit margin of 15% and finally calculating the selling price
Profit  price * 0.15
Selling_price  profit + price
DISPLAY selling_price

*/
// the profit factor in memory constant
#include <iostream> 

const double PROFIT_MARGIN = 0.15;
using namespace std;

int main (){
    
double price, profit,selling_price;
cout<< "what is the price of the item? ";
// the item’s price which it was bought is price 
cin >> price;
// desired prifit margin is 15%
profit  = price * PROFIT_MARGIN;
selling_price = price + profit;

cout<< "the price is  " << selling_price << "$";   
 return 0;
}

//3.2 the  profit margin in macro definition.
#include <iostream>

#define PROFIT_MARGIN 0.15;
using namespace std;

int main (){

double price, profit,selling_price;
cout<< "what is the price of the item? ";
// the item’s price which it was bought is price
cin >> price;
// desired prifit margin is 15%
profit  = price * PROFIT_MARGIN;
selling_price = price + profit;

cout<< "the price is  " << selling_price << "$";
 return 0;
}

//3.3 the  profit margin in constant litral.
#include <iostream>
using namespace std;

int main (){

double price, profit,selling_price;
cout<< "what is the price of the item? ";
// the item’s price which it was bought is price
cin >> price;
// desired prifit margin is 15%
profit  = price * 0.15;
selling_price = price + profit;

cout<< "the price is  " << selling_price << "$";
 return 0;
}
