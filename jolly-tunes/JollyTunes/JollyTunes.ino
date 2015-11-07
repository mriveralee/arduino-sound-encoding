#include "PlayableSong.h"
#include "Duration.h"
#include "JingleBells.h"

//DEBUG_MODE prints to the serial monitor
boolean DEBUG_MODE = false;

//Pin Location of the Speaker
int SPEAKER_PIN = 9;

// Delay
int DELAY_NEXT_SONG = 5000;

boolean IS_ON = false;

PlayableSong *SONG = new PlayableSong(SPEAKER_PIN, JINGLE_BELLS_NOTES, JINGLE_BELLS_NOTE_COUNT);

//------------------------------------------

//Does initialization & sets up variables
void setup() {
  //Initialize the Serial Port for Writing
  Serial.begin(9600);
  pinMode(SPEAKER_PIN, OUTPUT);
  delay(1000);
}

//the Main Loop of our program
void loop() {
  SONG->playNextNote();

  if (SONG->hasFinished()) {
    Serial.println("FINISHED");
    delay(DELAY_NEXT_SONG);
    SONG->resetPlayIndex();
  }
}

