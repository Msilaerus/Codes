#include <iostream>
#include <stdlib.h>

using namespace std;

class Guns
{
    public:
        string name;
        int bullets;
        double choice;
        
        
        void setchoice(double pick)                                   //CLASS GUNS
        {
         choice = pick;
        }
        
        double getchoice()
        
        {
         return choice;
        }
        

};      
int main()
{   
       double choice;
       int shot;
       //Gun one being the P90.
       Guns gun1;
       gun1.name = " P90 \n";
       gun1.bullets = 50;
       //Gun two being the AK-47.
       Guns gun2;
       gun2.name = " Ak-47 \n";
       gun2.bullets = 30;
       //Gun three being the Desert Eagle.
       Guns gun3;
       gun3.name = " Desert Eagle \n";
       gun3.bullets = 8;
       //Gun four being the KSG.
       Guns gun4;
       gun4.name = " KelTec KSG \n";
       gun4.bullets = 15;
       
       //Input/Output for the user.
       cout << "Select the gun you would like to fire." << endl;
       cout << "Enter a Number for your desired gun!" << endl;
       cout << "1 = P90, 2 = Ak-47, 3 = Desert Eagle, 4 = Keltec KSG:\n";
       
       
       
       //Code for User choosing the gun they would like.
       cin >> choice;
       if(choice == 1) 
       {
           cout << gun1.name << endl;
       
       for(gun1.bullets; gun1.bullets >=0; gun1.bullets--) //code for shooting.
       
       cout << "Bullets " << gun1.bullets << "  " << "Bang!\n";
       cout << "EMPTY\n"; 
       }
              else if(choice == 2)
                     {
                     cout << gun2.name << endl; //repeated code for shooting and choosing.
                     
                     for(gun2.bullets; gun2.bullets >=0; gun2.bullets--)
                     
                     cout << "Bullets " << gun2.bullets << "  " << "Bang!\n";
                     cout << "EMPTY\n"; 
                     }
                         else if(choice == 3)
                          {
                          cout << gun3.name << endl;
                          
                          for(gun3.bullets; gun3.bullets >=0; gun3.bullets--)
                          
                          cout << "Bullets " << gun3.bullets << "  " << "BAAAAAANG!!\n";
                          cout << "EMPTY\n"; 
                          }
                              else if(choice == 4)
                              {
                              cout << gun4.name << endl;
                              
                              for(gun4.bullets; gun4.bullets >=0; gun4.bullets--)
                              
                              cout << "Bullets " << gun4.bullets << "  " << "BOOOOOOOOOOOOOOOOOOOOM!!!\n";
                              cout << "EMPTY\n"; 
                              }
                              else
                              {
                               cout << "Error\n";
                              }
                              system("pause");
       

}       
