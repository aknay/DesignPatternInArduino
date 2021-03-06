// Subject.h

#ifndef _SUBJECT_h
#define _SUBJECT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Observer;

class Subject {
public:
	Subject();
	void registerObserver(Observer*); 
	void unregisterObserver();
	int getValue() const;
	void setVal(const int val);

private:
	int mValue;
	void _notifyObserver();
	Observer* mObserver;
};

#endif

