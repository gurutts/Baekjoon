#include<iostream>

int main(void)
{
    int n, sum = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    std::cout << sum;

    return 0;
}