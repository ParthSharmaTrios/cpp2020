#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    char tryAgain = 'y';

    while(tryAgain=='y'){

        

        ifstream inFile, inFile2;
        ofstream outFile;

        cout << "Reading file numbers.txt, please wait ... " << endl;

        inFile.open("files/numbers.dat");
        inFile2.open("files/numbers2.txt");

        if(inFile.fail()){
            cout << "unable to open file" << endl;
            exit(1);
        }

        if(inFile2.fail()){
            cout << "unable to open file numbers2.txt " << endl;
            exit(1);
        }

        int a, b;

        inFile >> a ;
        inFile2 >> b;
        

        outFile.open("files/result.txt", fstream::app);

        if(outFile.fail()){
            cout << "unable to open file - result.txt" << endl;
        }

        outFile << "The result is " << a+b << endl;
        cout << "Result printed in the file " << endl;


        inFile.close();
        inFile2.close();
        outFile.close();

        cout << "Do you wnt conitnue - " << endl;
        cin >> tryAgain;
    }

  



    return 0;
}