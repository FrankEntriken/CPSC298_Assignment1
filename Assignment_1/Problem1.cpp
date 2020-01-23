#include <iostream>
#include <string>
using namespace std;

int main()
{
  double weightOunces;
  double weightMetric;
  
  cout << "Enter the weight of a package of breakfast cereal in ounces...";
  cin >> weightOunces;

  //convert ounces to metric tons
  weightMetric = weightOunces / 35273.92;
  double boxes = 1 / weightMetric;

  cout << "The weight of the cereal in metric tons is: " << weightMetric << endl;
  cout << "The number of cereal boxes needed to weigh a metric ton is: " << boxes << endl;
}
