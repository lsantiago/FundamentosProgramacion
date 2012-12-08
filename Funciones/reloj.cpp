#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void temporizador(int s)
{
   for(int i=s+time(NULL);time(NULL)!=i;time(NULL));
}

int main()
{
    int s=0, m=0, h=0;
     
    system("color 2"); 
    for(;;)
    {
      s++;
      if(s==60)
      {
      	m++;
      	s=0;
      }
      if(m==60)
      {
      	h++;
      	m=0;
      }
      if(h==24)
      	h=0;
      
      system("cls");
      

      cout <<"\n\n\t"<<h<<":"<<m<<":"<<s;
      temporizador(1);
    }


	return 0;
}