// Name: Jordan Munoz
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main()
{
  //tax should be 7.75% of the meal cost, tip should be 20% of the meal cost.
  double tax = .0775;
  double tip = .20;
  double meal_charge, meal_tax, meal_tip, meal_total;

  std::cout << "Welcome to the Restaurant Bill Calculator!\n";

  //prompt the user to enter the total meal charge.
  std::cout << "What was the total meal charge? ";
  std::cin  >> meal_charge;

  //then calculate the tax and tip, as well as the total bill after tax and tip
  meal_tax   = meal_charge * tax;
  meal_tip   = meal_charge * tip;
  meal_total = meal_charge + meal_tax + meal_tip;

  //then display the tax amount, tip amount, and total bill.
  std::cout << "Tax:\t\t$" << meal_tax << '\n';
  std::cout << "Tip:\t\t$" << meal_tip << '\n';
  std::cout << "Total Bill:\t$" << meal_total << '\n';
  return 0;
}
