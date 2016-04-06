/*
Projekt klasy wielomianow stopnia czwartego
Numer projektu: 1808
Autor: Ewelina Mularczyk
Prowadzacy: dr inz Piotr Witonski
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool czy_int(string liczba)
{
     int dl=liczba.size();
     int czy=1;
     
     if(dl==1&&(liczba.at(0)<48||liczba.at(0)>57)) czy=0;
     else
     {
         if(liczba.at(0)!='-'&&!(liczba.at(0)>=48&&liczba.at(0)<=57)) czy=0;
     }
     
     for(int i=1; i<dl; i++)
     {
             if(!(liczba.at(i)>=48&&liczba.at(i)<=57))
             {
                    czy=0;
                    break;
             }
     }
     return czy;
}

int rzut(string s)
{
    int n;
    
    stringstream pom;
    pom<<s;
    pom>>n;
    
    return n;
    
}
