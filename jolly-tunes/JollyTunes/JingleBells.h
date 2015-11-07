#include "PlayableNote.h"
#include "Duration.h"
#include "pitches.h"

#pragma once

PlayableNote JINGLE_BELLS_NOTES[] = {
  // Dashing through the snow
  PlayableNote(NOTE_G3, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_C4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_G3, DURATION_DOTTED_HALF_NOTE),
   
  // In a one horse open sleigh
  PlayableNote(NOTE_G3, DURATION_EIGHTH_NOTE),   
  PlayableNote(NOTE_G3, DURATION_EIGHTH_NOTE),
  PlayableNote(NOTE_G3, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_C4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_A3, DURATION_DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DURATION_QUARTER_NOTE),
  
  // Over the field we go,
  PlayableNote(NOTE_A3, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_B3, DURATION_DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DURATION_QUARTER_NOTE),
  
  // Laughing all the way! (Ha, ha ,ha - rest)
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DURATION_QUARTER_NOTE),
  
  // Bells on bobtail ring
  PlayableNote(NOTE_G3, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_C4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_G3, DURATION_DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DURATION_QUARTER_NOTE),

  // Making spirits bright
  PlayableNote(NOTE_G3, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_C4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_A3, DURATION_DOTTED_HALF_NOTE),
  
  // What fun it is to 
  PlayableNote(NOTE_A3, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_A3, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE), 
  
  // Ride and sing a 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),  
  
  // Sleighing song to-night! Oh!
  PlayableNote(NOTE_A4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_C4, DURATION_HALF_NOTE), 
  PlayableNote(NOTE_G4, DURATION_HALF_NOTE), 
  
  // Jingle Bells
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_HALF_NOTE),
  
  // Jingle Bells
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_HALF_NOTE),
  
  // Jingle all the way, Way!
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_C4, DURATION_DOTTED_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_EIGHTH_NOTE),
  PlayableNote(NOTE_E4, DURATION_DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DURATION_QUARTER_NOTE),

  // Oh what fun it
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_DOTTED_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_EIGHTH_NOTE), 
  
  // is to ride in a
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_EIGHTH_NOTE), 
  PlayableNote(NOTE_E4, DURATION_EIGHTH_NOTE),
   
  // one-hourse o pen sleigh,
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_HALF_NOTE),
  // Hey!
  PlayableNote(NOTE_G4, DURATION_HALF_NOTE),

  // Second Chorus //

  // Jingle Bells
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_HALF_NOTE),
  
  // Jingle Bells
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_E4, DURATION_HALF_NOTE),
  
  // Jingle all the way, Way!
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_C4, DURATION_DOTTED_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_EIGHTH_NOTE),
  PlayableNote(NOTE_E4, DURATION_DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DURATION_QUARTER_NOTE),

  // Oh what fun it
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_DOTTED_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DURATION_EIGHTH_NOTE), 
  
  // is to ride in a
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_QUARTER_NOTE), 
  PlayableNote(NOTE_E4, DURATION_EIGHTH_NOTE), 
  PlayableNote(NOTE_E4, DURATION_EIGHTH_NOTE),
   
  // one-hourse o-pen sleigh,
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_G4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_F4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_D4, DURATION_QUARTER_NOTE),
  PlayableNote(NOTE_C4, DURATION_WHOLE_NOTE),
  
};

int JINGLE_BELLS_NOTE_COUNT = (sizeof(JINGLE_BELLS_NOTES)/sizeof(JINGLE_BELLS_NOTES[0]));
 
