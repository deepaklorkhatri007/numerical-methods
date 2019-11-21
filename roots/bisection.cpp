#include<bits/stdc++.h> 
#include<math.h>
using namespace std; 
#define EPSILON 0.01 
  
// The function is x^3 - x^2  + 2 
double func(double x) { 
    return x*x*x - x*x + 2+sin(x); 
} 
  
// Prints root of func(x) with error of EPSILON 
void bisection(double a, double b) { 
    if (func(a) * func(b) >= 0) { 
        cout << "You have not assumed right a and b\n"; 
        return; 
    } 
  
    double c = a; 
    while ((b-a) >= EPSILON) { 
        c = (a+b)/2; // Find middle point 
        if (func(c) == 0.0) break;  // Check if middle point is root 
        else if (func(c)*func(a) < 0)  b = c;// Decide the side to repeat the steps  
        else a = c;      
    } 
    cout << "The value of root is : " << c; 
} 
  
int main() { 
    double a =-200, b = 300; // Initial values assumed 
    bisection(a, b); 
    return 0; 
} 
