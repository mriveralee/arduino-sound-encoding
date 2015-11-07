#include "PlayableNote.h"
#include "Arduino.h"


PlayableNote::PlayableNote(unsigned int frequency, unsigned int duration) {
  this->frequency = frequency;
  this->duration = duration;
}
   
unsigned int PlayableNote::getFrequency() {
  return this->frequency;
}

unsigned int PlayableNote::getDuration() {
  return this->duration;
}

void PlayableNote::play(int pin) {
  tone(pin, this->frequency, this->duration); 
  PlayableNote::pauseBetweenNotes(this->duration); 
}

// static int PlayableNote::mtof(int midiValue);
// static int PlayableNote::ftom(int frequencyValue);

//Places a rest between notes while playing so that they are distinguishable
void PlayableNote::pauseBetweenNotes(int noteDuration) {
    delay(noteDuration);
}

