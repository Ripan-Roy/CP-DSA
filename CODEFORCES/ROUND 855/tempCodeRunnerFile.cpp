#include <iostream>
using namespace std;

class Number
{
private:
    double x, y;

public:
    Number(double a, double b)
    { // constructor
        x = a;
        y = b;
    }

    friend double mean(Number); // friend function declaration
};

double mean(Number n)
{ // friend function definition
    return (n.x + n.y) / 2.0;
}

int main()
{
    Number n(2.5, 7.8); // create object of Number class

    double m = mean(n); // call friend function to find mean

    cout << "Mean of " << n.x << " and " << n.y << " is " << m << endl;

    return 0;
}
