/*
 * my_functions_lab_3.h
 *
 *  Created on: 31-Jan-2018
 *      Author: praton
 */

#ifndef MY_FUNCTIONS_LAB_4_H_
#define MY_FUNCTIONS_LAB_4_H_

#ifdef DEFINE_VARIABLES
#define EXTERN
#define INITIALIZER(...)        = __VA_ARGS__
#else
#define EXTERN                  extern
#define INITIALIZER(...)
#endif

// global variable for LED color
EXTERN uint8_t led_value INITIALIZER(2);
EXTERN uint8_t sw2Status INITIALIZER(0);
EXTERN uint8_t sw1Status INITIALIZER(0);
EXTERN uint8_t sw1_press INITIALIZER(0);
EXTERN uint8_t sw2_press INITIALIZER(0);
EXTERN uint8_t sw1_release INITIALIZER(0);
EXTERN uint8_t sw2_release INITIALIZER(0);
EXTERN uint8_t flag_sw1 INITIALIZER(0);
EXTERN uint8_t sw1_state INITIALIZER(0);
EXTERN uint8_t flag_sw2 INITIALIZER(0);
EXTERN uint8_t sw2_state INITIALIZER(0);
EXTERN unsigned long step_max INITIALIZER(20);
EXTERN unsigned long step_min INITIALIZER(10);
EXTERN unsigned long step INITIALIZER(10);

extern void led_changer(void);

extern void detect_key_press(void);

#endif /* MY_FUNCTIONS_LAB_4_H_ */
