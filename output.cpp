#include <iostream>
#include "output.h"

using namespace std;

void PrintFunctionTable(double start, double end, double step, int n, MathFunction func) {
    cout << "x \ty(x)" << endl;

    for (double x = start; x <= end; x += step) {
        double y = func(x, n);

        cout << x << "\t";
        if (y == -1 && func == squareRoot) {
            cout << "y is not defined" << endl;
        }
        else {
            cout << y << endl;
        }
    }
}

double squareRoot(double x, int n) {
	return (x < 0) ? -1 : sqrt(x);
}
