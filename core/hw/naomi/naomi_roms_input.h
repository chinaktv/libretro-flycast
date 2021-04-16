/*
 *  Created on: Nov 13, 2018

	Copyright 2018 flyinghead

	This file is part of reicast.

    reicast is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    reicast is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with reicast.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef CORE_HW_NAOMI_NAOMI_ROMS_INPUT_H_
#define CORE_HW_NAOMI_NAOMI_ROMS_INPUT_H_

#include "hw/maple/maple_devs.h"

//
// NAOMI Games
//

#define NAO_BASE_BTN_DESC { NAOMI_COIN_KEY, "COIN" }, \
						 { NAOMI_TEST_KEY, "TEST" }, \
						 { NAOMI_SERVICE_KEY, "SERVICE" },
#define NAO_START_DESC { NAOMI_START_KEY, "START" },

InputDescriptors _18wheelr_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "HORN" },
			{ NAOMI_DOWN_KEY, "VIEW" },
			{ NAOMI_BTN1_KEY, "SHIFT L", NAOMI_DOWN_KEY },		// This button uses P2 inputs for P1
			{ NAOMI_BTN2_KEY, "SHIFT H", NAOMI_UP_KEY },		// This button uses P2 inputs for P1
			{ NAOMI_BTN3_KEY, "SHIFT R", NAOMI_LEFT_KEY },		// This button uses P2 inputs for P1
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "HANDLE", Full, 0 },
			{ "ACCEL", Half, 4 },
			{ "BRAKE", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors alienfnt_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "LEFT SHOT" },
			{ NAOMI_BTN1_KEY, "ROTATION R" },
			{ NAOMI_BTN2_KEY, "RIGHT SHOT" },
			{ NAOMI_BTN3_KEY, "ROTATION L" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "WHEEL", Full, 0 },
			{ "RIGHT PEDAL", Half, 4 },
			{ "LEFT PEDAL", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors alpilot_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "LANDING GEAR SW" },
			{ NAOMI_BTN1_KEY, "VIEW CHANGE" },
			{ NAOMI_BTN2_KEY, "FLAP SWITCH" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "ELEVATOR", Full, 0 },
			{ "AILERON", Full, 1 },
			{ "", Full, 2 },
			{ "RUDDER PEDAL", Full, 3 },
			{ "THRUST LEVER L", Half, 4 },
			{ "THRUST LEVER R", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors capsnk_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "LIGHT PUNCH" },
			{ NAOMI_BTN1_KEY, "STRONG PUNCH" },
			{ NAOMI_BTN3_KEY, "LIGHT KICK" },
			{ NAOMI_BTN4_KEY, "STRONG KICK" },
			{ NAOMI_UP_KEY, "UP" },
			{ NAOMI_DOWN_KEY, "DOWN" },
			{ NAOMI_LEFT_KEY, "LEFT" },
			{ NAOMI_RIGHT_KEY, "RIGHT" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors crzytaxi_inputs = {
	  {
			{ NAOMI_UP_KEY, "DRIVE GEAR" },
			{ NAOMI_DOWN_KEY, "REVERSE GEAR" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "HANDLE", Full, 0 },
			{ "ACCEL", Half, 4 },
			{ "BRAKE", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors cspike_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "SHOT1" },
			{ NAOMI_BTN1_KEY, "SHOT2" },
			{ NAOMI_BTN2_KEY, "SHOT3" },
			{ NAOMI_BTN3_KEY, "SHOT4" },
			{ NAOMI_UP_KEY, "UP" },
			{ NAOMI_DOWN_KEY, "DOWN" },
			{ NAOMI_LEFT_KEY, "LEFT" },
			{ NAOMI_RIGHT_KEY, "RIGHT" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors trigger_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "TRIGGER" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors deathcox_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "TRIGGER" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "GUN-X", Full, 0 },
			{ "GUN-Y", Full, 1 },
			{ NULL },
	  },
};

InputDescriptors gunsur2_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "GUN BUTTON" },
			{ NAOMI_BTN1_KEY, "TRIGGER" },
			{ NAOMI_UP_KEY, "SELECT UP" },
			{ NAOMI_DOWN_KEY, "SELECT DOWN" },
			{ NAOMI_START_KEY, "ENTER" },
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "ROLL", Full, 0 },
			{ "PITCH", Full, 1 },
			{ "YAW", Full, 2 },
			{ NULL },
	  },
};

InputDescriptors jambo_inputs = {
	  {
			{ NAOMI_UP_KEY, "LEVER UP", NAOMI_DOWN_KEY },	// This button uses P2 inputs for P1
			{ NAOMI_DOWN_KEY, "LEVER DOWN", NAOMI_UP_KEY },	// This button uses P2 inputs for P1
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "HANDLE", Full, 0 },
			{ "ACCEL", Half, 4 },
			{ "BRAKE", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors mvsc2_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "LIGHT PUNCH" },
			{ NAOMI_BTN1_KEY, "STRONG PUNCH" },
			{ NAOMI_BTN2_KEY, "ASSIST A" },
			{ NAOMI_BTN3_KEY, "LIGHT KICK" },
			{ NAOMI_BTN4_KEY, "STRONG KICK" },
			{ NAOMI_BTN5_KEY, "ASSIST B" },
			{ NAOMI_UP_KEY, "UP" },
			{ NAOMI_DOWN_KEY, "DOWN" },
			{ NAOMI_LEFT_KEY, "LEFT" },
			{ NAOMI_RIGHT_KEY, "RIGHT" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors sfz3ugd_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "LIGHT PUNCH" },
			{ NAOMI_BTN1_KEY, "MEDIUM PUNCH" },
			{ NAOMI_BTN2_KEY, "STRONG PUNCH" },
			{ NAOMI_BTN3_KEY, "LIGHT KICK" },
			{ NAOMI_BTN4_KEY, "MEDIUM KICK" },
			{ NAOMI_BTN5_KEY, "STRONG KICK" },
			{ NAOMI_UP_KEY, "UP" },
			{ NAOMI_DOWN_KEY, "DOWN" },
			{ NAOMI_LEFT_KEY, "LEFT" },
			{ NAOMI_RIGHT_KEY, "RIGHT" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors ninjaslt_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "ENTER" },
			{ NAOMI_BTN1_KEY, "TRIGGER 1P" },	// swapped with btn4
			{ NAOMI_BTN2_KEY, "START 1P" },
			{ NAOMI_BTN3_KEY, "START 2P" },
			{ NAOMI_BTN5_KEY, "TRIGGER 2P" },
			{ NAOMI_UP_KEY, "SELECT UP" },
			{ NAOMI_DOWN_KEY, "SELECT DOWN" },
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors vonot_inputs = {
	  {
			{ NAOMI_UP_KEY, "L UP" },
			{ NAOMI_DOWN_KEY, "L DOWN" },
			{ NAOMI_LEFT_KEY, "L LEFT" },
			{ NAOMI_RIGHT_KEY, "L RIGHT" },
			{ NAOMI_BTN0_KEY, "L TRIGGER" },
			{ NAOMI_BTN1_KEY, "L TURBO" },
			{ NAOMI_BTN2_KEY, "QM" },
			// These buttons use P2 inputs for P1
			{ NAOMI_BTN3_KEY, "R TRIGGER", NAOMI_BTN0_KEY },
			{ NAOMI_BTN4_KEY, "R TURBO", NAOMI_BTN1_KEY },
			{ NAOMI_BTN5_KEY, "R UP", NAOMI_UP_KEY },
			{ NAOMI_BTN6_KEY, "R DOWN", NAOMI_DOWN_KEY },
			{ NAOMI_BTN7_KEY, "R LEFT", NAOMI_LEFT_KEY },
			{ NAOMI_BTN8_KEY, "R RIGHT", NAOMI_RIGHT_KEY },

			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors vtenis2c_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "SHOT1" },
			{ NAOMI_BTN1_KEY, "SHOT2" },
			{ NAOMI_UP_KEY, "UP" },
			{ NAOMI_DOWN_KEY, "DOWN" },
			{ NAOMI_LEFT_KEY, "LEFT" },
			{ NAOMI_RIGHT_KEY, "RIGHT" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors monkeyba_inputs = {
	  {
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "STICK V", Full, 1 },
			{ "STICK H", Full, 0 },
			{ NULL },
	  },
};

InputDescriptors cvs2_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "LIGHT PUNCH" },
			{ NAOMI_BTN1_KEY, "MEDIUM PUNCH" },
			{ NAOMI_BTN2_KEY, "STRONG PUNCH" },
			{ NAOMI_BTN3_KEY, "LIGHT KICK" },
			{ NAOMI_BTN4_KEY, "MEDIUM KICK" },
			{ NAOMI_BTN5_KEY, "STRONG KICK" },
			{ NAOMI_UP_KEY, "UP" },
			{ NAOMI_DOWN_KEY, "DOWN" },
			{ NAOMI_LEFT_KEY, "LEFT" },
			{ NAOMI_RIGHT_KEY, "RIGHT" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ NULL },
	  },
};

InputDescriptors tokyobus_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "HORN" },
			{ NAOMI_DOWN_KEY, "VIEW CHANGE" },
			{ NAOMI_LEFT_KEY, "ANNOUNCE" },
			{ NAOMI_RIGHT_KEY, "DOOR CLOSE" },
			// These buttons uses P2 inputs for P1
			{ NAOMI_BTN1_KEY, "WINKER RIGHT", NAOMI_BTN0_KEY },
			{ NAOMI_BTN2_KEY, "WINKER LEFT", NAOMI_BTN1_KEY },
			{ NAOMI_BTN3_KEY, "SHIFT FRONT", NAOMI_UP_KEY },
			{ NAOMI_BTN4_KEY, "SHIFT REVERSE", NAOMI_DOWN_KEY },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "HANDLE", Full, 0 },
			{ "ACCEL", Half, 4 },
			{ "BRAKE", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors wrungp_inputs = {
	  {
			{ NAOMI_UP_KEY, "VIEW" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "HANDLE BAR", Full, 0 },
			{ "THROTTLE LEVER", Half, 4, true },
			{ "ROLL", Full, 2 },
			{ "PITCH", Full, 3 },
			{ NULL },
	  },
};

InputDescriptors marine_fishing_inputs = {
	  {
			{ NAOMI_START_KEY, "CAST" },
			{ NAOMI_UP_KEY, "LURE" },
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "ROD Y", Full, 1 },
			{ "ROD X", Full, 0 },
			{ "STICK X", Full, 2 },
			{ "STICK Y", Full, 3 },
			{ "REEL SPEED", Half, 4 },
			{ "TENSION", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors f355_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "ASSIST SC" },
			{ NAOMI_BTN1_KEY, "ASSIST TC" },
			{ NAOMI_BTN2_KEY, "ASSIST ABS" },
			{ NAOMI_BTN3_KEY, "ASSIST IBS", NAOMI_BTN1_KEY },
			{ NAOMI_BTN4_KEY, "WING SHIFT L", NAOMI_DOWN_KEY },
			{ NAOMI_BTN5_KEY, "WING SHIFT R", NAOMI_UP_KEY },

			// Manual gearshift (Deluxe only)
			//    L   R
			//  U 1 3 5
			//
			//  D 2 4 6
			{ NAOMI_UP_KEY, "SPEED SHIFT UP" },
			{ NAOMI_DOWN_KEY, "SPEED SHIFT DOWN" },
			{ NAOMI_LEFT_KEY, "SPEED SHIFT LEFT" },
			{ NAOMI_RIGHT_KEY, "SPEED SHIFT RIGHT" },

			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "ACCEL", Half, 0 },
			{ "BRAKE", Half, 1 },
			{ "CLUTCH", Full, 2 },	// Deluxe only
			{ "unused", Full, 4 },
			{ "HANDLE", Full, 0 },
			{ NULL },
	  },
};

InputDescriptors zombie_inputs = {
	  {
			{ NAOMI_BTN0_KEY, "BTN0" },
			{ NAOMI_BTN1_KEY, "BTN1" },
			{ NAOMI_BTN2_KEY, "BTN2" },
			NAO_START_DESC
			NAO_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "UP - DOWN", Full, 1, true },
			{ "LEFT - RIGHT", Full, 0, true },
			{ NULL },
	  },
};

// World Series 99 / Super Major League 99
// World Series Baseball / Super Major League
static InputDescriptors wsbb_inputs = {
	{
		{ NAOMI_BTN0_KEY, "BTN A" },
		{ NAOMI_BTN1_KEY, "BTN B" },
		NAO_START_DESC
		NAO_BASE_BTN_DESC
		{ 0 },
	},
	{
		{ "STICK Y", Full, 1, true },
		{ "STICK X", Full, 0, true },
		{ "BAT", Half, 4, true },
		{ "", Half, 5 },	// unused but P2 starts at axis 4
		{ NULL },
	},
};

static InputDescriptors ringout_inputs  = {
	{
		{ NAOMI_BTN0_KEY, "BUMPER" },
		{ NAOMI_BTN1_KEY, "BACK" },
		NAO_START_DESC
		NAO_BASE_BTN_DESC
		{ 0 },
	},
	{
		{ "STEER", Full, 0 },
		{ "ACCEL", Half, 4 },
		{ NULL },
	},
};

static InputDescriptors sstrkfgt_inputs = {
	{
		{ NAOMI_BTN0_KEY, "GUN TRIGGER" },
		{ NAOMI_BTN1_KEY, "MISSILE BTN" },
		{ NAOMI_BTN2_KEY, "AIR BRAKE" },
		{ NAOMI_BTN3_KEY, "VIEW CHANGE" },
		NAO_START_DESC
		NAO_BASE_BTN_DESC
		{ 0 },
	},
	{
		{ "ELEVATOR", Full, 1 },
		{ "AILERON", Full, 0 },
		{ "THRUST LEVER", Half, 4 },
		{ "RUDDER PEDAL", Full, 2 },
		{ NULL },
	},
};
//
// AtomisWave games
//

#define AW_BASE_BTN_DESC { AWAVE_COIN_KEY, "COIN" }, \
						 { AWAVE_TEST_KEY, "TEST" }, \
						 { AWAVE_SERVICE_KEY, "SERVICE" },
#define AW_START_DESC { AWAVE_START_KEY, "START" },

InputDescriptors ftspeed_inputs = {
	  {
			{ AWAVE_BTN0_KEY, "BOOST" },
			{ AWAVE_UP_KEY, "HIGH GEAR" },
			{ AWAVE_DOWN_KEY, "LOW GEAR" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "STEERING WHEEL", Full, 0 },
			{ "GAS PEDAL", Half, 4 },
			{ "BRAKE PEDAL", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors kofnw_inputs = {
	  {
			{ AWAVE_BTN0_KEY, "LIGHT PUNCH" },
			{ AWAVE_BTN1_KEY, "STRONG PUNCH" },
			{ AWAVE_BTN2_KEY, "HEAT MODE" },
			{ AWAVE_BTN3_KEY, "LIGHT KICK" },
			{ AWAVE_BTN4_KEY, "STRONG KICK" },
			{ AWAVE_UP_KEY, "UP" },
			{ AWAVE_DOWN_KEY, "DOWN" },
			{ AWAVE_LEFT_KEY, "LEFT" },
			{ AWAVE_RIGHT_KEY, "RIGHT" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  }
};

InputDescriptors kofxi_inputs = {
	  {
			{ AWAVE_BTN0_KEY, "LIGHT PUNCH" },
			{ AWAVE_BTN1_KEY, "STRONG PUNCH" },
			{ AWAVE_BTN2_KEY, "SPECIAL ATTACK" },
			{ AWAVE_BTN3_KEY, "LIGHT KICK" },
			{ AWAVE_BTN4_KEY, "STRONG KICK" },
			{ AWAVE_UP_KEY, "UP" },
			{ AWAVE_DOWN_KEY, "DOWN" },
			{ AWAVE_LEFT_KEY, "LEFT" },
			{ AWAVE_RIGHT_KEY, "RIGHT" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  }
};

InputDescriptors maxspeed_inputs = {
	  {
			{ AWAVE_UP_KEY, "HIGH SHIFT" },
			{ AWAVE_DOWN_KEY, "LOW SHIFT" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "STEERING", Full, 0 },
			{ "ACCELERATOR", Half, 4 },
			{ "BRAKE", Half, 5 },
			{ NULL },
	  },
};

InputDescriptors ngbc_inputs = {
	  {
			{ AWAVE_BTN0_KEY, "LIGHT PUNCH" },
			{ AWAVE_BTN1_KEY, "STRONG PUNCH" },
			{ AWAVE_BTN2_KEY, "SWAP CHARACTERS" },
			{ AWAVE_BTN3_KEY, "LIGHT KICK" },
			{ AWAVE_BTN4_KEY, "STRONG KICK" },
			{ AWAVE_UP_KEY, "UP" },
			{ AWAVE_DOWN_KEY, "DOWN" },
			{ AWAVE_LEFT_KEY, "LEFT" },
			{ AWAVE_RIGHT_KEY, "RIGHT" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  }
};

InputDescriptors samsptk_inputs = {
	  {
			{ AWAVE_BTN0_KEY, "LIGHT SLASH" },
			{ AWAVE_BTN1_KEY, "MEDIUM SLASH" },
			{ AWAVE_BTN2_KEY, "STRONG SLASH" },
			{ AWAVE_BTN3_KEY, "KICK" },
			{ AWAVE_BTN4_KEY, "SPECIAL EVASION" },
			{ AWAVE_UP_KEY, "UP" },
			{ AWAVE_DOWN_KEY, "DOWN" },
			{ AWAVE_LEFT_KEY, "LEFT" },
			{ AWAVE_RIGHT_KEY, "RIGHT" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  }
};

InputDescriptors blockpong_inputs = {
	  {
			{ AWAVE_BTN0_KEY, "SHOT1" },
			{ AWAVE_BTN1_KEY, "SHOT2" },
			{ AWAVE_BTN2_KEY, "SHOT3" },
			{ AWAVE_BTN3_KEY, "SHOT4" },
			{ AWAVE_BTN4_KEY, "SHOT5" },
			AW_START_DESC
			AW_BASE_BTN_DESC
			{ 0 },
	  },
	  {
			{ "ANALOG X", Full, 0, true },
			{ "ANALOG Y", Full, 1, false },	// not used?
			{ NULL },
	  },
};

#endif /* CORE_HW_NAOMI_NAOMI_ROMS_INPUT_H_ */
