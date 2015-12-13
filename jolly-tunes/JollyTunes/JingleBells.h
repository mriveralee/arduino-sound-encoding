#include "PlayableNote.h"
#include "pitches.h"

#pragma once

PlayableNote JINGLE_BELLS_NOTES[] = {
  // Dashing through the snow
  PlayableNote(NOTE_G3, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE), 
  PlayableNote(NOTE_C4, QUARTER_NOTE),
  PlayableNote(NOTE_G3, DOTTED_HALF_NOTE),
   
  // In a one horse open sleigh
  PlayableNote(NOTE_G3, EIGHTH_NOTE),   
  PlayableNote(NOTE_G3, EIGHTH_NOTE),
  PlayableNote(NOTE_G3, QUARTER_NOTE),
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_D4, QUARTER_NOTE),
  PlayableNote(NOTE_C4, QUARTER_NOTE), 
  PlayableNote(NOTE_A3, DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, QUARTER_NOTE),
  
  // Over the field we go,
  PlayableNote(NOTE_A3, QUARTER_NOTE),
  PlayableNote(NOTE_F4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE),
  PlayableNote(NOTE_B3, DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, QUARTER_NOTE),
  
  // Laughing all the way! (Ha, ha ,ha - rest)
  PlayableNote(NOTE_G4, QUARTER_NOTE),
  PlayableNote(NOTE_G4, QUARTER_NOTE),
  PlayableNote(NOTE_F4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, QUARTER_NOTE),
  
  // Bells on bobtail ring
  PlayableNote(NOTE_G3, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE), 
  PlayableNote(NOTE_C4, QUARTER_NOTE),
  PlayableNote(NOTE_G3, DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, DOTTED_HALF_NOTE),

  // Making spirits bright
  PlayableNote(NOTE_G3, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE), 
  PlayableNote(NOTE_C4, QUARTER_NOTE),
  PlayableNote(NOTE_A3, DOTTED_HALF_NOTE),
  
  // What fun it is to 
  PlayableNote(NOTE_A3, QUARTER_NOTE),
  PlayableNote(NOTE_A3, QUARTER_NOTE),
  PlayableNote(NOTE_F4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE), 
  
  // Ride and sing a 
  PlayableNote(NOTE_G4, QUARTER_NOTE), 
  PlayableNote(NOTE_G4, QUARTER_NOTE), 
  PlayableNote(NOTE_G4, QUARTER_NOTE), 
  PlayableNote(NOTE_G4, QUARTER_NOTE),  
  
  // Sleighing song to-night! Oh!
  PlayableNote(NOTE_A4, QUARTER_NOTE), 
  PlayableNote(NOTE_G4, QUARTER_NOTE), 
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_D4, QUARTER_NOTE), 
  PlayableNote(NOTE_C4, HALF_NOTE), 
  PlayableNote(NOTE_G4, HALF_NOTE), 
  
  // Jingle Bells
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, HALF_NOTE),
  
  // Jingle Bells
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, HALF_NOTE),
  
  // Jingle all the way, Way!
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_G4, QUARTER_NOTE),
  PlayableNote(NOTE_C4, DOTTED_QUARTER_NOTE),
  PlayableNote(NOTE_D4, EIGHTH_NOTE),
  PlayableNote(NOTE_E4, DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, QUARTER_NOTE),

  // Oh what fun it
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DOTTED_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, EIGHTH_NOTE), 
  
  // is to ride in a
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, EIGHTH_NOTE), 
  PlayableNote(NOTE_E4, EIGHTH_NOTE),
   
  // one-hourse o pen sleigh,
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, HALF_NOTE),
  // Hey!
  PlayableNote(NOTE_G4, HALF_NOTE),

  // Second Chorus //

  // Jingle Bells
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, HALF_NOTE),
  
  // Jingle Bells
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE),
  PlayableNote(NOTE_E4, HALF_NOTE),
  
  // Jingle all the way, Way!
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_G4, QUARTER_NOTE),
  PlayableNote(NOTE_C4, DOTTED_QUARTER_NOTE),
  PlayableNote(NOTE_D4, EIGHTH_NOTE),
  PlayableNote(NOTE_E4, DOTTED_HALF_NOTE),
  PlayableNote(NOTE_REST, QUARTER_NOTE),

  // Oh what fun it
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_F4, DOTTED_QUARTER_NOTE), 
  PlayableNote(NOTE_F4, EIGHTH_NOTE), 
  
  // is to ride in a
  PlayableNote(NOTE_F4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, QUARTER_NOTE), 
  PlayableNote(NOTE_E4, EIGHTH_NOTE), 
  PlayableNote(NOTE_E4, EIGHTH_NOTE),
   
  // one-hourse o-pen sleigh,
  PlayableNote(NOTE_G4, QUARTER_NOTE),
  PlayableNote(NOTE_G4, QUARTER_NOTE),
  PlayableNote(NOTE_F4, QUARTER_NOTE),
  PlayableNote(NOTE_D4, QUARTER_NOTE),
  PlayableNote(NOTE_C4, WHOLE_NOTE),

};

int JINGLE_BELLS_NOTE_COUNT = (sizeof(JINGLE_BELLS_NOTES)/sizeof(JINGLE_BELLS_NOTES[0]));
 
