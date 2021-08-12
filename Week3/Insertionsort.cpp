#include<iostream>
using namespace std;
void insertionsort(int A[],int n){
    int i,j,k,shift=0,cmp=0,x;
    for(i=1;i<n;i++){
      j=i-1;
      x=A[i];
      while(j>-1 && A[j]>x ){
          if(A[j]>x){
          shift++;
          A[j+1]=A[j];
          cmp++;
          }
          j--;
        }
        A[j+1]=x;
        shift++;

    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
       
    }
    cout<<"\n";
    cout <<"comparisons-"<< cmp<<endl;
    cout << "shifts-" << shift << endl;
}
int main(){
    int v;
    cin>>v;
    while (v--)
    {
        int size;
        cin>>size;
        int A[size+1];
        for(int  i=0;i<size;i++){
            cin>>A[i];
        }
        insertionsort(A,size);
       

    }
    
}