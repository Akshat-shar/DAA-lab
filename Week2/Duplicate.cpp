#include <iostream>
using namespace std;
void  keyelement(int A[], int n, int key)
{
    int low = 0, high = n - 1, mid, flag = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            break;
        
        }
        else if (key < A[mid])
        {
            high = mid ;
        }
        else if (key > A[mid])
        {
    
            low = mid;
        }
    }
    while(low!=high){
        if(A[low]==key){
            flag++;
            low++;
        }
        else if(A[high]==key){
            flag++;high--;
        }
        low++;high--;
    }
    if (flag == 0)
        cout << " Not Present  "<<flag;
    else
        cout << " present "<<flag;
       
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
             keyelement(A, n, key);
            }
    
            return 0;
}