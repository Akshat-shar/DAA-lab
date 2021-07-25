#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int keyelement(int A[],int n,int key)
{
    int cmp=0,flag=0;
    for(int i=0;i<n;i++)
    {
        cmp++;
        if(A[i]==key)
        {
          flag=1;
          break;
        }     
    }
    if(flag==1)
     cout<<" Present  ";
    else
     cout<<" Not present ";
 return cmp;
}
int main()
 { 
      ifstream infile;
      infile.open("input_linear_search.txt");
      while(infile.eof()==0)
   {
      int v;
      infile >> v;

      while (v-->0)
      {
        int A[30];
        int n, key, x;
        infile >> n;
        for (int i = 0; i < n; i++)
        {
          infile >> A[i];
        }
        infile >> key;
        x = keyelement(A, n, key);
        cout << " " << x << endl;
      }
      return 0;
    }
    infile.close();
  } 