#include<iostream>
using namespace std;
  bool isleapyear(int year){
 
if((year % 4 ==0 && year % 100 != 0) || year % 400 == 0)
{
return true;
}
    else{
        return false;
    }
}

 int main()
 {
    int year;

    std:: cout <<  "enter a year" ;
     std:: cin >> year ;
     if(isleapyear(year))
     {
        std:: cout << year<< "is a leap year" << std::endl;
     }
     else{
          std:: cout << year<< "is not a leap year" << std::endl;
     }
      
return 0;
     

 }
