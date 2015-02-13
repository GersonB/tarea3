#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
(*mi_mapa) [llave]= valor;//se agrega el valor dentro del apuntador *mi_mapa
}

//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{

      return (mi_mapa) [llave];//devuelve el valor de mi_mapa asociado en la llave


}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"

map<string,int> obtenerSemana()
{
    map<string,int> semana;//se crea un mapa de tipo string, int llamado semana
    semana["lunes"]=1;// se insertan los valores "lunes" y 1 dentro del mapa
    semana["martes"]=2; // // se insertan los valores "martes" y 2 dentro del mapa
    semana["miercoles"]=3;// se insertan los valores "miercoles" y 3 dentro del mapa
    semana["jueves"]=4;// se insertan los valores "jueves" y 4 dentro del mapa
    semana["viernes"]=5;// se insertan los valores "viernes" y 5 dentro del mapa
    semana["sabado"]=6;// se insertan los valores "sabado" y 6 dentro del mapa
    semana["domingo"]=7;// se insertan los valores "domingo" y 7 dentro del mapa
    return semana;//devuelve el mapa semana

}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;//se declara la variable donde se guardaran los valores
    for(set<int>:: iterator interador= mi_set1.begin();
interador!= mi_set1.end(); interador++) // se recorre con un iterator el primer set
{
for(set<int>:: iterator interador2= mi_set2.begin();
interador2 != mi_set2.end(); interador2++) // se recorre con un iterator el segundo set
{
if(*interador == *interador2) //se comparan los valores de ambos set
{
mi_set3.insert(*interador); //si los valores son iguales se insertan en mi_set3
}
}
}
    return mi_set3;//devuelve mi_set3
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    for(set<int>:: iterator interador= mi_set1.begin();
interador!= mi_set1.end(); interador++) //se recorre con un iterator el primer set
{
for(set<int>:: iterator interador2 = mi_set2.begin();
interador2!= mi_set2.end(); interador2++) //se recorre con un iterator el segundo set
{
mi_set3.insert(*interador); //se insertan los valores de mi_set1 en mi set_3
mi_set3.insert(*interador2); //se insertan los valores de mi_set2 en mi_set3
}
}
    return mi_set3;//devuelve mi_set3
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{

set<int> set3;
for(set<int>::iterator interador = mi_set.begin();
interador!= mi_set.end(); interador++) //se recorre mi_set con iterator
{
for(set<int>::iterator interador2 = mi_sub_set.begin();
interador2!= mi_sub_set.end(); interador2++) //se recorre mi_sub_set con iterator
{
if(*interador==*interador2) //se comparan los valores de mi_set y mi_sub_set
{
set3.insert(*interador); //si los valores son iguales se insertan en set3
}
}
}
while(set3==mi_sub_set) //se hace una condicion comparando los valores de set_3 y mi_sub_set
{
return true; //si los valores son iguales devuelve true
}
    return false;//si los valores son diferentes devuelve false
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
