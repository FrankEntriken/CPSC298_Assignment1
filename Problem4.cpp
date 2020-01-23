/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Problem 1
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  double cost;
  double years;
  double inflation;
  double totalCost = 0.0;

  cout << "What is the current cost of your item?...";
  cin >> cost;

  cout << "How many years will you yearly order this item for?...";
  cin >> years;

  cout << "What is the yearly inflation of the item?...";
  cin >> inflation;
  inflation = inflation * 0.01;

  //cost of item is inflated each year
  for (int i = 0; i < years; i++)
  {
    totalCost = totalCost + cost;
    cost = cost + (cost * inflation);
  }

  cout << "The total cost after inflation over " << years << " years is $" << totalCost << endl;
  cout << "The cost of the item after " << years << " years is $" << cost << endl;
}
