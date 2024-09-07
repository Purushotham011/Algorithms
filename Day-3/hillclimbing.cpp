//Implementation of simple Hill climbing algorithm without using vectors

#include <iostream>
#include <cmath>
using namespace std;

// Function to find the local maximum
double hillClimbing(double x0, double step_size, double precision)
{
    double x = x0;
    double x_new;
    double y = x * x;
    double y_new;
    int i = 0;
    while (true)
    {
        x_new = x + step_size;
        y_new = x_new * x_new;
        if (y_new < y)
        {
            step_size = -step_size;
            x_new = x + step_size;
            y_new = x_new * x_new;
        }
        if (abs(y_new - y) <= precision)
        {
            break;
        }
        x = x_new;
        y = y_new;
        i++;
    }
    cout << "Local maximum is at x = " << x << " and y = " << y << endl;
    cout << "Number of iterations: " << i << endl;
    return x;
}

int main()
{
    double x0 = 0.0;
    double step_size = 0.01;
    double precision = 0.0001;
    hillClimbing(x0, step_size, precision);
    return 0;
}

// Output
// Local maximum is at x = 0.0 and y = 0.0
// Number of iterations: 1

// Local maximum is at x = 0.0 and y = 0.0
// Number of iterations: 1
