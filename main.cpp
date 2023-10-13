#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <math.h>
//#include <stdlib.h>  //funcion atoi() y atof()
//#include <cstdlib>   para separar numeros de texto

using namespace std;

int main()
{

    string cad;
    //string cad ("integral(x,12,1,2)");  // (x,y,t,z)
    cout << "Introduce tu integral: " << "\n" <<endl;
    cin>>cad;

    ///////////////////////////////////////////////////////// codigo que ayuda a obtener (x,y,t,z)

    int pos1 = cad.find("(");
    int pos2 = cad.rfind(")");

    cout << "\n" << "La longitud de la cadena es: " << cad.length() << "\n" << endl;
    //cout << pos1 << endl;
    //cout << pos2 << "\n"<< endl;

    ///////////////////////////////////////////////////////// codigo que da -cad- por partes

    string cad2 = cad.substr(pos1+1,((pos2-2)-pos1+1));             //x,yum,t,z
    string cad3 = cad2.substr(cad2.find(",")+1,cad2.length());      //yum,t,z
    string cad4 = cad3.substr(cad3.find(",")+1,cad3.length());      //t,z
    string cad5 = cad4.substr(cad4.find(",")+1,cad4.length());      //z

    cout << cad2 << endl;
    cout << cad3 << endl;
    cout << cad4 << endl;
    cout << cad5 << endl;

    ///////////////////////////////////////////////////////// espacio de 1 renglon(es)

    cout<<"\n"<<endl;

    ///////////////////////////////////////////////////////// codigo que da x,y,t,z

    string arg1 = cad2.substr(0,cad2.find(","));

    string arg2 = cad3.substr(0,cad3.find(","));

    string arg3 = cad4.substr(0,cad4.find(","));

    string arg4 = cad5.substr(0,cad5.length());

    cout << "Funcion:\t\t"<< arg1 << endl;
    cout << "Limite inferior:\t"<< arg2 << endl;
    cout << "Limite superior:\t"<< arg3 << endl;
    cout << "Delta de x:\t\t"<< arg4 << endl;

    ///////////////////////////////////////////////////////// de string a float de los argumentos y,t,z

    float numeroArg2 = stof(arg2);
    float numeroArg3 = stof(arg3);
    float numeroArg4 = stof(arg4);

    /////////////////////////////////////////////////////////

    cout << "\n" << "Veces a ejecutar la suma del resultado de la funcion:\t" << (numeroArg3-numeroArg2)/numeroArg4 << " veces" << endl;

    //integral(x,0,50,0.1)


    //////////////////////////////// funcion prueba

    // arg1 es una cadena tipo string
    // hay que analizar la cadena

    /*Funciones a ocupar

    sen(seno)

    ////////////////// funcion para seno





    //////////////////////////////// switch de prueba

    /*switch (arg1) {
        case
    }*/

    getch();
    return 0;
}
