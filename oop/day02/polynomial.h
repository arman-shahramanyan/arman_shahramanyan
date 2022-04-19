#ifndef polynomial_h
#define polynomial_h

class Polynomial
{
private:
	int _memberCount;
	int _maxDegree;
	double _number;
	double *_coefficent = new double[_memberCount];
public:
	Polynomial & operator = (const Polynomial &);
	Polynomial operator + (const Polynomial &);
	Polynomial operator - (const Polynomial &);
	Polynomial operator * (const Polynomial &);
	Polynomial & operator += (const Polynomial &);
	Polynomial & operator -= (const Polynomial &);
	Polynomial & operator *= (const Polynomial &);
	void Add();
	void Multiply();
	void Subtract();
	~Polynomial();
};
#endif 
