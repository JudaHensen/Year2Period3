#include "pch.h"
#include "Calculator.hpp"
#include <math.h>


Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}


// Adds a to b and returns the result
float Calculator::Plus(float a, float b)
{
	return a + b;
}

// Subtract b from a
float Calculator::Subtract(float a, float b)
{
	return a - b;
}

// Divide a by b
float Calculator::Divide(float a, float b)
{
	return a / b;
}

// Multiply a by b
float Calculator::Multiply(float a, float b)
{
	return a / b;
}

// Calculate the root of a
float Calculator::Root(float a)
{
	return sqrt(a);
}

// Calculate modulo a from b
float Calculator::Modulo(float a, float b)
{
	return fmod(a, b);
}

// Calculate sine from a
float Calculator::Sine(float a)
{
	return sin(a);
}

// Calculate cosine from a
float Calculator::Cosine(float a)
{
	return cos(a);
}

// Calculate tangent from a
float Calculator::Tangent(float a)
{
	return tan(a);
}