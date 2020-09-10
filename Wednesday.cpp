#include <iostream>
#include <string>
#include <cmath>

using namespace std;


string random_string(){

    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
    'r','s','t','u','v','w','x',
    'y','z'};


        string  random_name="";

        for(int i=1 ; i <=10; i++){
            random_name = random_name+ letters[rand()%26];
        }
        return random_name;


}


void smallestInArr(){

    int numbers[6] = {4,50,1,4,10,5};

    int arrSize = sizeof(numbers)/sizeof(numbers[0]);
    int smallest = numbers[0];

    for(int i =0 ; i < arrSize; i++){

        if(numbers[i] < smallest){
            smallest = numbers[i];
        }
    }

    cout << "Smallest nunber is - " << smallest << endl;

}




int main(){


    smallestInArr();

// string names[10];


// for(int i=0; i<10;i++){
//     names[i] = random_string();
//     cout << names[i] << endl;

// }

// for(int j=0; j<10;j++){
//     cout << names[j] << endl;
// }





return 0;
}




