/*
Projekt klasy wielomianow stopnia czwartego
Numer projektu: 1808
Autor: Ewelina Mularczyk
Prowadzacy: dr inz Piotr Witonski
*/

#include <iostream>
#include <string>
#include "wielomiany.h"
#include "blad.h"

using namespace std;

int main()
{
    string a1,b1,c1,d1,e1;
    int a2,b2,c2,d2,e2;
    int opcja;
    //int blad=0;
    
    wielomian a,b;
    
cout<<"PROGRAM TESTUJACY KLASE WIELOMIANOW"<<endl<<endl;
cout<<"oznaczenie wielomianu: a*x^4+b*x^3+c*x^2+d*x+e"<<endl<<endl;

cout<<"podej wspolczynniki pierwszego wielomianu: "<<endl;
cout<<"a=";
cin>>a1;
while(!czy_int(a1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>a1;
}
a2=rzut(a1);

cout<<"b=";
cin>>b1;
while(!czy_int(b1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>b1;
}
b2=rzut(b1);

cout<<"c=";
cin>>c1;
while(!czy_int(c1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>c1;
}
c2=rzut(c1);

cout<<"d=";
cin>>d1;
while(!czy_int(d1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>d1;
}
d2=rzut(d1);

cout<<"e=";
cin>>e1;
while(!czy_int(e1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>e1;
}
e2=rzut(e1);

a=wielomian(a2,b2,c2,d2,e2);

cout<<"podej wspolczynniki drugiego wielomianu: "<<endl;
cout<<"a=";
cin>>a1;
while(!czy_int(a1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>a1;
}
a2=rzut(a1);

cout<<"b=";
cin>>b1;
while(!czy_int(b1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>b1;
}
b2=rzut(b1);

cout<<"c=";
cin>>c1;
while(!czy_int(c1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>c1;
}
c2=rzut(c1);

cout<<"d=";
cin>>d1;
while(!czy_int(d1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>d1;
}
d2=rzut(d1);

cout<<"e=";
cin>>e1;
while(!czy_int(e1))
{
  cout<<"Podaj calkowita liczbe: ";
  cin>>e1;
}
e2=rzut(e1);

b=wielomian(a2,b2,c2,d2,e2);

cout<<endl<<"WYBIERZ ODPOWIEDNIA OPCJE:"<<endl;
cout<<"1. Wypisz pierwszy wielomian"<<endl<<"2. Wypisz drugi wielomian"<<endl;
cout<<"3. Sprawdz, czy wielomiany sa rowne"<<endl<<"4.sprawdz, czy wielomiany sa rozne"<<endl;
cout<<"5. Dodaj wielomiany"<<endl<<"6. Odejmij wielomiany"<<endl;
cout<<"7. Pomnoz wielomiany przez siebie (wynik zostanie 'obciety' do wielomianu st. czwartego)"<<endl;
cout<<"0. Wyjdz z programu"<<endl<<endl;

cin>>opcja;
while(opcja)
{
    if(opcja==1)
    {
       cout<<a<<endl;
    }
    if(opcja==2)
    {
       cout<<b<<endl;
    }
    if(opcja==3)
    {
       if(a==b) cout<<"Wielomiany sa rowne"<<endl;
       else cout<<"Wielomiany nie sa rowne"<<endl;  
    }
    if(opcja==4)
    {
       if(a!=b) cout<<"Wielomiany sa rozne"<<endl;
       else cout<<"Wielomiany nie sa rozne"<<endl;
    }
    if(opcja==5)
    {
      cout<<(a+b)<<endl;
    }
    if(opcja==6)
    {
       cout<<(a-b)<<endl;
    }
    if(opcja==7)
    {
       cout<<(a*b)<<endl;
    }
    
    cout<<endl<<"Wybierz opcje z powyzszych: ";
    cin>> opcja;
    
}
cout<<"The end :("<<endl;
return 0;
}
