#include "Palabra.h"
Palabra::Palabra(string s){
    cadena= s;
}
string Palabra::getPalabra()
{
    return this->cadena;
}
void Palabra::setPalabra(string p)
{
    this->cadena=p;
}
list<Subsecuencia> Palabra::getSubsecuencias(int k){    
    list<Subsecuencia> auxList = list<Subsecuencia>();
    for (int pos=0; pos<=cadena.length()-k; pos++){ //itera n-k veces        
        auxList.push_back(Subsecuencia(cadena.substr(pos,k)));//la clase string permite sacar el substring de tamanio k.
    }
    return auxList;
}

Palabra::~Palabra()
{

}

