#pragma once

#include "State.h"
#include "Idle.h"

using namespace std;

class Jumping : public State
{
public:
	Jumping();

	~Jumping();

	void idle(Animation* a);
	
};
