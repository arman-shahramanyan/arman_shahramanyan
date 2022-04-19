#include "polynomial.h"

Polynomial & operator = (const Polynomial &other)
{
   this->_memberCount = other._memberCount;	
   this->_maxDegree = other._maxDdegree;
   this->_number = other._number;
   delete[] this->_coefficent;
   this->_coeffcent = new double [other._memberCount]
   for (int i  = 0; i < (other._memberCount); i++) {
   	_coefficent[i] = other.coefficent[i];
   }
   return *this;
}
Polynomial operator + (const Polynomial& Sum)
{
   Polynomial temp1;
   if (_memberCount >= Sum._memberCount) {
   	this-> temp1._memberCount = _memberCount;
	temp1._coefficent = new double[_memberCount];
   } else {
   	this-> temp1._memberCount = Sum._memberCount;
	temp1._coefficent = new double[Sum._memberCount];
   }
   temp1._maxDegree = this->_maxDegree + Sum._maxDegree;
   for (int i = 0; i < temp1._memberCount; i++) {
   	temp1._coefficent[i] = this->_coefficent[i] + Sum._coefficent[i];
   }
   return temp1;
}
Polynomial operator - (const Polynomial& Diff)
{
   Polynomial temp2;
   if (_memberCount >= Diff._memberCount) {
   	this-> temp2._memberCount = _memberCount;
	temp2._coefficent = new double[_memberCount];
   } else {
   	this-> temp2._memberCount = Diff._memberCount;
	temp2._coefficent = new double[Diff._memberCount];
   }
   temp2._maxDegree = this->_maxDegree + Diff._maxDegree;
   for (int i = 0; i < temp2._memberCount; i++) {
   	temp2._coefficent[i] = this->_coefficent[i] + Diff._coefficent[i];
   }
   return temp2;
}
Polynomial operator + (const Polynomial& Mult)
{
   Polynomial temp3;
   if (_memberCount >= Mult._memberCount) {
   	this-> temp3._memberCount = _memberCount;
	temp3._coefficent = new double[_memberCount];
   } else {
   	this-> temp3._memberCount = Mult._memberCount;
	temp3._coefficent = new double[Mult._memberCount];
   }
   temp3._maxDegree = this->_maxDegree + Mult._maxDegree;
   for (int i = 0; i < temp3._memberCount; i++) {
   	temp3._coefficent[i] = this->_coefficent[i] + Mult._coefficent[i];
   }
   return temp3;
}
Polynomial & operator += (const Polynomial & ps) {
	*this = *this + ps;
	return *this;
}
Polynomial & operator -= (const Polynomial & ds) {
	*this = *this - ds;
	return *this;
}
Polynomial & operator *= (const Polynomial & ms) {
	*this = *this * ms;
	return *this;
}

~Polynomial () {
	delete[] _coefficent;



};
