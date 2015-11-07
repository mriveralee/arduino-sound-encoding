#include "PlayableSong.h"
#include "Arduino.h"

PlayableSong::PlayableSong(unsigned int speakerPin, PlayableNote notes[], unsigned int noteCount) {
  this->speakerPin = speakerPin;
  this->notes = notes;
  this->noteCount = noteCount;
  this->playIndex = 0;
  this->hasStartedPlayback = false;
}
// TODO: Destructor

bool PlayableSong::hasStarted() {
  return this->hasStartedPlayback;
}

bool PlayableSong::hasFinished() {
  return this->playIndex >= this->getNoteCount();
}

unsigned int PlayableSong::getPlayIndex() {
  return this->playIndex;
}

unsigned int PlayableSong::getSpeakerPin() {
  return this->speakerPin;
}

unsigned int PlayableSong::getNoteCount() {
  return this->noteCount;
//  if (!this->notes) {
//    return 0; 
//  }
//  return (sizeof(this->notes)/sizeof(this->notes[0]));
}

void PlayableSong::playNextNote() {
  if (!this->hasStartedPlayback) {
    this->hasStartedPlayback = true;
  }
  Serial.println(this->hasStartedPlayback ? "YES" : "nO");
  this->playNote(this->playIndex);
  this->playIndex++;
  Serial.println(this->playIndex);
};

void PlayableSong::resetPlayIndex() {
  this->playIndex = 0;
  this->hasStartedPlayback = false;
}

void PlayableSong::playNote(unsigned int noteIndex) {
  if (noteIndex >= this->getNoteCount()) {
    return;
  }

  PlayableNote note = notes[noteIndex];
//  if (!note) {
//    return;
//  }
  
  note.play(this->speakerPin);
}

