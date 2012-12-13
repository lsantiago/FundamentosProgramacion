#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

//Prototipos
void simular(int [], int);
void lanzar(int &);
void presentarResultados();


//Variable global
int combinaciones[36];
const int nroLanzamientos = 36000;
int nroVeces7=0;

using namespace std;

int main()
{
    //Semilla de n�meros aleatorios
    srand(time(NULL));



	int lanzamientos[nroLanzamientos];

	//Simulacro de lanzamiento de dados
	simular(lanzamientos,nroLanzamientos);
    presentarResultados();

    system("pause");

	return 0;
}

void presentarResultados()
{
    cout <<"\tL A Z A M I E N T O  D E  2  D A D O S\n";
        cout<<"\n ------   ------   ------   ------   ------   ------ \n";
        cout<<"|      | |*     | |*     | |*   * | | *    | |      |\n";
        cout<<"|  *   | |  *   | |      | |*   * | |      | |  *   |\n";
        cout<<"|      | |    * | |    * | |*   * | |    * | |      |\n";
        cout<<" ------   ------   ------   ------   ------   ------ \n\n";
    cout << "\n\t1\t2\t3\t4\t5\t6\n";
    cout << "\n====================================================\n";
    int contFilas=1;
    cout << contFilas<<" |\t";
    for(int i=0;i<36;i++)
    {
        cout <<combinaciones[i]<<"\t";
        if((i+1)%6==0 && i!=35)
        {
            cout << endl;
            contFilas++;
            cout <<contFilas<<" |\t";
        }
    }

    cout<<"\n\n\t\tNro. de Lanzamientos: "<<nroLanzamientos;
    cout<<"\n\t\t1/6 de "<<nroLanzamientos<<": "<< nroLanzamientos/6;
    cout<<"\n\t\tPorcentaje de veces que se obtuvo 7: "<<nroVeces7*100/nroLanzamientos<<"%"<<endl;
}

void lanzar(int &dado)
{
    dado = 1 + rand()%(6);
}

void actCombinacionesObten(int sumadados, int dado1, int dado2)
{
    int pos = (((dado1-1) * 6)+dado2 )-1;
    combinaciones[pos]++;
}

void simular(int lanz[],int nroLanz)
{
    int dado1, dado2;


    for (int i=0;i<36 ;i++ )
    {
    	combinaciones[i]=0;
    }

    for(int i=0;i<nroLanz;i++)
    {
        lanzar(dado1);
        lanzar(dado2);
        if(dado1+dado2 == 7)
        {

            nroVeces7++;
        }
        //cout << dado1<<"+"<<dado2<<"="<<dado1+dado2<<endl;
        lanz[i]=dado1+dado2;
        actCombinacionesObten(lanz[i],dado1,dado2);
    }

}




