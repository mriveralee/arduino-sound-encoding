#include "PlayableNote.h"
#include "pitches.h"
#include "Arduino.h"

#include <math.h> 

#define QUARTER_NOTE_MS_BY_BMP 60000
#define DELAY_BETWEEN_NOTES 500


PlayableNote::PlayableNote(unsigned int frequency, NoteValue noteValue) {
  this->frequency = frequency;
  this->noteValue = noteValue;
}
   
unsigned int PlayableNote::getFrequency() {
  return this->frequency;
}

unsigned int PlayableNote::getDuration(unsigned int bpm) {
  return PlayableNote::durationInMs(this->noteValue, bpm);
}

NoteValue PlayableNote::getNoteValue() {
  return this->noteValue;
}

void PlayableNote::play(int pin, unsigned int bpm) {
  unsigned int duration = PlayableNote::durationInMs(this->noteValue, bpm);
  // For Rests
  if (this->frequency == NOTE_REST) {
    noTone(pin);
    PlayableNote::pauseBetweenNotes(duration);
    return;
  } else {
    tone(pin, this->frequency); 
    PlayableNote::pauseBetweenNotes(duration);
    noTone(pin);
  }
}

// static int PlayableNote::mtof(int midiValue);
// static int PlayableNote::ftom(int frequencyValue);

//Places a rest between notes while playing so that they are distinguishable
void PlayableNote::pauseBetweenNotes(int timeInMs) {
    delay(timeInMs);
}

unsigned int PlayableNote::durationInMs(NoteValue noteValue, unsigned int bpmInQuarterNote) {
  // Quarter note at 60 bpm == 1 sec (1000 ms) in duration
  // Which means ==> 6000 bpm * ms base quarter not
  // So we define all others from that, with QUARTER_NOTE_MS_BY_BMP / bpm 
  unsigned int quarterNoteDuration = round(QUARTER_NOTE_MS_BY_BMP / bpmInQuarterNote); 
  unsigned int multiplier = 100;
  switch (noteValue) {
    case WHOLE_NOTE:
      multiplier = 400;
      break;
    case DOTTED_HALF_NOTE:
      multiplier = 300;
      break;
    case HALF_NOTE:
      multiplier = 200;
      break;
    case DOTTED_QUARTER_NOTE:
      multiplier = 150;
      break;
    case QUARTER_NOTE:
      multiplier = 100;
      break;
    case EIGHTH_NOTE:
      multiplier = 50;
      break;
    case SIXTEENTH_NOTE:
      multiplier = 25;
      break;
    default:
      // TODO: Unsupported Note exception
      break;
  }
  float duration = (multiplier * quarterNoteDuration) / 100.0;
  return round(duration);
}


