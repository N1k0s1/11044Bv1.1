using namespace vex;

extern brain Brain;

// VEXcode devices
extern drivetrain Drivetrain;
extern motor intakes;
extern motor flywheel;
extern controller Controller1;
extern motor_group cata;
extern pneumatics wings1;
extern pneumatics wings2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );