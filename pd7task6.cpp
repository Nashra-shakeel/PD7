#include <iostream>
using namespace std;

bool isPrime(int num);
int primorial(int n);

int main()
{
    int n, result;
    cout << "Enter number: ";
    cin >> n;
    result = primorial(n);
    cout << "Primorial: " << result << endl;
    return 0;
}

bool isPrime(int num)
{
    for (int i = 2; i<num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    if (num <= 1)
    {
        return false;
    }
    else
    {
    return true;
    }
}

int primorial(int n)
{
    int p = 1;
    int num = 2;
    int primeCount = 0;
    while (primeCount < n)
    {
        if (isPrime(num))
        {
            p *= num;
            primeCount++;
        }
        num++;
    }

    return p;
} 