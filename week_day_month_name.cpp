#include <iostream>
#include <ctime>
 
int main()
{
  time_t rawtime;
  struct tm * timeinfo;
  char timestr [80]; 

  time ( &rawtime );                               // текущая дата в секундах
  timeinfo = localtime ( &rawtime );               // текущее локальное время, представленное в структуре
 
  strftime ( timestr,80,"День недели %A\nМесяц %B\nKate",timeinfo); // форматируем строку времени
  std::cout << timestr << std::endl;
 
  return 0;
}
