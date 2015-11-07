#include "PlayableNote.h"

#pragma once

class PlayableSong {
  
  private:
    PlayableNote *notes;
    unsigned int speakerPin;
    unsigned int playIndex;
    unsigned int noteCount;
    bool hasStartedPlayback;
    
    void playNote(unsigned int noteIndex);

  public:
    PlayableSong(unsigned int speakerPin, PlayableNote notes[], unsigned int noteCount);
    ~PlayableSong();

    bool hasStarted();
    bool hasFinished();

    unsigned int getSpeakerPin();
    unsigned int getNoteCount();
    unsigned int getPlayIndex();

    void resetPlayIndex();
    void playNextNote();

};
