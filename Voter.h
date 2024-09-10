#ifndef _H_Voter_
#define _H_Voter_

#include <iostream>
#include <stdlib.h>
using namespace std;

class Voter {
   private:
      string first = "";
      string last = "";
      unsigned int age = 0;
   public:
      Voter(string firstname, string lastname, unsigned int voterage);
      Voter();
      void show();
};

#endif
