#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool IsX (string i) { return (i=="x"); }

int main()
{
    string s = "3+6x/3-sin(x)/4x";
    string limP;
    //std::replace( s.begin(), s.end(), "x", limP);
    cout <<"Cadena dada: "<<s<< endl;
    cout<<"Limite inferior: ";cin>>limP;

    int elementos = s.length();
    cout<<"\n"<<endl;

    vector<string> v (elementos);

    for (int i = 0; i < elementos;i++) {
        v[i] = s.substr(i,1);
    }

    replace_if(v.begin(), v.end(), IsX, "("+limP+")");

    cout<<"Sustituci\xA2n de la x: "<<endl;

    for (int j = 0; j < v.size();j++) {
        cout<<v[j];
    }

    cout<<"\n";


    return 0;
}
