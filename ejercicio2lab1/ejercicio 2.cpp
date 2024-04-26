#include <iostream>

using namespace std;

int main()
{

    int numeros[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int largodelarray= sizeof (numeros)/sizeof(numeros[0]);
    for( int i=0; i<largodelarray; i++)
    {
       cout<<numeros[i]<< endl;
    }


/*int largodelarray= sizeof (numeros)/sizeof(numeros[0]);

cout<<"El largo del array es de: "<<largodelarray<<endl;*/

    return 0;
}
