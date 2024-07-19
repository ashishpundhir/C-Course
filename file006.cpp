//get selling price and cost frice from the user and calculate the gain and profit he had on the product

#include <iostream>
using namespace std;
int main() {
  int selling_price;
  int cost_price;
  cout << "enter the selling price\n";
  cin >> selling_price;
  cout << "enter the cost_price\n";
  cin >> cost_price;
  int value = selling_price - cost_price;
  
  if (selling_price > cost_price) {

    cout << "You gain the profit of Rs.  \t\t";
    cout << value;

  } else if (cost_price > selling_price) {
    cout << "Your loss ammount is  \t\t";
    cout << -value;
  }

  else {
    cout << "you have no profit and no loss";
  }
}