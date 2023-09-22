#include <iostream>
#include <stdlib.h>

using namespace std;


  float Average (float num1, float num2, float num3, float num4)
{

    return (num1 + num2 + num3 + num4) / 4;

}
int main()
{   
    float Number1;
    float Number2;
    float Number3;
    float Number4;

    cout << "Calculation average for, four test scores" << endl; 
    cout << "Enter four test scores for the average ";
    
    cin >> Number1;
    cin >> Number2;
    cin >> Number3;
    cin >> Number4;
    
    
    cout<< "The average of the four test scores are " << Average(Number1 , Number2, Number3, Number4) << endl;

  system("PAUSE");	
  return 0;
}
