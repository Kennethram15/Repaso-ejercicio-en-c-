#include <iostream>
#include <string>

using namespace std;

int main()
{
    float area=0;
    int gen=0;
    int i=0;
    int herederos[50];
    float op=0;
    cout<<"Ingrese el area inicial del terreno: "<<endl;
    cin>>area;
    cout<<"Ingrese la cantidad de generaciones: "<<endl;
    cin>>gen;
    if(gen>50)
    {
        cout<<"Error, no puede ingresar mas de 50 generaciones"<<endl;
    }
    else
    {
    for( i=0;i<gen;i++)
    {
        cout<<"Ingrese el numero de herederos de la generacion: "<<i+1<<endl;
        cin>>herederos[i];
        area=area/herederos[i];
    }
    cout<<"El area del terreno para la generacion "<<gen<<" es: "<<area<<endl;
    }

    return 0;
}
