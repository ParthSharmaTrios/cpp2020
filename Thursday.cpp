#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int sum(int a, int b){

    return a+b;
}

double sum(int b, double a){

    return b+a;
}

void greeting(string name){

    cout << "Welcome " << name << endl;
}


void square(int num){

    cout << "\n" << num*num << endl;
}


int main(){

    greeting("John");

    square(3);
    //cout << "Square of 3 is " << square(3) << endl;
    cout << "Trying to find square of 3 using pow() - " << pow(3,2) << endl;
    cout << "Square root of 9 is " << sqrt(9) << endl;
    cout << "Sum of 2 and 4 is " << sum(2,4.00);

cout<<endl;
return 0;
}




