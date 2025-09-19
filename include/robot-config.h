#include "vex.h"
using namespace vex;

extern brain Brain;

// VEXcode devices
extern inertial bob;
extern controller con;
extern motor l1;
extern motor l2;
extern motor l3;
extern motor_group leftmo;
extern motor r1;
extern motor r2;
extern motor r3;
extern motor_group rightmo;
extern motor inta1;
extern motor inta2;
extern motor_group intamo;
extern motor pner;
extern digital_out topCap;
//extern digital_out hood;
extern digital_out armLift;
extern digital_out intakeLift;
extern distance tim;
extern rotation ForwardTracker;
extern rotation SidewayTracker;
extern digital_out downRec;
extern optical colorSen;
extern digital_out puncher;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );