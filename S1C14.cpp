#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[100];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = a[0];
    int second = a[0];

    // Find largest
    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    // Find second largest
    for(int i = 0; i < n; i++)
    {
        if(a[i] != largest)
        {
            if(second == largest || a[i] > second)
            {
                second = a[i];
            }
        }
    }

    cout << "Second largest element = " << second;

    return 0;
}
