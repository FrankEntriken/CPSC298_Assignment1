#include <iostream>
#include <string>
using namespace std;

int main()
{
  int hoursWorked;
  int regularHours = 40;
  int total;
  int overpay;
  double SSTax = 0.06;
  double FITax = 0.014;
  double SITax = 0.05;
  int MInsurance = 10;
  int net;

  //take user input for hours worked for the week
  cout << "How many hours did you work this week?...";
  cin >> hoursWorked;

  //overpay represents hours over than regular hours
  overpay = hoursWorked - 40;
  if (overpay < 0)
  {
    overpay = 0;
  }

  //calculate the total pay before deductions
  hoursWorked = hoursWorked - overpay;
  total = (hoursWorked * 16) + (overpay * 16 * 1.5);

  //deductions
  SSTax = total * SSTax;
  FITax = total * FITax;
  SITax = total * SITax;
  net = total - SSTax - FITax - SITax - MInsurance;

  //breakdown of weekly pay
  cout << "Gross Pay............." << total << endl;
  cout << "Social Security Tax..." << SSTax << endl;
  cout << "Federal Income Tax...." << FITax << endl;
  cout << "State Income Tax......" << SITax << endl;
  cout << "Medical Insurance....." << MInsurance << endl;
  cout << "Net Pay..............." << net << endl;
}
