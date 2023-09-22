#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{   
    int shot;
    int stop;
    int _gunchoice = 0;
    cout << "Select the gun you would like to fire." << endl;
    cout << "Enter Number for desired gun!" << endl;
    cout << "1 = P90, 2 = Ak-47, 3 = Desert Eagle, 4 = Keltec KSG:\n";
    cin >> _gunchoice;
    if(_gunchoice <=4)
    {
    cout << "Great Choice\n";
    }
    switch(_gunchoice)
    {
    case 1:   
        cout << "Press Enter to fire or hold enter for fully automatic" << endl;
            {
              cout << "Bullets =  ";
            }
            for(int val=50; val >=0; val--)
                {   
                  cout << val << "  " << "Bang!\n";
                  system("PAUSE"); // allows enter to be pressed.
                }
                cout << "EMPTY!!!";
                cin >> stop;     // stops from shooting.
                break;
                
                case 2:
                cout << "Press Enter to fire or hold enter for fully automatic" << endl;
                {
                cout << "Bullets =  ";
                }
            for(int val=30; val >=0; val--)
                {   
                  cout << val << "  " << "Bang!!\n";
                  system("PAUSE");
                }
                cout << "EMPTY!!!";
                cin >> stop;
                break;
                
                case 3:
                cout << "Press Enter to fire " << endl;
                {
                 cout << "Bullets =  ";
                }
            for(int val=8; val >=0; val--)
                {   
                  cout << val << "  " << "BANG!\n";
                  system("PAUSE");
                }
                cout << "EMPTY!!!";
                cin >> stop;
                break;
                
                case 4:
                cout << "Press Enter to fire " << endl;
                {
                cout << "Bullets =  ";
                }
            for(int val=15; val >=0; val--)
                {   
                  cout << val << "  " << "BANG BOOOOOOM!\n";
                  system("PAUSE");
                }
                cout << "EMPTY!!!";
                cin >> stop;
                break;
                default:
                cout << "Please select a number \n";
                system("pause");
    }
}

