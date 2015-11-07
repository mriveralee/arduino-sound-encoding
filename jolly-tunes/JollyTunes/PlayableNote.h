#pragma once 

class PlayableNote {
  
  private:
    unsigned int frequency;
    unsigned int duration;
    
  public:
    PlayableNote(); // Needed for array init
    PlayableNote(unsigned int frequency, unsigned int duration);
    // ~PlayableNote();
    
    unsigned int getFrequency();
    unsigned int getDuration();
    
    void play(int pin);
    
    //int getMidiValue()

    static void pauseBetweenNotes(int noteDuration);
    // static int mtof(int midiValue);
    // static int ftom(int frequencyValue);

};
