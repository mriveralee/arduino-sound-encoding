#pragma once

class Timer {
  
  private:
    unsigned long startTimeInMs;
    unsigned long currentTimeInMs;
    unsigned long timeDeltaInMs;
    bool _isActive;

  public:
    Timer(unsigned long timeDeltaInMs);
    void start();
    void tick();
    bool isFinished();
    bool isActive();

    void setTimeDeltaInMs(unsigned long timeDeltaInMs);
    unsigned long  getTimeDeltaInMs();

};
    









