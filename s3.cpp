#include <iostream> 
#include <stdlib.h>  
void fact(int n);
using namespace std;

int main()
{
    int n;
    cin >> n;
    fact(n);
    return 0;
}

void fact(int n)
{
    int i, m = 0, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        if (f == n)
        {
            cout << "Yes";
            m = 1;
            break;
        }

    }
    if (m == 0)  cout << "No";
}