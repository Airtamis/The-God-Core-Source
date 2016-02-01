/*************************************************************\
 * Globals.h                                                 *
 * This file was created by Jeremy Greenburg                 *
 * As part of The God Core game for the University of        *
 * Tennessee at Martin's University Scholars Organization    *
 *                                                           *
 * This file contains the declaration of the Globals class   *
 * which is little more than a struct to hold variables      *
 * that need to be accessed in many different places         *
\*************************************************************/

#ifndef GLOBALS_H
#define GLOBALS_H

#include "HeadsUpDisplay.h"
#include "CameraControl.h"
#include "PauseScreen.h"
#include "Level.h"

// Remember that if you're doing anything else, globals are bad.
// But we're in the hellscape that is graphics
// There are no rules here
// Only madness dwells here

extern bool clipping,
	goDim, goDark, loading,
	getConsole, getTerminal, isPaused, isInScreen,
	changeSong;

extern int songNum;

extern const char *SONG0, *SONG1, *SONG2, *SONG3, *SONG4, *SONG5,
					*SONG6, *SONG7, *SONG8, *SONG9;

extern HeadsUpDisplay HUD;
extern CameraControl Cam;
extern PauseScreen pause;
extern std::string curr_level;
extern Level lvl;

int getSongNum(std::string input);
std::string getSongName(int input);

#endif