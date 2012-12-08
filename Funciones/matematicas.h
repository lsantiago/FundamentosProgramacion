#include <cmath>


using namespace std;

int sumar(int, int);
int restar(int, int);
float multiplicar(int, int);
float dividir(int, int);
float seno(int);


float potencia (float b, int exp);
float factorial (int);
float senoConSerie(int);

int sumar(int nro1, int nro2)
{
    return nro1 + nro2;
}

int restar(int nro1, int nro2)
{
    return nro1 - nro2;
}

float multiplicar(int nro1, int nro2)
{

    return nro1 * nro2;
}

float dividir (int nro1, int nro2)
{
    return nro1/nro2;
}

float seno(int angGrados)
{
    float angRadianes;
    angRadianes = (3.1416*angGrados)/180;

    return sin(angRadianes);
}

float senoConSerie(int angGrados)
{
   float angRadianes;
   long double resultado = 0;
   angRadianes = (3.1416*angGrados)/180;

   for(int n=0;n<=17;n++)
   {
       resultado = resultado + (potencia(-1,n)*potencia(angRadianes,2*n+1))/factorial(2*n+1);
   }

   return resultado; //INSTRUCCI�N FALTANTE

}

float potencia (float b, int exp)
{
    float resultado=1;

    for(int i=1;i<=exp;i++)
        resultado = resultado * b;

    //Exponentes negativos
    if (exp<0)
        resultado = 1 / resultado;

    return resultado;
}

float factorial (int nro)
{
   float resultado;

   if(nro==0)
      resultado  = 1;
   else
   {
       resultado = 1;
       for(int i=1;i<=nro;i++)
       {
           resultado = resultado * i;
       }
   }

   return resultado;
}



