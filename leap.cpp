/*
Jose Guzman
JoseG777
Determines if the year is a leap year or a commmon year.
*/

#include <iostream>
int main(){
    int year;
    std::cout<< "Input a year: \n";
    std::cin>> year;

    if (year % 4 != 0){
        std::cout<< year<< " is a common year\n";
    }
    else if(year % 4 == 0){
        if(year % 400 == 0){
            std::cout<< year<<" is a leap year\n";
        }
        else if (year % 100 == 0){
            std::cout<< year<<" is a common year \n";
        }
        else{
            std::cout<< year<< " is a leap year \n";
        }
    }
  
 }
