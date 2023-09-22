#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    
    int grade;
    cout << "Enter numeric grade (0-100)" << endl;
    cin >> grade;
switch (grade/10) 
  {
  case 10:
  case 9:
    cout << " You made a A in the class and earned 4 grade points." << endl;
    break;
  case 8:
    cout << " You made a B in the class and earned 3 grade points." << endl;
    break;
  case 7:
    cout << " You made a C in the class and earned 2 grade points." << endl;
    break;
  case 6:
    cout << " You made a D in the class and earned 1 grade points." << endl;
    break;
  case 5:
    cout << " You made a F in the class and earned 0 grade points." << endl;
    break;
  default:
    cout << " Sorry you failed do better next time." << endl;  
  }
  system("PAUSE");	
  return 0;
}
