#include <iostream>
#include <stdlib.h>

using namespace std;

void add(int [], int);

int main(int argc, char *argv[])
{
    int scores [6];
    int size = 6;
    
    
    for (int i = 0; i < 6; i++)
    {
        cout << "Please enter test score number " << i << ": ";
        cin >> scores[i];
    }
    
    add(scores, 6);
    
    for (int i = 0; i < 6; i++)
    {
        cout << "The new score for test " << i << " is " << scores[i] << ". \n";
    }
    
    system("PAUSE");
    return 0;
    
}

void add(int array[], int size)
{
    for (int i = 0; i < size; i++)
        array[i] = array[i] + 10;
}
