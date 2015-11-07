#pragma once

// to calculate the note duration, take one second
// divided by the note type. e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
int SECOND = 1000;
int DURATION_WHOLE_NOTE = SECOND;
int DURATION_HALF_NOTE = DURATION_WHOLE_NOTE / 2;
int DURATION_QUARTER_NOTE = DURATION_HALF_NOTE / 2;
int DURATION_EIGHTH_NOTE = DURATION_QUARTER_NOTE / 2;
int DURATION_SIXTEENTH_NOTE = DURATION_EIGHTH_NOTE / 2;

int DURATION_DOTTED_QUARTER_NOTE = DURATION_QUARTER_NOTE + DURATION_EIGHTH_NOTE;
int DURATION_DOTTED_HALF_NOTE = DURATION_HALF_NOTE + DURATION_QUARTER_NOTE;


