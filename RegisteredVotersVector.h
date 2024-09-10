#ifndef _H_RegisteredVotersVector_
#define _H_RegisteredVotersVector_

#include "Voter.h"
#include<vector>
#include "RegisteredVotersBase.h"

class RegisteredVotersVector : virtual public RegisteredVotersBase {
	private: 
		vector<Voter> v;
	public:
		RegisteredVotersVector(); 
		~RegisteredVotersVector();

		int size();
		int capacity();
		void resize(int n);
		bool empty();

		virtual Voter &operator[](unsigned int); 
		virtual void push_back(Voter &); 
};

#endif

