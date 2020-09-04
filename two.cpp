#include<iostream>
using namespace std;
 
 
 int main()
 
 {
int  rows;
 
    cout <<"rows: ";
    cin >> rows;
for(int i=1;i<=rows;++i){
 
for(int j=1;j<=i;++j){
 
    cout<<" ";
 
}
for(int k =rows;k>=i;--k){
cout<<"*";
}
for (int l = rows-1; l >=i; --l)
{
    /* code */
    cout<<"*";
}
cout<<endl;
}
return 0;
 
 }