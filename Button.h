/* 
 * Push button control
 *
 * This source file can be found under:
 * http://www.github.com/microfarad-de/Button
 * 
 * Please visit:
 *   http://www.microfarad.de
 *   http://www.github.com/microfarad-de
 * 
 * Copyright (C) 2019 Karim Hraibi (khraibi at gmail.com)
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 */

#ifndef __BUTTON_H
#define __BUTTON_H

#include <Arduino.h>


/*
 * Push button implementation class
 */
class ButtonClass {
  public:
    void press (void);
    void release (void);
    bool rising (void);
    bool falling (void);
    bool fallingLongPress (void);
    bool fallingContinuous (void);
    bool longPress (void); 
    bool longPressContinuous (void); 

    bool pressed = false;
    bool wasPressed = false;
    
  private:
    bool longPressed = false;
    bool wasLongPressed = false;
    uint32_t longPressTs = 0;
};



#endif // __BUTTON_H
