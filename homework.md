Shortcut to [today's assignment](homework.md#todays-assignment)  
Shortcut to [today's lecture](lectureNotes.md#todays-lecture)  
Shortcut to [student presentations](studentPresentations)  
Shortcut to [student Github repositories](studentRepositories.md)  

#### New York University Abu Dhabi  
#### Interactive Media Program

* Course Information
    * Course Code and Number: IM-UH 2113  
    * Course Title: Machine Lab
    * Credit Hours: 4     
    * This is a 14 week course consisting of fourteen 75 minute meetings and
      fourteen 150 minute meetings
    * Instructional time requirements are met by the scheduled meeting times
    * Class location: C3-029 (IM Lab in the Art Center)
    * Prerequisites: IM-UH 1010 or INTM-SHU 101 Interaction Lab or IMNY-UT 101 Creative Computing or DM-UY 1133 Creative Coding
* This course counts toward the following NYUAD degree requirements:
    * Majors > Interactive Media
    * Majors > Interactive Media > Physical Computing 
    * Minors > Interactive Media
* Faculty Details
    * Professor: Michael Shiloh mshiloh@nyu.edu   
    * Office hours: Schedule an appointment [here](https://calendly.com/michaelshiloh/office_hours)
    * Office phone number: 02-628-5185

* Session: Spring 2026
* Meeting times:    
	- 8:30 - 11:10 Tuesday
	- 9:55 - 11:10 Thursday
* Instructional time requirements are met by the scheduled meeting times

Course website: [https://github.com/michaelshiloh/MachineLab](https://github.com/michaelshiloh/MachineLab)

* This is subject to change

## Homework due Thursday 22 January 2026

### Reading homework
If you missed the first class:
- Read the course syllabus
- Read today's lecture notes

Everyone:
Read or review as necessary:
- [Sparkfun breadboard tutorial](https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard/all)
- [Microcontrollers, the basics](https://itp.nyu.edu/physcomp/lessons/microcontrollers-the-basics/)
- [Digital Input &
  Output](https://itp.nyu.edu/physcomp/lessons/digital-input-output/)
- [Analog output](https://itp.nyu.edu/physcomp/lessons/analog-output/)
- [Analog Input](https://itp.nyu.edu/physcomp/lessons/analog-input/)
- Read or watch a tutorial of your own choosing on how to use a servo motor with Arduino

Everyone:
Read:
- Read at least one of of the [Blink Without Delay
  Resources](https://github.com/michaelshiloh/resourcesForClasses?tab=readme-ov-file#blink-without-delay-resources)
- Read the [Adafruit Multitasking
  Tutorial](https://learn.adafruit.com/multi-tasking-the-arduino-part-1?view=all)

### Fabrication homework

You will construct a simple crane structure, in which the horizontal arm 
can be rotated from side to side using a servo motor.

Since the IM lab is not staffed yet, you may not be able to access the lab,
and thus this part of the homework is not mandatory. However I would like you
to try to do it, if possible, so as to get some experience with how structures
and motors behave.

To access the required tools and materials, some options include:
1. If you are a capstone student, you should have access to the lab.
1. If you are not a capstone student, coordinate with a capstone student
   (using Discord!) to work on this assignment at the same time. 
1. Use your own tools and materials, if you have them
1. Coordinate with me (using Discord!) to get access to the lab or to use my
   tools and work near my office (C3-156)

Details:
- Using cardboard and hot glue, and whatever else you wish, construct a simple
  crane structure consisting of a vertical column and a horizontal arm. Do not
  attach the arm to the column yet.
- Attach a servo motor to the column so that it can rotate the arm
- Attach the arm to the servo motor so that the servo motor can rotate the arm
- Use the Arduino servo example *sweep* to sweep your crane's arm from side to
  side. You may need to modify the example e.g. to make it sweep slower, or to
  reduce the extent of the sweep, to avoid damaging your crane.

### Other homework

1. If you don't already have one, create a Github account. Instructions are 
[here](https://github.com/michaelshiloh/resourcesForClasses?tab=readme-ov-file#github-resources). 
I encourage you to name your account with your name to make it easier for me to 
tell who belongs to each account. 
1. In your Github account, create a repository called "MachineLab"
1. In your MachineLab repository, create a file called "journal"
1. You should have received an invitation to join the IM Discord server. If
   you have not received it, or if it doesn't work, let me know immediately
   via email. Do not wait until Thursday. If you tell me on Thursday in class
   that you were not able to join Discord that will count as not having
   completed the assignment.
1. In the class Discord channel, suggest at least one them for the class
   project
1. If you have a modern laptop with only USB-C ports, you will need a USB-C to
  USB-A adapter, something like this:
![](media/USBC-USBA_adapter.jpg). Bring this to every class meeting.


## Homework due Tuesday 27 January 2026

- Send me email with a link to your MachineLab repository on Github **and**
  your Discord screen name
- Read and watch my [Soldering
  Resources](https://github.com/michaelshiloh/resourcesForClasses?tab=readme-ov-file#soldering-resources)
- Practice soldering some wires and some header pins to a circuit board from
  the "practice" bin. Bring the board to class and show us your five best
  wires and five best pins.
- Read and watch my [Debugging
  Resources](https://github.com/michaelshiloh/resourcesForClasses?tab=readme-ov-file#debugging-resources)
- Read and watch my [Digital Multimeter (DMM)
  resources](https://github.com/michaelshiloh/resourcesForClasses?tab=readme-ov-file#digital-multimeter-dmm-resources)

## Homework due Thursday 29 January 2026

1. Build a circuit with one servo motor, one potentiometer, and one momentary
   switch (often called a pushbutton). Draw a schematic (hand drawn is fine)
   and upload a picture to your journal.
1. Load the example from the [Adafruit Multitasking
   Tutorial](https://learn.adafruit.com/multi-tasking-the-arduino-part-1?view=all)
   which uses the new class `Sweeper` to cause the servo motor to sweep
   without using the `delay()` function
1. Modify the code to read the switch, and make the servo motor stop sweeping
   when the button is not pressed.  
   Commit this code to your Github repo when you first start working on it.
   Once you get this working, commit the working code.
   Include a link to this code in your journal.
2. Modify the code further to use the reading from the potentiometer to
   control the speed of the servo sweeps.
   Commit this code to your Github repo, and provide a link in your journal
1. Describe in your journal any issues you had and how you approached the
   debugging. Describe the tools and method you used to help understand and solve any problems.


#### todays-assignment
## Homework due Tuesday 3 February 2026

1. Visit and inspect the project from two years ago. In your journal, document:
    - For each module, try to identify what's working and what isn't
    - Describe how you might start debugging each non-working issue
    - What is making it harder to debug? What would make it easier?
    - For some features, it might be hard to know whether it's malfunctioning
      or perhaps working as intended, but is not a good design. Document any
      of these which you identify.
1. Make an entry in your journal about your project. This is a very early,
   very rough draft, and is not a commitment to any of these. It is an
   opportunity to explore and be creative.
    - What game (or games) would you choose?
    - Create a mood board for your project, perhaps using images from the
      game, or other images
    - Sketch out some ideas for your project. What features might your project
      have? 
    - Do the best of your ability, sketch out details of how you might activate your project mechanically
1. Read [Circuit 5A: Motor
   Basics](https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41/circuit-5a-motor-basics) of the SparkFun Inventor's Kit Experiment Guide. 
   - When you get to the section called "Integrated Circuits (ICs) and
     Breakout Boards", pause and read the Wikipedia article on the
     [H-bridge](https://en.wikipedia.org/wiki/H-bridge), up to but not
     including the section
     titled "Primary coil driver of switching power converter"
    - Go back and finish the rest of [Circuit 5A: Motor
   Basics](https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41/circuit-5a-motor-basics)
    - Try to understand the logic of the H-bridge and how the code controls it
