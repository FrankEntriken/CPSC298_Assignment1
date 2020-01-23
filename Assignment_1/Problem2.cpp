#include <iostream>
#include <string>
using namespace std;

int main()
{
  int roomCapacity;
  int numberPeople;
  int difference;

  cout << "Enter the maximum capacity of the room: ";
  cin >> roomCapacity;

  cout << "Enter how many people are currently in the room: ";
  cin >> numberPeople;

  // if number of people do not exceed capacity it is legal
  if(roomCapacity >= numberPeople)
  {
    difference = roomCapacity - numberPeople;
    cout << "It is currently legal to hold the meeting. " << difference << " additional people may fit in the room." << endl;
  }

  // if number of people do not exceed capacity it is illegal
  if(roomCapacity < numberPeople)
  {
    difference = numberPeople - roomCapacity;
    cout << "It is currently illegal to hold the meeting. " << difference << " individuals must leave the room." << endl;
  }
}
