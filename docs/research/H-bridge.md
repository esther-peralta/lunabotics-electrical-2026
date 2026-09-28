# Questions:

## What does an H-bridge do, and what motor information is needed to choose one?
An H-bridge controls a brushed DC motor by changing which direction current flows through it. This lets the motor run forward or backward. The driver can also change speed and stop the motor. Before choosing one, we need to know the motor’s voltage, normal current, startup or stall current, and whether it is brushed or brushless. We also need to check that the driver can handle the current and connect to our controller.

Questions:
What is the exact model of the motor we want to control?
Is it brushed or brushless, and does it already have a motor controller?
What are its voltage, running current, and stall current?

## When would the motor need to change speed, reverse, or stop?
The motor may need to slow down when the operator wants more precise movement or when a mechanism approaches its target. It may need to reverse if the robot drives backward or needs to clear a stuck mechanism. It needs to stop when the operator releases the control or when a limit or fault is reached. We should also decide whether “stop” means coast to a stop or brake more quickly; H-bridge drivers can support different stop modes.

Questions:
Which part of our robot needs forward and reverse movement?
Would that part be safer or easier to control if it brakes or coasts?
What should happen if the motor gets stuck or the operator loses control?
## Where could the driver be mounted on the robot, and where could it be tested safely?
The driver could be mounted near the motor or power distribution area, somewhere secure and protected from impacts and loose material. It also needs enough cooling and space for its power and signal wires. We could first test one driver and motor on a secured bench setup with the correct power supply and circuit protection. We would start at a low command and check forward, reverse, speed control, and stopping before testing it on the assembled robot.

Questions:
Where on our robot would the driver be protected but still accessible?
How would we keep its wiring away from moving parts?
What is the simplest bench test we can do before connecting the full mechanism?
## Why would an H-bridge be needed for this motor?
If we use a brushed DC motor that must run in both directions, an H-bridge provides the electrical switching needed to reverse it. It also gives the controller a way to command speed and stopping. We may not need a separate H-bridge if our chosen motor controller already includes that function. A basic brushed motor H-bridge is not the right driver by itself for a three-phase brushless motor; that motor needs a compatible brushless controller.

Questions:
Does our motor actually need to reverse?
What motor controller do we already have, and what functions does it include?
If we choose a different motor, would we need a different type of driver?

## How would the controller command it, and how could the team test its basic functions?
For a typical H-bridge driver, the robot controller sends signals that select the motor’s direction and use PWM to control its speed. PWM rapidly switches the drive on and off; changing the portion of time it is on changes the motor’s average drive. The exact pins or commands depend on the driver we choose. The team could test one function at a time: motor off, slow forward, faster forward, stop, slow reverse, and stop again. We should check the driver’s fault signals and current during testing if those readings are available.

Questions:
What signals does our chosen driver require: direction pins, an enable pin, PWM, or a communication command?
What should the motor do when the controller sends a zero-speed command?
How will we confirm that forward, reverse, and stop work correctly before a full robot test?
