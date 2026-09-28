# Questions:

## Who needs to know the motor’s current?
The robot operator needs to know if motor is drawing too much current during a run. The elec team needs the reading to check the motor, controller, and wiring. the programming team needs it to display a warning and the mech team can use it to investigate a mechanism that is hard to move.

Questions:
How to measure current in IDEAs hub?
## What does a current sensor measure, and what motor ratings do we need before choosing one?
A current sensor measures how much electric current flows through a conductor, in amperes (A). We need the motor’s operating voltage, normal running current, and expected peak or stall current. We also need the controller’s ratings and must decide whether we want battery input current or motor output current. The sensor has to handle the expected current range and work with our robot’s controller.

Questions:
What's ohm's law?
Why will we need to utilize passive sign convention?
What's did Kirchoff say about circuits?

## When would a high-current reading matter?
It matters when the motor draws more current than expected, especially if the reading stays high. A brief increase while starting or accelerating can be normal, but sustained high current could mean the motor is under too much load or a mechanism is stuck. We should choose a warning level using the motor and controller specifications and our test readings.

Questions:
What test should we conduct?

## Where could the sensor go in the electrical system, and where could it be tested?
First, we should check whether the motor controller already reports current. If it does, we could read that value without adding a separate sensor. If we need to measure battery current going into one controller, a suitable sensor could go on that controller’s power feed. We could test the reading on a bench with the motor running freely, then on the assembled robot during normal movement and a heavier expected load.

Questions:
Why is it important to choose to calculate between the current entering a motor controller from the battery, or the current the controller sends to the motor?

## Why would measuring current help the robot?
It could give the team an early clue that a motor is working too hard. We could use the readings to find mechanical resistance, compare different driving conditions, and check whether our current limit is appropriate. It would also help us investigate a motor that keeps getting hot: current shows the electrical load, while the temperature sensor shows how hot the part has become.

Questions:
Who do you approach if the current is too high?

## How would the controller read it, and how could the team check that its readings make sense?
The robot computer could request a current reading from a motor controller that already supports it. For a separate sensor, it would read the sensor’s electrical signal and convert that signal to amperes using the sensor’s specifications.

Questions:
What do you think the robot falls under?
