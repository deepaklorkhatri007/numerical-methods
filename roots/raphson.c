#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#define EPSILON 0.001 

// The function is x^3 - x^2 + 2 
double func(double x) { 
	return x*x*x - x*x + 2; 
} 
// Derivative of the above function which is 3*x^x - 2*x 
double derivFunc(double x) { 
	return 3*x*x - 2*x; 
} 
// Function to find the root 
void newtonRaphson(double x) 
{   double h = 0;
	h = func(x) / derivFunc(x); 
	for (int i=0; i<100; i++) { 
		h = func(x)/derivFunc(x); 
		x = x - h; 
	} 
	printf("%d", x);
} 
// Driver program to test above 
int main() { 
	double x0 = -20; // Initial values assumed 
	newtonRaphson(x0); 
	return 0; 
} 
