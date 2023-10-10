#include <iostream>
#include <cstring>
#include <algorithm> 
#include <cctype>

std::string abbrevName(std::string name)
{
  int last_i;
  char first = name[0];
  for (int i = 0; i<name.size(); i++)
  {
    if (name[i] == ' ') last_i = i;
  }
  char last = name[last_i + 1];
  char arr[3];
  arr[0] = first;
  arr[1] = '.';
  arr[2] = last;
    
  std::string out(arr);
  std::cout << out;

  return out;
}

int main()
{
    abbrevName("Ivan Huan");
}