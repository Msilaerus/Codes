#include <iostream>
#include <stdlib.h>

using namespace std;

void vowel(char x)
{   
    cout << "True = Vowel " << endl << "False = Not a Vowel " << endl<< "Check if letter is a Vowel: " << endl << endl;
    cin >> x;
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' 
     || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') 
        
        cout << "True" << endl;
    else
        cout << "False" << endl;
        
}
        

int main()
{

    vowel('a');
    // Test
    vowel('a');
    vowel('a');
    vowel('a');
    vowel('a');
    system("PAUSE");
    return 0;
}
