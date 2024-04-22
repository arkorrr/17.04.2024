#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;

public:
	Fraction(int numerator = 0, int denomirator = 1) :
		m_numerator(numerator), m_denominator(denomirator)
	{
	}

	friend ostream& operator<<(ostream& out, const Fraction& f1)
	{
		out << f1.m_numerator << "/" << f1.m_denominator;
		return out;
	}
};

void printFraction(const unique_ptr<Fraction>& ptr)
{
	if (ptr)
		cout << *ptr;
}

int main()
{
	unique_ptr<Fraction> ptr = make_unique<Fraction>(7, 9);

	printFraction(ptr);
}