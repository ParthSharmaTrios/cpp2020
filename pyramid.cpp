#include<iostream>
using namespace std;

int main(){

  
    int rows;

    cout << "Enter number of rows you  want - ";
    cin >> rows;

   
   for(int i=1 ; i<=rows; i++){

       for(int j=1; j <= rows-i; j++){

           cout << " ";
       }

       for(int k=1; k<= 2*i-1; k++){

           
            if(k==1 || i==rows || k==i ||k==2*i-1 ){
               cout <<"*";
           }else{
               
               cout << " ";

               
           }

       }

       cout << endl;
   }

    for(int i=rows-1 ; i>=1; i--){

       for(int j=1; j <= rows-i; j++){

           cout << " ";
       }

       for(int k=1; k<= 2*i-1; k++){

         if(k==1  || k==i || k==2*i-1){
               cout <<"*";
           }else{
               cout << " ";
           }

       }

       cout << endl;
   }



    return 0;

    
}