#include <iostream>
#include <string>

using namespace std;

int main(){

    

//   int score;

//   cout << "Enter your socre - ";
//   cin >> score;

//   if(score >=90 && score <= 100){
//       cout << "A \n\n" ;
//   }else if(score >= 80 && score <=89){
//      cout << "B" << endl;
//   }else if(score >= 70 && score <= 79){
//       cout << "C" << endl;

//   }else if(score >= 65 && score <=69){
//     cout << "D" << endl;

//   }else{
//         cout << "F" << endl;

//   }

 


int counter;

cout << "How many time do  you want to print - ";
cin >> counter;

if(counter > 10){
    cout << "Please enter a smaller number " << endl;
    return 0;
}

for(int i=0; i<counter ; i++){
    cout << "Hello ";
}

// int i =0 ;

// do{

//     cout << "Hello ";

//     i++;
// }while(i < counter);

 
//  int i =0;

//  while(i < counter){
//      cout << "Hello  ";

//      i++;
//  } 

 cout << endl; 

    
    

return 0;

}

