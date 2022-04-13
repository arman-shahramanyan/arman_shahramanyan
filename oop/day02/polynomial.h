#ifndef polynomial_h
#define polynomial_h

class Polynomial
{
private:
	int _member_count;
	int _number;
public:
	Polynomial(int members_count, int degree);
	void Add();
	void Multiply();
	void Substract();
};
#endif 
