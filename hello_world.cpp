#include <iostream>

// Забыл удалть using namespace std;

int
main()
{
  char* name = "";
  std::cout << "Your name is: ";
  std::cin >> name;
  std::cout << "Hello world from" << name;
  return 0;
}

