# Questions:

## Who needs to know when a motor or controller gets too hot?
During the competition, the robot operator needs a warning during a run so they can stop or reduce the load. The electrical team needs the temp data to check the moter and controller, and the programming team needs it to make the warning appear to check that their code works. The mechanical team should also know if friction or a heavy load is causing the overheating for weight, and volume adjustments or System engineering paper.

A Temp sensor can only help if there is a reaction to that action.

Task: Summarize

## What temperature could be measured, and what information do we need before choosing a sensor?
We should be able to measure the motor's internal temp, outside of the motor or the motor controller's temperature. Before, choosing a sensor, we will need to know the exact models of the motor and controller to find their temperature limits, whether it already reports the temp, where it could fit, and how the Arduino would read it.

Questions:
why must the sensor need to measure the outside of the case?
Is it really important to check the models specs?

## When should a temperature warning happen?
The warning should happen before the moter reaches its allowed temperature limit. We should then test the robot under it's expected load to choose a warning point with enough time to respond.

Questions:
Why is there no single safe warning temperature for every motor?

## Where could the sensor be mounted, and where could it be tested?
If we need an external sensor, we should secure it to a stationary part of the motor near the controller’s heat producing area, following the manufacturer’s mounting guidance. We could first test the sensor on a bench, then test it on the assembled robot during normal driving and a demanding run. The sensor and wire need to stay clear of rotating parts.

Questions:
What sort was tests will have to be conducted to obtain the actual temp?
## Why does that location matter?
The sensor reads the temp of where its mounted. A sensor away from the hot component may mostly read the surrounding air and warned too late. Plus, a motor case sensor also takes time to heat up, so the reading may lag behing the temp inside the motor.

## How would the controller read the temperature and signal a warning?
The robot computer could read temperature data already provided by the motor controller, or read a separate sensor through a compatible input (like a TMP sensor with voltage). The program would convert the reading to degrees, compare it with the chosen warning level, and show a warning to the operator. We could also log the temperature so the team can see when it rises during testing.

Questions:
Any projects that remind you of this from intro to engineering or Comp 1?
