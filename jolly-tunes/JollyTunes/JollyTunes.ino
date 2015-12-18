#include "PlayableSong.h"
#include "JingleBells.h"
#include "Timer.h"

//DEBUG_MODE prints to the serial monitor
boolean DEBUG_MODE = false;

//Pin Location of the Speaker
int SPEAKER_PIN = 9;

// Beats Per Min for songs
unsigned int BEATS_PER_MIN = 70;

// Delay by 2 mins
unsigned long DELAY_NEXT_SONG = 120000;

// Song Controls
PlayableSong *SONG = new PlayableSong(
  SPEAKER_PIN, 
  BEATS_PER_MIN, 
  JINGLE_BELLS_NOTES, 
  JINGLE_BELLS_NOTE_COUNT);
Timer *PAUSE_TIMER = new Timer(DELAY_NEXT_SONG);

//------------------------------------------
//Does initialization & sets up variables
void setup() {
  //Initialize the Serial Port for Writing
  pinMode(SPEAKER_PIN, OUTPUT);
}

//the Main Loop of our program
void loop() {
  if (PAUSE_TIMER->isActive()) {
    PAUSE_TIMER->tick();
    return;
  }
  SONG->playNextNote();
  if (SONG->hasFinished()) {
    SONG->resetPlayIndex();
    PAUSE_TIMER->start();
  }
}



