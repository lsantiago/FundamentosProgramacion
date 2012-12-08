#include <iostream>
#include <cstdlib> //system("cls")
#include "areas.h"
#include "matematicas.h"

using namespace std;

//Prototipos
void presentarMenu();

void ingresoDatos(int &val1, int &val2);

int main()
{
    //Definición de variables.
    char continuar;
    int nro1, nro2;
    float base, altura;

    int op;

    do
    {
       presentarMenu();

       cin >> op;




       switch(op)
       {
           case 1:
                  ingresoDatos(nro1, nro2);
                  cout << "\n\tSumatoria = " << sumar(nro1,nro2);
                  break;
           case 2:
                  ingresoDatos(nro1, nro2);
                  cout << "\n\tDiferencia = " << restar(nro1,nro2);
                  break;
           case 3:
                  ingresoDatos(nro1, nro2);
                  cout << "\n\tProducto = "  << multiplicar(nro1,nro2);
                  break;
           case 4:
                  ingresoDatos(nro1, nro2);
                  cout << "\n\tDivisión = " << dividir(nro1,nro2);
                  break;
           case 5:
                  cout << "Ingrese un angulo en grados: ";
                  cin >> nro1;
                  cout << "\n\tSeno de " << nro1 << " es = " << senoConSerie(nro1);
                  break;
           case 6:
                  cout << "Ingrese la base (cm): ";
                  cin >> base;
                  cout << "Ingrese la altura (cm): ";
                  cin >> altura;
                  cout << "\n\tArea = " << areaRectangulo(base, altura) << "cm^2";
           default:
                  cout << "\n\t\aOpción incorrecta.";
                  break;
       }

       cout << "\n\nDesea repetir Si(s)/No(n): ";
       cin >> continuar;
    }while(continuar=='s' || continuar =='S');


    return 0;
}


void ingresoDatos(int &val1, int &val2)
{
    cout << "Ingrese el primer valor: ";
    cin >> val1;
    cout << "Ingrese el segundo valor: ";
    cin >> val2;
}

void presentarMenu()
{
    system("cls");
    cout << "--------------- MINI CALCULADORA -----------\n";
    cout << "Opciones: \n";
    cout << "(1) Suma\n";
    cout << "(2) Resta\n";
    cout << "(3) Producto\n";
    cout << "(4) División \n";
    cout << "(5) Seno\n";
    cout << "(6) Área de rectangulo";
    cout << "\n\nIngrese opción: ";
}





