#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string  filen;
  char ch;
  
  cout << "Enter the name of the file to encrypt: ";
  cin  >> filen;

  fstream infile(filen.c_str());
  if (!infile)
    {
      cout << "Error opening file" << filen << "\".\n";
      return 0;
    }
  fstream outfile(filen.c_str());
  
  while (!infile.fail())
    {
      infile.get(ch);
      ch +=1;
      outfile << ch;
    }
  infile.close();
  outfile.close();
  return 0;
}
