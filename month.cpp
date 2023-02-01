/*
Jose Guzman
JoseG777
Determines the number of days in a month in any given year.
*/

#include <iostream>
int main(){
    int year;
    int month;
    int t1 = 31;
    int t0 = 30;

    std::cout<< "Input a year: \n";
    std::cin >> year;
    std::cout<< "Input a month: \n";
    std::cin >> month;

    if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
        std::cout<<"This month has " << t1 << " days. \n";
    }
    else if(month == 4 or month == 6 or month == 9 or month == 11){
        std::cout<<"This month has " << t0 << " days. \n";
    }
    else if (year % 4 != 0){
        std::cout<<"This month has 28 days. \n";
        }
    else if(year % 4 == 0){
        if(year % 400 == 0){
            std::cout<<"This month has 29 days. \n";
        }
        else if (year % 100 == 0){
            std::cout<<"This month has 28 days. \n";
        }
        else{
            std::cout<<"This month has 29 days. \n";
        }
    }
    
}

 