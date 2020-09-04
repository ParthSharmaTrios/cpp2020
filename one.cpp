#include <iostream>
 
using namespace std;
 
int main(){
 
 int rows;
 
 cout << "How many lines do you want to print?-";
 cin >> rows;
 

for (int i=rows; i>=1; i--){
 
 for(int j=1; j <= rows-i; j++){
 cout<< " "; 
 }
 
 for(int k=0; k< 2*i-1; k++){
 cout << "*";
 }
 cout<<endl;
 
 }
 
 return 0;
 
}