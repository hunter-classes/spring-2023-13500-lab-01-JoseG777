/*
Jose Guzman
JoseG777
Finds the smallest of two numbers.
*/

#include <iostream>

int main(){
  int num1;
  int num2;
  std::cout<< "Input your first integer: \n";
  std::cin>> num1;
  std::cout<<  "Input your second integer: \n";
  std::cin>> num2;
  if(num1 < num2){
    std::cout<<"The smaller of the two is "<< num1;
  }else{
    std::cout<<"The smaller of the two is "<< num2;
  }
  return 0;
}