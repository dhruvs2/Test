#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int day = 1; int sund_c = 0;

  for(int i = 1900; i < 1901; i++) {

    for(int j = 0; j < 12; j++) {

      day += months[j];
      if(i % 4 == 0 && months[j] == 28) day++;

    }

  }

  for(int i = 1901; i < 2001; i++) {

    for(int j = 0; j < 12; j++) {

      day += months[j];

      if (i % 4 == 0 and months[j] == 28)
        day += 1;

      if (day % 7 == 0)
        sund_c += 1;

    }
  }
  
  cout << sund_c << endl;
}
