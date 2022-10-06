#include <iostream>

using namespace std;

int Binomial(int n, int k);
int Factorial(int num);

int main()
{
    int n = 0, k =0;

    cin >> n >> k;

    cout << Binomial(n,k) << endl;

    return 0;
}

int Binomial(int n, int k)
{
    int result = 0;

    result = Factorial(n) / (Factorial(n-k) * Factorial(k));

    return result;
}

int Factorial(int num)
{
    int result = 1;

    for(int i = 1; i<=num; i++)
    {
        result *= i;
    }

    return result;
}