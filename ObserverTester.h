// ObserverTester.h

#ifndef _TESTOBSERVER_h
#define _TESTOBSERVER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Observer.h"
class ObserverTester : public Observer
{
	void onReceivedDataFromSubject(const Subject*) override;
};

#endif

