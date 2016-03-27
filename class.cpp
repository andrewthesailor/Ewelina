#include"proj1.h"
polynomial::polynomial()//constructor of class polynomial
{

}
polynomial::~polynomial()//destructor of class polynomial
{

}
//override of basic operators
polynomial& polynomial::operator+(const polynomial& poly)
{
	this->deg_null=(poly.deg_null+this->deg_null);
	this->deg_one=(poly.deg_one+this->deg_one);
	this->deg_two=(poly.deg_two+this->deg_two);
	cout<<this;
	return (*this);
}
polynomial& polynomial::operator-(const polynomial& poly)
{
	this->deg_null=(this->deg_null-poly.deg_null);
	this->deg_one=(this->deg_one-poly.deg_one);
	this->deg_two=(this->deg_two-poly.deg_two);
	cout<<this;
	return (*this);
}
polynomial& polynomial::operator+=(const polynomial& poly)
{
    this->deg_null=(poly.deg_null+this->deg_null);
	this->deg_one=(poly.deg_one+this->deg_one);
	this->deg_two=(poly.deg_two+this->deg_two);
	cout<<this;
	return (*this);
}
polynomial& polynomial::operator-=(const polynomial& poly)
{
    this->deg_null=(this->deg_null-poly.deg_null);
	this->deg_one=(this->deg_one-poly.deg_one);
	this->deg_two=(this->deg_two-poly.deg_two);
	cout<<this;
	return (*this);
}
// ^ end of override v additional methods
void polynomial::root()
{
    double delta;
    delta=(this->deg_one)*(this->deg_one)-4*(this->deg_two)*(this->deg_null);
    if(delta>0)
    {
        cout<<"1st root:  "<<(delta-this->deg_one)/(2*this->deg_two)<<"    2nd root:   "<<((-1)*delta-this->deg_one)/(2*this->deg_two);
    }
    else if(delta==0)
    {
        cout<<"double root:   "<<(-1)*(this->deg_one)/(2*(this->deg_two));
    }
    else
    {
        cout<<"no roots, delta equals: "<<delta;
    }
}
void polynomial::derivative()
{
    cout<<"derivative is :"<<(this->deg_two)*2<<"x"<<this->deg_one;
}
istream& operator>>(istream& instream,polynomial& target)
{
    cout<<"enter polynomial as 3 integers";
    cin>>target.deg_two>>target.deg_one>>target.deg_null;
    return instream;
}
ostream& operator<<(ostream& outstream,const polynomial& target)
{
    cout<<"polynomial is: "<<target.deg_two<<"*x^2 "<<target.deg_one<<"*x "<<target.deg_null;
    return outstream;
}
