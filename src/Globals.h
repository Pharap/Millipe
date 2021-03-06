#pragma once

//
// MIT License
//
// Copyright (c) 2018-2019 Thomas Buckland (@Dreamer2345)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

//
// Reformatted by Pharap
//

// IsArduboy.h must be included before Arduboy2.h
#include "IsArduboy.h"
#include <Arduboy2.h>

#if IS_ARDUBOY
#include <ArduboyTones.h>
#endif

#include "GameState.h"
#include "Player.h"
#include "Centipede.h"
#include "Mushroom.h"
#include "Bullet.h"

extern Arduboy2 arduboy;

#if IS_ARDUBOY
extern ArduboyTones sound;
#endif

extern GameState gameState;

extern uint32_t points;

extern Player player;

extern Mushroom mushrooms[maxMushrooms];

extern Bullet bullets[maxbullets];

extern CentipedeSegment centipedeSegments[maxCentipedeSegments];