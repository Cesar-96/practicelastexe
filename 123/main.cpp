#include <iostream>

using namespace std;

int main()
{
    long long i;
    long long NUMERO = 600851475143;
    int num;

    for( i = 2; i < NUMERO; i++)
    {
       if(NUMERO % i == 0)
       {
           NUMERO /= i;
           cout<<NUMERO<<endl;
           i = 2;
        }
    }

    cout<<"El maximo factor primo de 600851475143 es \n"<< NUMERO <<endl;

    return 0;
}

