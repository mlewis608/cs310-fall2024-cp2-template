#include "RegisteredVotersVector.h"

RegisteredVotersVector::RegisteredVotersVector() {
}

RegisteredVotersVector::~RegisteredVotersVector() {
}

int RegisteredVotersVector::size() {
	return v.size();
}

int RegisteredVotersVector::capacity() {
	return v.capacity();
}

void RegisteredVotersVector::resize(int n) {
	v.resize(n);
}

bool RegisteredVotersVector::empty() {
	return v.empty();
}

Voter &RegisteredVotersVector::operator[](unsigned int i) {
	return v[i];
}

void RegisteredVotersVector::push_back(Voter &new_voter) {
	return v.push_back(new_voter);
}
