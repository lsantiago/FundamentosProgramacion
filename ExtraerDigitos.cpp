#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int nro;
  int nroCifras=0;
  int temp;

  cout << "Insert number: ";
  cin >> nro;

  temp = nro;

  if(nro>0)
  {
      while(temp>0)
      {
          temp = temp/10;
          nroCifras++;
      }

      //Display 1 2 3 4 5
      for(int i=nroCifras-1;i>=0;i--)
      {
          cout << nro/int(pow(10,i)) << " ";
          nro = nro%int(pow(10,i));

      }





  return 0;
}
