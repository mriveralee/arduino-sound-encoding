#include "Timer.h"
#include "Arduino.h"

Timer::Timer(unsigned long timeDeltaInMs) {
  this->timeDeltaInMs = timeDeltaInMs;
  this->_isActive = false;
}

void Timer::start() {
  this->startTimeInMs = millis();
  this->currentTimeInMs = this->startTimeInMs;
  this->_isActive = true;
}

void Timer::tick() {
  this->currentTimeInMs = millis(); 
  bool isFinished = this->isFinished();  
  if (isFinished) {
    this->_isActive = false;
  }
}

bool Timer::isActive() {
  return this->_isActive;
}

bool Timer::isFinished() {
  return this->currentTimeInMs >= (this->startTimeInMs + this->timeDeltaInMs);  
}


void Timer::setTimeDeltaInMs(unsigned long timeDeltaInMs) {
  this->timeDeltaInMs = timeDeltaInMs;
}

unsigned long Timer::getTimeDeltaInMs() {
  return this->timeDeltaInMs;
}

