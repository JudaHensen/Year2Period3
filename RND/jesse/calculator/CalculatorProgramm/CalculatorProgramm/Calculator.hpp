#pragma once
class Calculator
{
public:
	Calculator();
	~Calculator();
	// Adds a to b and returns the result
	float Plus(float a, float b);
	float Subtract(float a, float b);
	float Divide(float a, float b);
	float Multiply(float a, float b);
	float Root(float a);
	float Modulo(float a, float b);
	float Sine(float a);
	float Cosine(float a);
	float Tangent(float a);
};

