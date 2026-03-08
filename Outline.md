Project Outline - 
Arduino-Based Tachometer using Hall Effect Sensor

Goal: To design, construct, and implement a device which accurately measures the angular speed of a small internal combustion engine, in RPMs, and outputs it via an LCD screen.


Objectives:
 - The tachometer should be accurate to +/- 2% of the reading from a handheld laser tachometer.
 - The tachometer should easily attach to and detach from the engine.
 - The tachometer should remain stable against the vibrations of a running engine for an extended period of time.
 - The tachometer, when fully assembled, should take the form of a complete unit with an integrated LCD screen for output..


Challenges:
 - Attaching the complete tachometer to the engine in a way that is non-permanent yet suitable for sustained use.
 - Designing code that will accurately and consistently measure RPMs without severe fluctuations or delay.
 - Creating a small, compact circuit which can fit inside a small housing.
 - Avoiding noise from ignition coil and spark plug wire


Timeline:
 1. Design a functional circuit which can, to a reasonable degree of accuracy, read the RPMs of a drill with a known speed.
 2. After ensuring basic accuracy, test on engine to identify any major sources of error
 3. Modify the circuit to ensure compactness.
 4. Design and 3D print a housing for the circuit which will attach to the small engine.
 5. Test tachometer against handheld laser tachometer, identify sources of error, and make changes as needed.
 6. Once accuracy is established, test tachometer for long-term reliability, identify points of failure, and modify design.

Equipment Limitations:
 - The housing should be easily 3d printed, and should require minimal hardware to function.
 - An Arduino Uno R3 is to be used for all software functionality.
