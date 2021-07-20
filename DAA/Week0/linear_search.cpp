#include<iostream>
using namespace std;
int keyelement(int A[],int n,int key){
    int cmp=0,flag=0;
    for(int i=0;i<n;i++){
        cmp++;
        if(A[i]==key){
          flag=1;
          break;
        }     
    }
    if(flag==1)
     cout<<"key is present\n";
    else
     cout<<"key not present\n";
 return cmp;
}
int main(){
    int A[30];
    int n,key,x;
    cout<<"Enter the size of Array";
    cin>>n;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
      cin>>A[i];
    }
    cout<<"enter the key element";
    cin>>key;
    x=keyelement(A,n,key);
    cout<<"No. of comparisons are:"<<x;  
}