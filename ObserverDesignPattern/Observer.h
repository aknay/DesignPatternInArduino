// Observer.h

#ifndef _OBSERVER_h
#define _OBSERVER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Subject;

class Observer {
public:
	virtual void onReceivedDataFromSubject(const Subject*) = 0;
	void attachSubject(Subject *subject);
};

#endif

