#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])

    
{
  int quaters;
  int dimes;
  int nickels;
  int pennies;
  int change;
  
  cout << "Enter an amount in cents  " << endl;
  cin >> change;
  
  quaters = change / 25; 
  change = change % 25;
  
  dimes = change / 10;
  change = change % 10;
  
  nickels = change / 5;
  change = change % 5;  
  
  pennies = change / 1;
  change = change % 1;
  
  
  
  cout << "Change for quaters is " <<  quaters << endl;
  
  cout << "Change for dimes is " << dimes << endl;
  
  if (nickels > 1)
  {
    cout << "Change for nickels is " << nickels << endl;
  }
  else 
  {
    cout << "Change for nickel is " << nickels <<  endl; 
  } 
  
  cout << "Change for pennies is " << pennies << endl;
   
   
  system("PAUSE");	
  return 0;
}
