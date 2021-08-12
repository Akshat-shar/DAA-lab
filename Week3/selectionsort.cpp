#include<iostream>
using namespace std;
 static  int swaps=0;
 void swaped(int *a, int *b)
 {
     swaps++;
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;
 }
void selectionsort(int A[],int n){
    int i,j,k,cmp=0;
    for(i=0;i<n-1;i++){
        
       for(j=k=i;j<n;j++){
           
           if(A[j]<A[k]){
               cmp++;
               k=j;
           }
       }
      swaped(&A[i],&A[k]);

    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    cout<<"comparisons-"<<cmp<<endl;
    cout<<"swaps-"<<swaps;
}
 
int main(){
    int v;
    cin>>v;
    while(v--){
        int size;
        cin>>size;
        int A[size+1];
        for(int i=0;i<size;i++){
            cin>>A[i];
        }
        selectionsort(A,size);


    }
}