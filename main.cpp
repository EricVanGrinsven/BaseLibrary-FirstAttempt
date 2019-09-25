#include<iostream> 
#include "baseChange.cpp"
#include "add.cpp"
#include "subtract.cpp"
#include "euclideanAlgorithm.cpp"
#include "remainder.cpp"
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    int answer = baseChange(2, 8, 7);
  int answer2 = baseChange(2, 8, 10);
  int answer3 = convertFromDecimal(2, 8);
  cout<< answer; 
  cout<< "\n";
  cout<< answer2 ; 
  cout<< "\n";
  cout<< answer; 
  cout<< "\n Adding: \n";
  int answer4 = add(7, 8, 12, 10, 2);
  cout<< answer4;
  cout<< "\n Adding: \n";
  int answer5 = add(7, 8, 10);
  cout<< answer5;
  cout<< "\n Subtracting: \n";
  int answer6 = subtract(5, 7, 8);
  cout<< answer6; 
  cout<< "\n Euclid: \n";
  int answer7 = euclideanAlgorithm(4, 8, 8, 10, 10);
  cout<< answer7; 
  cout<< "\n Rem: \n";
  int answer8 = remainder(4, 8, 8, 10, 10);
  cout<< answer8; 
  
    return 0; 
}
