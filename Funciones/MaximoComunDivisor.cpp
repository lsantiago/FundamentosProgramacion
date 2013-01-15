//Como la programaci�n es parte de las matem�ticas, aqu� comparto la codificaci�n en C++ para obtener el mcd  empleando la forma larga descrita por Julio.

#include <iostream>

using namespace std;

int mayor(int nro1, int nro2)
{
    if(nro1>nro2)
       return nro1;
    else
       return nro2;
}

int mcd(int nro1, int nro2)
{
    int nroMayor = mayor(nro1,nro2);
    int maxcomun=1;

    //Proceso para obtener el m�ximo comun divisor
    for(int i=1;i<=nroMayor;i++)
    {
       //Obtiene los divisores comunes entre nro1 y nro2
       if(nro1%i==0 && nro2%i==0)
       {
           //Captura el m�ximo divisor
           if(i>maxcomun)
              maxcomun = i;
       }
    }

    return maxcomun;
}

int main()
{
    int nro1=18, nro2=24;

    cout << "mcd("<<nro1<<","<<nro2<<")= " << mcd(nro1,nro2);

    return 0;
}
