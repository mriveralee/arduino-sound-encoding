#include "PlayableSong.h"
#include "PlayableNote.h"
#include "JingleBells.h"
#include "Timer.h"


#define QUARTER_NOTE_MS_BY_BMP 60000

//DEBUG_MODE prints to the serial monitor
boolean DEBUG_MODE = false;

//Pin Location of the Speaker
int SPEAKER_PIN = 1;

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
  tone(SPEAKER_PIN, 300, 2000);
  delay(2000);
  noTone(SPEAKER_PIN);
//  while(!SONG->hasFinished()) {
//    SONG->playNextNote(); 
//  }
  for (unsigned int i = 0; i < JINGLE_BELLS_NOTE_COUNT; i++) {
    PlayableNote note = JINGLE_BELLS_NOTES[i];
    unsigned int duration = durationInMs(note.getNoteValue(), BEATS_PER_MIN);
    tone(SPEAKER_PIN, note.getFrequency(), duration);
    delay(duration * 1.3);
    noTone(SPEAKER_PIN);  
  }
  tone(SPEAKER_PIN, 650, 2000);
  delay(2000);
  noTone(SPEAKER_PIN);



  if (SONG->hasFinished()) {
    // TODO set up next song
    SONG->resetPlayIndex();
    PAUSE_TIMER->start();
    while(PAUSE_TIMER->isActive()) {
      PAUSE_TIMER->tick();  
    }
  }
  
}


unsigned int durationInMs(NoteValue noteValue, unsigned int bpmInQuarterNote) {
  // Quarter note at 60 bpm == 1 sec (1000 ms) in duration
  // Which means ==> 6000 bpm * ms base quarter not
  // So we define all others from that, with QUARTER_NOTE_MS_BY_BMP / bpm 
  unsigned int quarterNoteDuration = QUARTER_NOTE_MS_BY_BMP / bpmInQuarterNote; 
  unsigned int multiplier = 100;
  switch (noteValue) {
    case DOUBLE_WHOLE_NOTE:
      multiplier = 800;
      break;
    case DOTTED_WHOLE_NOTE:
      multiplier = 600;
      break;
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
  unsigned int duration = multiplier * quarterNoteDuration / 100;
  return duration;
}



