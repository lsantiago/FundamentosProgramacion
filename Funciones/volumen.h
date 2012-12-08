#include<cmath>
float  volumenEsfera(int r);
float  volumenCilindro(int r, int h);
float  volumenEsfera(int r)
{
   float resultado1;
   resultado1=((4*M_PI*pow(r,3))/3);
   return resultado1;
}
float  volumenCilindro(int r, int h)
{
   float resultado2;
   resultado2=(M_PI*pow(r,2)*h);
   return resultado2;
}
