#include <iostream>
#include <string.h>
#include <conio.h>
#include <string>


using namespace std;



int main()
{
    //size
    std::string str ("Test string");
    std::cout << "The size of str is " << str.size() << " bytes.\n";


    //strlen
    char str2[] = "Luis";
    int tamano;

    tamano = strlen(str2);

    cout<<"El numero de elementos de la cadena es: "<<tamano<<endl;


    //substr
    string s1("whatever happens happens");
    cout << s1.substr(9,7) <<endl;

    //swap
    string one("apples");
    string two("beans");

    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl;

    //find

    string s2("Hola (ho,la22)");

    cout << s2.find("l") << endl;
    cout << s2.rfind("l") << endl;

    //compare

    string pass ("lunes");
    string val;

    cout << "introduce la contraseña:" << endl;
    cin>>val;

    if (pass.compare(val) == 0)
    {
        cout << "la contraseña es correcta" << endl;
    }
    else {
        cout << "La contraseña no es correcta" << endl;
    }



    getch();
    return 0;
}
