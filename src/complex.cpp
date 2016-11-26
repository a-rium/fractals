#include "complex.hpp"

complex::complex(long double real, long double imag)
	: real(real), imag(imag) {}
	
long double complex::real() const
{
	return real;
}

long double complex::imaginary() const
{
	return imag;
}

long double complex::degree() const
{
	return atan2(imag, real);
}

long double complex::magnitude() const
{
	return sqrt(real * real + imag * imag);
}

complex complex::operator+(const complex &o) const
{
	return complex(real + o.real, imag + o.imag);
}

complex complex::operator-(const complex &o) const
{
	return complex(real - o.real, imag - o.imag);
}

complex complex::operator*(const complex &o) const
{
	return complex(real * o.real - imag * o.imag, real * o.imag + imag * o.real);
}

complex complex::operator*(const complex &o) const
{
	long double den = (o.real * o.real + o.imag * o.imag);
	return complex((real * o.real + imag * o.imag) / den, (imag * o.real - real * o.imag) / den);
}