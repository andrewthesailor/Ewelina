/*
Projekt klasy wielomianow stopnia czwartego
Numer projektu: 1808
Autor: Ewelina Mularczyk
Prowadzacy: dr inz Piotr Witonski
*/

#include "wielomiany.h"
using namespace std;     
wielomian:: wielomian()
{
   std::cout<<"Uruchomienie konstruktora"<<std::endl;
}

wielomian:: wielomian(int a, int b, int c, int d, int e)
{
  this->w4=a;
  this->w3=b;
  this->w2=c;
  this->w1=d;
  this->w0=e;
  
  std::cout<<"Uruchomienie konstruktora"<<std::endl;
}
//dekonstruktor:

wielomian:: ~wielomian()
{
   std::cout<<"Uruchomienie dekonstruktora"<<std::endl;
}


//przeciazenia operatorow:

wielomian wielomian:: operator+ (const wielomian &a)
{
    wielomian c= wielomian(0,0,0,0,0);
    wielomian* cc = &c;
    c.w0=this->w0+a.w0;
    c.w1=this->w1+a.w1;
    c.w2=this->w2+a.w2;
    c.w3=this->w3+a.w3;
    c.w4=this->w4+a.w4;
    
    return *cc;
}

wielomian wielomian:: operator+= (const wielomian &a)
{
    wielomian c= wielomian(0,0,0,0,0);
    wielomian* cc = &c;
    c.w0=this->w0+a.w0;
    c.w1=this->w1+a.w1;
    c.w2=this->w2+a.w2;
    c.w3=this->w3+a.w3;
    c.w4=this->w4+a.w4;
    
    return *cc;
}

wielomian wielomian:: operator- (const wielomian &a)
{
    wielomian c= wielomian(0,0,0,0,0);
    wielomian* cc = &c;
    c.w0=this->w0-a.w0;
    c.w1=this->w1-a.w1;
    c.w2=this->w2-a.w2;
    c.w3=this->w3-a.w3;
    c.w4=this->w4-a.w4;
    
    return *cc;
}

wielomian wielomian:: operator-= (const wielomian &a)
{
    wielomian c= wielomian(0,0,0,0,0);
    wielomian* cc = &c;
    c.w0=this->w0-a.w0;
    c.w1=this->w1-a.w1;
    c.w2=this->w2-a.w2;
    c.w3=this->w3-a.w3;
    c.w4=this->w4-a.w4;
    
    return *cc;
}

wielomian wielomian:: operator* (const wielomian &a)
{
    wielomian c= wielomian(0,0,0,0,0);
    wielomian* cc = &c;
    c.w0=this->w0*a.w0;
    c.w1=this->w1*a.w0+w0*a.w1;
    c.w2=this->w2*a.w0+w1*a.w1+w0*a.w2;
    c.w3=this->w3*a.w0+w2*a.w0+w1*a.w2+w0*a.w1;
    c.w4=this->w4*a.w0+w3*a.w1+w2*a.w2+w1*a.w3+w0*a.w4;
    
    return *cc;
}

wielomian wielomian:: operator*= (const wielomian &a)
{
    wielomian c= wielomian(0,0,0,0,0);
    wielomian* cc = &c;
    c.w0=this->w0*a.w0;
    c.w1=this->w1*a.w0+w0*a.w1;
    c.w2=this->w2*a.w0+w1*a.w1+w0*a.w2;
    c.w3=this->w3*a.w0+w2*a.w0+w1*a.w2+w0*a.w1;
    c.w4=this->w4*a.w0+w3*a.w1+w2*a.w2+w1*a.w3+w0*a.w4;
    
    return *cc;
}

bool wielomian:: operator== (const wielomian &a)
{
    return (w0==a.w0&&w1==a.w1&&w2==a.w2&&w3==a.w3&&w4==a.w4);
}

bool wielomian:: operator!= (const wielomian &a)
{
    return (w0!=a.w0||w1!=a.w1||w2!=a.w2||w3!=a.w3||w4!=a.w4);
}


ostream & operator<<(ostream &wyjscie,const wielomian &a)
{
     wyjscie<<a.w4<<"*x^4";
     if(a.w3>=0) wyjscie<<"+";
     wyjscie<<a.w3<<"*x^3";
     if(a.w2>=0) wyjscie<<"+";
     wyjscie<<a.w2<<"*x^2";
     if(a.w1>=0) wyjscie<<"+";
     wyjscie<<a.w1<<"*x";
     if(a.w0>=0) wyjscie<<"+";
     wyjscie<<a.w0;
	return wyjscie;
}  
;

