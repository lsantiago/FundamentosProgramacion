#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

//Prototipos
int NumeroAleatorio(int, int);
void LlenarArreglo(int A[], int);
void PresentarArreglo(int A[], int);


int main()
{
	
    int tamA=5;
	int A[tamA];

    //Semilla para números aleatorios
    srand(time(NULL));

    LlenarArreglo(A, tamA); 
	PresentarArreglo(A, tamA);


	system("pause");
    return 0;
}


int NumeroAleatorio(int li, int ls)
{
	
	return li + rand()%(ls+1-li);
}

void LlenarArreglo(int A[], int tamA)
{
  for(int i=0;i<tamA;i++)
  {
  	A[i] = NumeroAleatorio(0, 10);
  }
}

void PresentarArreglo(int A[], int tamA)
{
  for(int i=0;i<tamA;i++)
  {
  	cout << "A["<<i<<"]: "<< A[i]<<endl;
  }
}

