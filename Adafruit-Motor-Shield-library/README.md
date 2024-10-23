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


## setSpeed(speed)

#### Sets the speed of the motor.

#### Parameters:
* ###  speed- Valid values for 'speed' are between 0 and 255 with 0 being off and
255 as full throttle.

#### Example:
```
 motor1.setSpeed(255); // Set motor 1 to maximum speed
 motor4.setSpeed(127); // Set motor 4 to half speed
```

## run(cmd)

Sets the run-mode of the motor.

#### Parameters:
cmd - the desired run mode for the motor

#### Valid values for cmd are:

* FORWARD - run forward (actual direction of rotation will depend on motor wiring)

* BACKWARD - run backwards (rotation will be in the opposite direction from FORWARD)

* RELEASE - Stop the motor.  This removes power from the motor and is equivalent to setSpeed(0).  The motor shield does not implement dynamic breaking, so the motor may take some time to spin down

##### Example:

``` python
motor.run(FORWARD);
delay(1000);  // run forward for 1 second
motor.run(RELEASE);
delay(100);  // 'coast' for 1/10 second
motor.run(BACKWARDS);  // run in reverse

```



