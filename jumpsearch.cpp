#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
int jumpsearch(int A[], int n, int key)
{
    int start = 0, end = 0, cmp = 0;

    while (A[end] <= key)
    {
        cmp++;
        start = end;
        end = end + sqrt(n);
        if (start > n)
            return -1;
    }
    while (start != end)
    {
        cmp++;
        if (A[end] == key)
        {
            cout << "present ";
            return cmp++;
        }
        end--;
    }
    cout << "Not present ";
    return cmp;
}
int main()
{

        int v;
        cin >> v;
        while (v--)
        {
            int A[30];
            int n, key, x;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> A[i];
            }
            cin >> key;
            x = jumpsearch(A, n, key);
            cout << " " << x << endl;
        }
        return 0;
    }

