#pragma once
/**
 * Configuration.h
 *
 * Define default settings
 *
 */
#define CONFIGURATION_H_VERSION 020004

//===========================================================================
//============================= Getting Started =============================
//===========================================================================
/**
 * Default soldering temp is 320.0 C
 * Temperature the iron sleeps at - default 150.0 C
 */
#define SOLDERING_TEMP           300
#define SLEEP_TEMP               150
#define BOOST_TEMP               420
#define BOOST_MODE_ENABLED       1

/**
 * Blink the temperature on the cooling screen when its > 50C 
 */
#define COOLING_TEMP_BLINK       1

/**
 * How many seconds/minutes we wait until going to sleep/shutdown.
 * Values -> SLEEP_TIME * 10; i.e. 5*10 = 50 Seconds! 
 */
#define SLEEP_TIME                5
#define SHUTDOWN_TIME            10

/**
 * Auto start off for safety.
 * Pissible values are:  
 *  0 - none 
 *  1 - Soldering Temperature
 *  2 - Sleep Temperature 
 *  3 - Sleep Off Temperature 
 */
#define AUTO_START_MODE          0

/**
 * OLED Orientation
 * 0: Right 1:Left 2:Automatic
 */
#define ORIENTATION_MODE         1
#define IN_LEFT_HANDED_MODE      0   // Default false -  0:FALSE 1:TRUE

/**
 * OLED Orientation Sensitivity on Automatic mode!
 * Motion Sensitivity <0=Off 1=Least Sensitive 9=Most Sensitive>
 */
#define SENSITIVITY              7

/**
 * Detailed soldering screen
 * Detailed idle screen (off for first time users)
 */
#define DETAILED_SOLDERING       1 
#define DETAILED_IDLE            1


#define CUT_OUT_SETTING           0       // default to no cut-off voltage (or 18W for TS80)
#define TEMPERATURE_INF           0       // default to 0
#define DESCRIPTION_SCROLL_SPEED  0       // default to slow
#define POWER_LIMIT_ENABLE        0       // Default to no power limit

// Default divider from schematic
#ifdef MODEL_TS100
  #define VOLTAGE_DIV           467
  #define CALIBRATION_OFFSET    900   // the adc offset in uV
  #define PID_POWER_LIMIT       70    // Sets the max pwm power limit
  #define POWER_LIMIT           65    // 30 watts default limit
  #define MAX_POWER_LIMIT       85    // 
#endif

#ifdef MODEL_TS80
  #define VOLTAGE_DIV 780
  #define PID_POWER_LIMIT       24   // Sets the max pwm power limit
  #define CALIBRATION_OFFSET    900  // the adc offset in uV
  #define POWER_LIMIT           24   // 24 watts default power limit
  #define MAX_POWER_LIMIT       30   // 
#endif