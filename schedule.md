## New York University Abu Dhabi
## Interactive Media
# Machine Lab
### Course Number: IM-UH 1112
### Fall 2017  

### Schedule
#### Monday 22 January 2018 9am - 10:15
- What this class is about
- Introductions
- Syllabus
- Examples
	- [Simple Cardboard Machines](https://vimeo.com/130539503)
	- [Drawing Machine](http://www.shihanzhang.com/drawing-machine/)
	- [Musical Instrument](https://vimeo.com/189366071)
	- [Chain Reaction](https://vimeo.com/102887278)
	- [Marble
		Machine 1](https://www.pinterest.cl/pin/481251910156036553/visual-search/?x=12&y=12&w=405&h=512)
	- [Marble Machine 2](https://www.youtube.com/watch?v=09BVLbyWAqQ)
	- [Marble Machine 3](https://www.youtube.com/watch?v=Bpdb8yQ9cH8&t=28s)
- [Basic Mechanisms](http://www.mechanical-toys.com/mechanisums.htm)
- Demo


#### Homework due Wednesday 24 January 
- **Update**
	- "Cabaret Mechanical Movements" is now available in the bookstore
	- Some bookstore staff members don't seem to know where our books are.
		If you are told they are not available ask for Jocelyn.
- **Read**
	- [Machinations-Mechanisms](https://github.com/michaelshiloh/resourcesForClasses/blob/master/doc/machinations-mechanisms.pdf)
	- [Basic Mechanisms](http://www.mechanical-toys.com/mechanisums.htm)
	- Both soldering tutorials
[here](https://github.com/michaelshiloh/resourcesForClasses#soldering)

- **Do**
	- Build a hand crank machine using a crank and any other mechanism (linkage,
	cam, etc. Your machine must operate smoothly without sticking or falling
	apart for at least 30 seconds. 
	- Create a GitHub account and create a repository for this class. 
	[Here](https://github.com/michaelshiloh/resourcesForClasses#github-resources)
	are some instructions
	- Label your shelf

- **Optional**
	- Browse [Mechatronics
 Resources](https://github.com/michaelshiloh/resourcesForClasses#mechatronic-resources)

#### Wednesday 24 January 9am - 11:40
- Lab orientation with Ume
- Review syllabus / schedule
- Soldering demo (twisting, touching, heat shrink tubing)
- Solder wires to motors demo (stranded, strain relief, solid tips)
- Test (Arduino, USB cable, 5V)
- Lab: Put wires on your motors and test them
- Activity: Mechanize your crank machines

#### Homework due Monday 29 January 
- **Update**
- **Read**
	- [Getting Started with Arduino / Genuino Uno
		tutorial](https://www.arduino.cc/en/Guide/ArduinoUno). There are many
		excellent resources on this so if you don't like this guide feel free to
		find another. Sparkfun and Adafruit have particularly good guides. You can
		also find many videos if you prefer that.
	- Sparkfun's [How to Use a
		Breadboard](https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard)
		tutorial. Again there are many other resources on line, feel free to find
		and read another if you prefer.
- **Do**
	- Motorize the mechanical device you made for today. Use your Arduino 
	to power the device by connecting one wire to 5V and the other wire to GND
	(either GND; they are all the same).
	Your machine must operate smoothly without sticking or falling
	apart for at least **one minute**. 
	- Email me the link to your GitHub repository 
	- Label your shelf
	- Do the [Getting Started with Arduino / Genuino Uno
		tutorial](https://www.arduino.cc/en/Guide/ArduinoUno). Your goal is to
		install the software, upload Blink which is the most simple example, and
		observe that everything works properly
	- In the Blink example look for the line that says 
	`delay(1000);`. 
	This is
		what controls the blink rate: The first
	`delay(1000);` controls the amount of time the LED is on, and the second
	controls the amount of time it's off. Change both of these to `100` and
	verify that the blink rate changes.


#### Monday 29 January 2018 9am - 10:15 (tentative)

**Announcements**
- Wear close toe shoes and no loose clothing for Scene shop training on
	Wednesday
- All homework is due on time, not just the fun stuff (late Github)
- Please be in class on time

**Lesson**
- Arduino 
	- Any questions about homework?
	- AnalogReadSerial example with potentiometer
	- Using `analogRead()` and conditionals to control LED

**Homework due Wednesday 31 January**  

- Make a rough sketch of the drawing machine you'd like to make.
	Interpret the meaning of the word "drawing" as broadly as you wish, 
	as long as it leaves a mark on a piece of paper. 
	It must use one or more motors.
	Do some research and pick something you like. Remember that something
	simple that works is worth more than something elaborate that doesn't.

- Dress properly for Scene Shop training on Wednesday:  
	- Required: Closed toe shoes   
	- Required: Something to tie back long hair  
	- Recommended: No loose clothing   
	- Recommended: Pants  
	- The Scene Shop has lab coats for students wearing abayas.   

#### Wednesday 31 January 9am - 11:40
- **Sign Up for the IM Student Email List**  
	Have a question?
	Looking for a place to share ideas?
	The IM student mailing list is a student-only group
	where you can ask for help, 
	post information about cool events
	and anything else you think would benefit your fellow makers
	Sign up by sending an email to **mk4908@nyu.edu**
- Scene Shop training  
- Share drawing machine concepts
- Soldering practice: pins to perf board
- Soldering pins to motor shield  
- Using motor shield with your DC gearmotor  
- Different types of motors  (DC, stepper, geared and ungeared)

### current-homework-assignment

**Homework due Monday February 5** 

**Announcements**

- If you want a free alternative to Adobe Illustrator, you can use Inkscape. 
	[Here](https://www.ponoko.com/blog/how-to-make/inkscape-vector-tutorials/)
	is a nice tutorial and there are many others on the web. You still have to
		watch the Illustrator tutorials so that you can follow along in class.

**Read or Watch**

- Sparkfun Motors and Selecting the Right One
	[tutorial](https://learn.sparkfun.com/tutorials/motors-and-selecting-the-right-one)
- Adafruit Motor Shield
	[tutorial](https://learn.adafruit.com/adafruit-motor-shield-v2-for-arduino/using-dc-motors?view=all)
- Don't forget that you have a lot of Lynda [tutorials to
	watch](https://github.com/michaelshiloh/MachineLab/blob/master/schedule.md#homework-due-wednesday-february-7) 
	for next week.
	Watch some now so you won't have so much to do later.

**Do**

- Design (Illustrator, Inkscape, or whatever CAD software you want) a
	rectangle that is roughly the size of Arduino that includes holes for
	attaching an Arduino.
	[Here](https://blog.adafruit.com/2011/02/28/arduino-hole-dimensions-drawing/)
	are the precise hole locations

#### Monday 5 February 2018 9am - 10:15 (Tentative)
- Share Arduino template
- Using motor shield with stepper motor  
- Working with Aluminum  
	- Fastening  
	- Mounting  
- Working with Acrylic  
	- Joining  
	- 3D shapes  

#### Homework due Wednesday February 7  
- Watch the following parts of the [Illustrator CC 2018 Essential
	Training](https://www.lynda.com/Illustrator-tutorials/Illustrator-CC-2018-Essential-Training/628695-2.html?srchtrk=index%3a4%0alinktypeid%3a2%0aq%3aillustrator%0apage%3a1%0as%3arelevance%0asa%3atrue%0aproducttypeid%3a2) tutorial at Lynda.com.  
	**Especially important is understand how to
	navigate Illustrator and how to measure and assign dimensions.**
	You may skim over other details.  
	- Getting Started (let's call this chapter 1)
		parts 1 (What is Adobe Illustrator)
		and 3  (Touring the Illustrator Interface)  
	- Navigating (chapter 2) parts 1 and 2  
	- Chapter 3 parts 1 and 3  
	- Chapter 4 parts 1 and 2  
	- Chapter 5 parts 1,2, and 3  
	- Chapter 6 parts 1 and 3  
	- Chapter 7 part 3  
	- Chapter 10 parts 1 and 2  
	- Chapter 11 parts 1 and 2  
- Try to create two simple rectangles that join together with a screw
	using
	[this](https://github.com/michaelshiloh/resourcesForClasses/blob/master/doc/laserCutTSlot.pdf)
	T-slot concept.  
	Make only one finger and size the holes for an M3 bolt (3mm in
	diameter).  
- Browse
		[these](https://github.com/michaelshiloh/resourcesForClasses/blob/master/doc/LaserCutBoxNotes.pdf) Laser Cut Box notes  


#### Wednesday 7 February 9am - 11:40
- Laser cutter training with Ume  

**Homework due Monday 12 February 2018 **  
	- Build version 1 of your drawing machine  

#### Monday 12 February 2018 9am - 10:15
- 9-10 am Illustrator and Shopbot training with Dustin  
- Share and feedback drawing machine version 1  

**Homework due Wednesday 14 February   
- Build version 2 drawing machine, incorporating feedback. 
	You might be able
	to modify version 1, but be open to building a new machine from scratch.    

#### Wednesday 14 February 9am - 11:40
- Share and feedback drawing machine version 2   
- Sensing rotation and position  
	- Hall Effect sensors  
	- Limit switches  
	- Current sensors  

**Homework due Monday 19 February   
- Build version 3 drawing machine, incorporating feedback. 
	You might be able
	to modify version 1, but be open to building a new machine from scratch.    

#### Monday 19 February 9am - 10:15
- Grand unveiling of exciting functional drawing machines
- Discussion: Sound making machines
**Homework due Wednesday 21 February   
- Research sound making machine concept

#### Wednesday 21 February 9am - 11:40
- Discussion: Sound making machines and devices    
- Solenoids, motors, and other devices as sound makers  
- Controlling solenoids with Transistors  

**Homework due Monday 26 February   
- Version 1 sound making device 

** Friday February 23 - Saturday February 24
is 24X, an event hosted by Interactive Media  

#### February 26 - March 7 
- Refine and develop sound making devices   
	- Solenoids, motors, bells   
	- sequencers  
	- PCB mill  

**March 12-19 - Spring break**  

#### March 21 - April 4 musical instruments  
- Create musical instrument using sound making devices and sequencers

#### April 9 - 30 - Rube Goldberg Rolling Ball machine  



### References

#### Websites
- [Creative Machine Lab at Columbia University](http://www.creativemachineslab.com/)
- [Rolling Ball Machine made of Bicycle Junk](https://www.youtube.com/watch?v=Bpdb8yQ9cH8)
- George Rhoads' [Ball Machines](http://georgerhoads.com/)
- Creative Architecture Machines [here](http://www.creative-architecture-machines.net/) and [here](http://www.future-cities-lab.net/blog/2013/11/3/creative-architecture-machines-cca-fall-2013)

#### Artists
- Harvey Moon's [Drawing Machines](https://creators.vice.com/en_au/article/nz4jj7/harvey-moons-drawing-machines)
- Jean Tinguely
- [Alan Rath](http://alanrath.org/)
- John Cage
- [Theo Jansen](http://www.strandbeest.com/)
