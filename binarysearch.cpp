#include <iostream>
#include<fstream>
using namespace std;
int keyelement(int A[], int n, int key)
{
    int low=0,high=n-1,mid,flag=0,cmp=0;
    while(low<=high){
       mid=(low+high)/2;
       if(key==A[mid]){
           cmp++;
           flag=1;
           break;
       }
       else if(key<A[mid]){
           cmp++;
           high=mid-1;
       }
       else if(key>A[mid]){
             cmp++;
            low=mid+1;
       }
    }
    if (flag == 1)
        cout << "Present  ";
    else
        cout << "Not present ";

    return cmp;
}
int main()
{
    ifstream infile;
    infile.open("input_linear_search.txt");
    while (infile.eof() == 0)
    {
        int v;
        infile>>v;
        while (v--)
        {
            int A[30];
            int n, key, x;
            infile >> n;
            for (int i = 0; i < n; i++)
            {
                infile>> A[i];
            }
            infile>> key;
            x = keyelement(A, n, key);
            cout << " " << x << endl;
        }
    }
    
    infile.close();
    return 0;
}