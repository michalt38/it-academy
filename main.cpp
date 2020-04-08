#include <iostream>
using namespace std;

int pow(int x, int n)
{
    int result = x;

    for(; n > 1; --n)
    {
        result *= x;
    }

    return result;
}

int main()
{
    int i = 2;
    cout << "Hello world!" << endl;
}
