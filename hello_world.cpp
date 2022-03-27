#include <iostream>

// Zabudli ste odstrániť používanie menného priestoru std...

int main(){
   char* name = "";
   std::cout << "Your name is: ";
   std::cin >> name;
   std::cout << "Hello world from" << name << std::endl;
   return 0;
}
