#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Spring.h"

class testApp : public ofBaseApp{
public:
	void setup();
	void update();
	void draw();
	
	vector<Particle> ps;
	vector<Spring> sp;
};
