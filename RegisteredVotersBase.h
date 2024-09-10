#ifndef _H_RegisteredVotersBase_
#define _H_RegisteredVotersBase_

#include "Voter.h"

class RegisteredVotersBase {
	private: 
		// none
	public: 
		//virtual RegisteredVotersBase() = 0;
		~RegisteredVotersBase() {};

		virtual int size() = 0;
		virtual int capacity() = 0;
		virtual void resize(int n) = 0;
		virtual bool empty() = 0;

		virtual Voter &operator[](unsigned int) = 0; 
		virtual void push_back(Voter &) = 0; 
};

#endif

