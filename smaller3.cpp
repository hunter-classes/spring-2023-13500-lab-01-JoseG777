/*
Jose Guzman
JoseG777
Finds the smallest of three numbers.
*/

#include <iostream>

int main(){
  int num1;
  int num2;
  int num3;

  std::cout<< "Input your first integer: \n";
  std::cin>> num1;
  std::cout<< "Input your second integer: \n";
  std::cin>> num2;
  std::cout<< "Input your third integer \n";
  std::cin>> num3;

  if(num1 < num2 and num1 < num3){
    std::cout<<"The smaller of the three is "<< num1;
  }
  else if(num2 < num1 and num2 < num3){
    std::cout<<"The smaller of the three is "<< num2;
  }
  else if(num3 < num1 and num3 < num2){
    std::cout<<"The smaller of the three is "<< num3;
  }
  return 0;
}