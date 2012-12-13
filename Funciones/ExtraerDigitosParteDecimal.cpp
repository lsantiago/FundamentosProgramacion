#include <iostream>

using namespace std;

int main()
{
    float nro = 123.4567;
    int parte_entera = (int)nro;
    float parte_decimal = nro - parte_entera;

    cout << fmod(nro,1);

     return 0;
}
