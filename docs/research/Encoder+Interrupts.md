# Questions:

## Who would use motor speed or position information?
The programming team would use it to control how fast a motor runs or move a mechanism to a target position. The operator could use it to see whether the robot is responding accurately. The Mech and elec teams can use the readings to investigate a motor or mechanism that is not behaving as expected.

## What does an encoder report, and what is an interrupt?
An encoder sends electrical pulses to find how far it has turned and counts pulses over time to find speed. Some encoders have two signals, A and B, that also let the controller determine direction. An interrupt tells the controller to briefly pause its current code and run a small piece of code when a signal changes, so it can count that event.

Questions:
What are the differences between A and B signals?

## When might the controller miss pulses? Where could an encoder be mounted and tested:
It could miss pulses if the shaft turns faster than the controller can read, the program spends too long handling each pulse, or a connection is loose. Electrical noise can also make the count incorrect. An encoder could be built into the motor or mounted to a motor shaft or mechanism’s output shaft. We could test it on the bench by turning the shaft one full revolution, checking the count, then running it forward and backward at different speeds. After that, we could test it on the robot under its expected load.

## Why might the robot need speed or position feedback?
A motor command tells the motor what we want it to do; encoder feedback tells us what it actually did. The robot could use speed feedback to keep its wheels or digging mechanism running consistently. It could use position feedback to stop an arm or other mechanism at a chosen point.

## How could the controller count pulses and turn them into a useful measurement?
The controller counts encoder events and uses the encoder’s counts per revolution to convert the count into turns:
turns = counted events / counts per revolution
To calculate speed, it checks how much the count changed during a known time:
RPM = (change in count / counts per revolution) × (60 / time in seconds)

Questions:
solve this example...
