//UComo la programación es parte de las matemáticas, aquí comparto la codificación en C++ para obtener el mcd  empleando la forma larga descrita por Julio.  

#include <iostream>

using namespace std;

int mayor(int a, int b)
{
    if(a>b)
       return a;
    else
       return b;
}

int mcd(int a, int b)
{
    int nroMayor = mayor(a,b);
    int maxcomun=1;

    //Proceso para obtener el máximo comun divisor
    for(int i=1;i<=nroMayor;i++)
    {
       //Obtiene los divisores comunes entre a y b
       if(a%i==0 && b%i==0)
       {
           //Captura el máximo divisor
           if(i>maxcomun)
              maxcomun = i;
       }
    }

    return maxcomun;

}

int main()
{
    int nro1=7, nro2=2;

    cout << "mcd("<<nro1<<","<<nro2<<")= " << mcd(nro1,nro2);

    return 0;
}