using namespace std;

int main()
{
  int nro = 34567;
  int nroInv=0;


  while (nro > 0)
  {
      nroInv = nroInv * 10 + (nro%10);
      nro = nro/10;
  }

  cout << nroInv;

  return 0;
}
