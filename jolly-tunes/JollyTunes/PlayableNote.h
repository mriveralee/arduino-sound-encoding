#pragma once 

enum NoteValue {
  DOUBLE_WHOLE_NOTE = -2,
  DOTTED_WHOLE_NOTE = -1,
  WHOLE_NOTE = 0,
  DOTTED_HALF_NOTE = 1,
  HALF_NOTE = 2,
  DOTTED_QUARTER_NOTE = 3,
  QUARTER_NOTE = 4,
  EIGHTH_NOTE = 5,
  SIXTEENTH_NOTE = 6
};

class PlayableNote {
  
  private:
    unsigned int frequency;
    NoteValue noteValue;
    
  public:
    PlayableNote(); // Needed for array init
    PlayableNote(unsigned int frequency, NoteValue noteValue);
    // ~PlayableNote();

    unsigned int getFrequency();
    NoteValue getNoteValue();
    unsigned int getDuration(unsigned int bpm);
    
    void play(int pin, unsigned int bpm);
    
    //int getMidiValue()
  
    static void pauseBetweenNotes(int noteDuration);
    static unsigned int durationInMs(NoteValue noteValue, unsigned int bpm);
    // static int mtof(int midiValue);
    // static int ftom(int frequencyValue);

};
