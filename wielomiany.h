/*
Projekt klasy wielomianow stopnia czwartego
Numer projektu: 1808
Autor: Ewelina Mularczyk
Prowadzacy: dr inz Piotr Witonski
*/

#ifndef wielomiany_h
#define wielomiany_h

#include <iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
class wielomian
{

public:
//konstruktory:
wielomian();
wielomian(int a, int b, int c, int d, int e);
~wielomian();

//przeciazenia operatorow:
wielomian operator+ (const wielomian &a);
wielomian operator+= (const wielomian &a);
wielomian operator- (const wielomian &a);
wielomian operator-= (const wielomian &a);
wielomian operator* (const wielomian &a);
wielomian operator*= (const wielomian &a);
bool operator== (const wielomian &a);
bool operator!= (const wielomian &a);
friend ostream & operator<<(ostream &wyjscie ,const wielomian &a);

   int w0, w1, w2, w3, w4;
};

#endif
