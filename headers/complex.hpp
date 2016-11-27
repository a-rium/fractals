#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <cmath>

class complex
{
	private:
		long double real, imag;
	
	public:
		complex(long double real, long double imag);
		long double real() const;
		long double imaginary() const;
		long double degree() const;
		long double magnitude() const;
		
		complex operator+(const complex &o) const;
		complex operator-(const complex &o) const;
		complex operator*(const complex &o) const;
		complex operator/(const complex &o) const;
		
		void operator+=(const complex &o);
		void operator-=(const complex &o);
		void operator*=(const complex &o);
		void operator/=(const complex &o);

};

#endif