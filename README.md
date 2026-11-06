# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Line Follower Lab
The Line Follower lab interfaces with the following:

* User LEDs of the TI MSP432 LaunchPad
* Pololu Gearmotor with Encoder - [Product Link](https://www.pololu.com/product/3675)
* 8-Channel QTRX Sensor Array - [Product Link](https://www.pololu.com/product/3672)

1.)  Write a void function named Chassis_Board_LEDs_Init that takes no arguments and
initializes the following pins as output GPIO pins. Initialize the value of the pins to
zero.
• P8.0 (Front Left Yellow LED)
• P8.5 (Front Right Yellow LED)
• P8.6 (Back Left Red LED)
• P8.7 (Back Right Red LED)

void Chassis_Board_LEDs_Init()
{
  P8->SEL0 &= ~ 0xE1;
  P8->SEL0 &= ~ 0xE1;
  P8->DIR |= 0xE1;
  P8->OUT &= ~0xE1;
}

2.)
