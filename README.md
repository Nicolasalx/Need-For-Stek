# By now you’ve understood that it’s now your turn to create your own autonomous car.

It must be capable of driving on a track without hitting the walls or driving in the wrong direction.
In order to help you with this task, several tools are avaible:

• CoppeliaSim is a simulator created by Coppelia Robotics. It enables the creation and control of robots.
For this project, we have built a virtual track and car that you will use to implement for AI. You will find,
further on in this document, how to install/use this software on your machine,

• an API (binary name: n4s). It is a communication interface that offers an array of actions that you can
use (start a simulation, set the car motor’s speed, wheel angle,. .. ). You can also use it alone in order
to test the communication protocol on the command line. This communication protocol is defined
further on,

• a shell script (binary name: pipes.sh) that enables you to connect your program to the API and launch
simulations.

It’s a binary that you will run in order to test your AI. Its utilization is also presented further
on.

What is IA ?

Artificial intelligence (AI) is a branch of computer science that focuses on developing machines and software programs that can perform tasks that typically require human intelligence, such as visual perception,
speech recognition, decision-making, and language translation.
AI involves the use of algorithms,
statistical models,
and computer systems that are designed to learn from and make decisions based on data.
The goal of AI is to create machines that can reason, learn, and adapt to new situations,
ultimately making them capable of completing complex tasks that were previously only possible for humans.

INSTALLATION
Download CoppeliaSim Edu V4.3.0 (the assets provided for the project function solely with Linux and Mac).
In order to launch CoppeliaSim, you need to execute the onboard script:

∼/B-AIA-200> ./coppeliaSim.sh
SCENE
Download and then unzip the latest version of the B-CPE-201_Need4stek_package.tgz from the intranet (file
provided with the project description).
Miscellaneous “.ttt” files are located in the “scene” file. These are the files that CoppeliaSim uses in order to
save the scene simulations.
As far as we’re concerned, they contain the track and the car to be driven.
Before beginning your simulations, you must systematically open the track_1.ttt scene (or every other scene
that you have made yourself) that is located in the CoppeliaSim (drag ’n drop or via the “File > Open scene.. .”
menu).
Make sure, when starting the CoppeliaSim, that the selected physics engine is the ODE.
The car will perform best in this mode. Menu: Simulation -> Using the ODE physics engine

EXAMPLE
Here’s an example of the n4s binary usage in standalone, in order to test the API:

∼/B-AIA-200> ./n4s
start_simulation
2:OK:Simulation running:No further info
stop_simulation
10:OK:Simulation was correctly ended:No further info
Last state registered: 10:OK:Simulation was correctly ended

FAQ
What is the viewing angle?

60 degrees, first-person viewpoint

What is the LIDAR unit of measurement?
Millimeters.

What are the car’s dimensions?
The car’s dimensions are not exactly known and can vary from one model to another (and very certainly
between the virtual model and the real car).
Try to have an AI that’s intelligent enough to function without
this information.

There are very simple ways to do it.
How much does the car weigh and what is its maximum speed?

As with the previous question, this is information that you don’t necessarily need. What’s more, you just
need to take measurements when the car starts up in order to deduce its speed.

How many drive-wheels does it have and at what angle is the car able to turn?
Ditto.

Why don’t the values returned by the LIDAR exceed 3010?

A real LIDAR uses a limited-reach laser. In order for the simulator to be as close to a real environment as
possible, we have curbed the measured distances to this limit. In other words, when an obstacle is “detected” at a distance of 3010, it means that this obstacle is more than 10 feet from the car.

What do the two values in the type 4 response correspond to?

They give, in seconds and nanoseconds, the time that has passed since START_SIMULATION.

What is the evaluation really looking for?

An AI that is able to do laps, rather quickly, on the track (to give you a hint, tell yourself that a lap done in
5 minutes on a small track is much too slow).

We’re also looking to see that your AI will stop driving and
terminate the simulation in a dead-end. In this case, it must stop at least three feet from the wall, without
touching it, before terminating the simulation.
