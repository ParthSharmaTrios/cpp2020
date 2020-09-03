#include <iostream>
#include <string>

using namespace std;

int main(){

    int rows,space;

    cout << "Enter number of rows you want - ";
    cin >> rows;


    




    for(int i=1; i <= rows; i++){

        for(int j=1; j<=i; j++ ){
            cout << "*";
        }

        cout << endl;
    }
   
    for(int i=rows; i >= 1; i--){

        for(int j=1; j<=i; j++ ){
            cout << "*";
        }

        cout << endl;
    }




    cout<<endl;



return 0;
}
