#include <iostream>

using namespace std;

class BaseMath
{
public:
    bool isEven(int n)
    {
        if (n%2==0)
        {
            return 1;
        }
        else
            return 0;
    }

    int factorial(int n)
    {
        int fact;
        if (n == 0 || n == 1)
            fact = 1;
        if (n > 1)
            fact = n*factorial(n-1);
        return fact;
    }
};

class AdvancedMath : public BaseMath
{
public:
    double estimateEulerNumber (int loops)
    {
        double e = 1;
        for (int i=1; i < loops; i++)
        {
            e += 1.0/factorial(i);
        }
        return e;
    }
};

int main(){
    AdvancedMath o;
    printf("Factorial(4) is: %d\n", o.factorial(4));
    double euler = o.estimateEulerNumber(9);
    printf("Euler's Number is: %f\n", euler);
	return 0;
}
