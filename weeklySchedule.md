## New York University Abu Dhabi    
## Interactive Media Program    
## Course title: Machine Lab  
Course number: IM-UH 2113  
Section: 1    
Credit Hours: 4         
Prerequisites: None       

Shortcut to [today's lecture](lectureNotes.md/#todays-lecture)  
Shortcut to [today's assignment](weeklySchedule.md#todays-assignment)  

Course website: [https://github.com/michaelshiloh/MachineLab](https://github.com/michaelshiloh/MachineLab)      
Instructor: Michael Shiloh mshiloh@nyu.edu    
Office hours: By appointment  
Meeting times:    
	3:35 PM - 6:15 PM Monday  
	3:35 PM - 4:50 PM Wednesday  
Session: Spring 2023  
Class location: C3-029 (IM Lab)  
- [Lecture notes](lectureNotes.md)
- [Previous sessions](previousSessions/previousSessions.md)

**Everything here is subject to change**

### Week 1 January 25

#### Introduction

#### Assignment due Monday 30 January
- If you haven't already done so, join Discord
- If you don't already have one, create a Github account 
	- If you are new to Github read
		[this](https://github.com/michaelshiloh/resourcesForClasses#github-resources)
	- In that account, create a repository called "machineLab"
	- Post a link to your github repository (**not your account!**) in Discord
- Read
	- Read 
   [How to Design and Make Automata](https://github.com/michaelshiloh/resourcesForClasses/blob/master/doc/howToDesignAndMakeAutomata_RobertAdams.pdf)
   or
   [How To Design and Make Simple Automata](https://github.com/michaelshiloh/resourcesForClasses/blob/master/doc/howToDesignAndMakeSimpleAutomata_RobertAdams.pdf)
   (I think they are two versions of the same book. If you prefer video
   tutorials there are many online, Google for something like "linkages
   tutorials" (If you find any good ones let me know.)
	- Download and install the [Arduino
   IDE](https://www.arduino.cc/en/Main/Software) (not the web editor)
	- If you are new to Arduino read the following:
		- Arduino basics: Intro through Lesson 3 of Adafruit's Arduino
     [tutorial](http://www.ladyada.net/learn/arduino/index.html)
		- The first four tutorials from
     [here](https://github.com/michaelshiloh/resourcesForClasses#basic-arduino-resources-from-arduino)
	- Read [Motors and Selecting the Right
   One](https://learn.sparkfun.com/tutorials/motors-and-selecting-the-right-one)
	- Learn How to use the L298 Motor Driver using either
		[this](https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/), [this](https://www.etechnophiles.com/l298n-motor-driver-pin-diagram/), [this](http://www.handsontec.com/dataspecs/L298N%20Motor%20Driver.pdf), or find your own by searching using words like "l298 arduino Tutorial". If you find one you like, post it to our Discord channel.
	- Watch Tim Hunkin [Prototypes](https://www.timhunkin.com/a258_Prototypes.htm)
- Browse the [mechatronic
	resources](https://github.com/michaelshiloh/resourcesForClasses#mechatronic-resources)
	paying particular attention to artists, projects, devices, installations,
	machines, etc. The whole page is full of interesting resources.
- Do your own search for something related this class and post your most
	interesting find(s) on Discord

### Week 2 January 30, February 1

#### Topics: Cardboard, mechanisms, basic motors, wood shop training

#### Activity:
- build cardboard automata

Mechanics
- linkages
- pulleys
- bearings
- bracing
- alignment
- hardware
	- nuts and bolts
	- shaft couplers
	- cutting steel

#### Assignment due Monday 6 February

- Take some pictures while you are building
- Build a hand-crank mechanism with at least
	- One cam
	- One crank and slider mechanism
- Connect a motor to your mechanism
	- Document failure modes
	- Repair
	- It must run for 60 seconds without breaking
	- Document
		- A new Github folder named "6February"
		- README.md to include
			- A brief description of your experience
			- A few process pictures
			- A short video
			- discuss 2-3 things that went wrong and what you did to overcome them
- Install the [Arduino IDE](https://www.arduino.cc/en/software)

### Week 3 February 6, 8

#### Topics: Arduino, motors, motor shields, position sensing, power supplies

- Arduino review
- Motors
- Position sensing
- More mechanisms

#### Assignment due Monday 13 February

- **Closed toed shoes and no loose garments next week!** for wood shop training

#### Assignment due Wednesday 15 February
- Prepare a presentation on a mechanical machine:
	- Machine must have moving parts
	- Machine can be purely mechanical or electro-mechanical
	- Examples include lathe, mill, printing press, loom, engine, clock,
		sewing machine, [farm
		machinery](https://www.youtube.com/watch?v=ge8CBC3vVgs), automatic milking
		machine, VHS video tape recorders, bicycle derailleur, etc.
	- Research the mechanical mechanism of the machine. How does it do what it's
		supposed to do?
	- What is your favorite part of this machine? Why?
	- Identify 3-5 [simple
		machines](https://en.wikipedia.org/wiki/Simple_machine) in the machine
	- Pay particular attention to interesting, unusual, or inspiring features
		which you might incorporate into your final project
	- Create a new folder on Github called "machinePresentation". Create a
		README.md which then links to your presentation, whether it's also
		uploaded to your repo or elsewhere online.

##### todays-assignment
#### Assignment due Monday 20 February
- Lesson from those who researched how to use the sensors
	- Hall Effect sensor
	- Inductive Proximity sensor
- Inspired by the presentations of machines along with any other sources,
	sketch a very rough first draft of an imaginary mechanism for the clock.
	This is a very early idea and is expected to change, so don't worry about
	being committed to it. This is a thought exercise: How would you imagine
	your mechanism, and how would you make it move.
	Features it must have:
	- Three different levels of activity for the quarter, half, and full hour
	- Consider how you will achieve the motions you need
	- Consider the types of motors and sensors you might need
	- Consider any audio and visuals (LEDs) effects which will enhance the piece
	- Create a new folder on Github called "20February". In that folder create a
		README.md with a description of your very rough first draft along with
		your sketch, pictures, and any other relevant sources of inspiration or
		information

### Week 4 February 13, 15

#### Topics: time, sound, noise, Neopixels

- Real Time Clocks
- Relays
- MP3 Music Maker Shield

Electricity
- power
	- power supplies
	- distributing power in parallel
- common wires (5V, GND) to sensors
- noise 
	- what is it (RF coupling, load induced fluctuations)
		- perhaps demonstrate with a radio?
	- why it needs to be kept separate from signals
	- how

### Week 5 February 20, 22

#### Topics: Digital fabrication, electrical assembly considerations

Electrical assembly
- leave room for wires
- where to put power supplies
- using DIN rail and connectors
- planning the layout
- attention to detail

Digital fabrication
- 3d printer
- Laser cutter
- Fusion360 or other

#### Assignment due Monday 27 February

Working in teams of two, design and prototype a mechanism for the clock. It
should have three different modes:
- Minimal level of activity on the quarter hour
- Medium level of activity on the half hour
- Full activity on the hour

One week is short for this; I expect a rough prototype that might need
occasional human hand intervention

Your design should include sound but that does not need to be implemented yet

### Week 6 February 27, 29

#### Activity: Demonstrate and critique rough prototype

#### Assignment due March 6

Refine the rough prototype 
- Incorporate critique and feedback
- Make it operate reliably

### Week 7 March 6, 8

#### Assignment due March 27

Implement the rough prototype in the final form

### Spring break March 10 - 22

### Week 8 March 27, 29

#### Activity: Demonstrate and critique progress

#### Assignment due 3 April
- Incorporate critique and feedback
- Fix problems
- Test repeatedly
- Repair
- Document

### Week 9 April 3, 5
### Week 10 April 10, 12
### Week 11 April 17, 19
### Week 12 April 24, 26

#### Activity: Start assembling group projects into final class installation

#### Assignment 
- Test; repair, document, repeat

### Week 13 May 1, 3

#### Activity: Start assembling group projects into final class installation

#### Assignment 
- Test; repair, document, repeat

### Week 13 May 8, 10
