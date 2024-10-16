# AFMotor.h Usage Guide 

## AF_DCMotor motorname(portnum, freq)

This is the constructor for a DC motor.  Call this constructor once for each
motor in your sketch.  Each motor instance must have a different name as
in the example below.

#### * port num - selects which channel (1-4) of the motor controller the motor will be connected to
#### * (Optional) freq - selects the PWM frequency.  If no frequency is specified, 1KHz is used by default
Frequencies for channel 1 & 2 are:
* MOTOR12_64KHZ
* MOTOR12_8KHZ
* MOTOR12_2KHZ
* MOTOR12_1KHZ 

Frequencies for channel 3 & 4 are:
* MOTOR34_64KHZ
* MOTOR34_8KHZ
* MOTOR34_1KHZ 




