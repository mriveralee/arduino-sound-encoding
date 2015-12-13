#include "PlayableSong.h"

PlayableSong::PlayableSong(
  unsigned int speakerPin, 
  unsigned int bpm, 
  PlayableNote notes[], 
  unsigned int noteCount) {
  this->speakerPin = speakerPin;
  this->bpm = bpm;
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
  this->playNote(this->playIndex);
  this->playIndex++;
};

void PlayableSong::resetPlayIndex() {
  this->playIndex = 0;
  this->hasStartedPlayback = false;
}

void PlayableSong::playNote(unsigned int noteIndex) {
  this->playNote(noteIndex, this->bpm);
}

void PlayableSong::playNote(unsigned int noteIndex, unsigned int bpm) {

  if (noteIndex >= this->getNoteCount()) {
    return;
  }

  PlayableNote note = notes[noteIndex];
//  if (!note) {
//    return;
//  }
  note.play(this->speakerPin, bpm);
}

    


