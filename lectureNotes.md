## New York University Abu Dhabi    
## Interactive Media Program    
## Course title: Machine Lab  
Course number: IM-UH 2113  
Section: 1    
Credit Hours: 4         
Prerequisites: None       

Shortcut to [today's lecture](lectureNotes.md/#todays-lecture)  
Shortcut to [today's assignment](homework.md#todays-assignment)  

Course website: [https://github.com/michaelshiloh/MachineLab](https://github.com/michaelshiloh/MachineLab)      
Instructor: Michael Shiloh mshiloh@nyu.edu    
Office hours: If you want to meet schedule an appointment [here](https://calendly.com/michaelshiloh/office_hours)

Meeting times:    
	2:10 PM - 3:25 PM Monday  
	2:10 PM - 4:50 PM Wednesday  
Session: Spring 2023  
Class location: C3-029 (IM Lab)  
- [Lecture notes](lectureNotes.md)
- [Previous sessions](previousSessions/previousSessions.md)

**Everything here is subject to change**


This document: Lecture Notes

## Week 1 

## Monday 22 January 2023
### Plan for today
- What is the class about
- Rules and Logistics
- Introduction to Arduino
- Homework

### What is this class about
- Machines: building them, using them
- Mechanics (statics and dynamics)
- Design
- Creativity
- History and critique of technology

Inspiring examples
- [Astronomical clock
	Prague](https://www.prague.eu/en/object/places/3129/astronomical-clock)
- [Clock with Dancing Figures, Spinet and Organ](https://www.youtube.com/watch?v=nlPHd1ezgL4), 1625
- [Männleinlaufen, Church of Our Lady, Nuremberg](https://www.youtube.com/watch?v=zgMsNExH2-c)
- [Elephant Automaton Clock, 1600–1625](https://www.luc.edu/luma/collections/martindarcysjcollection/elephantautomatonclock/ )
- [1001 Inventions](https://www.1001inventions.com/feature/top7clocks/)
- [Famous Mechanical Clocks in Europe](https://trendingtravel.org/famous-mechanical-clocks-in-europe/)
- [Anker Clock](https://www.wien.info/en/sightseeing/sights/from-a-to-z/anker-clock-339092)
- The Guinness Festival Clock series
	- ![](images/FestivalClock.jpg)
	- [The Guinness Clock in Battersea Park](https://vimeo.com/89823385)
	- [Description](https://www.guinntiques.com/festivalclock.aspx)
- Tim Hunkin
	- [Southwold
	waterclock](https://www.timhunkin.com/63_southwold_water_clock.htm)
	- [Exploratorium](https://www.exploratorium.edu/video/tim-hunkins-tinkerers-clock)
	- Tim's [other clocks](https://www.timhunkin.com/control/d_clocks_index.htm)
- Wikipedia entry on [Automaton Clocks](https://en.wikipedia.org/wiki/Automaton_clock)


### Class rules

This class is fast-paced, difficult, and time consuming. You will have to
learn many skills that are new to you, and you will spend many, many hours
working on your assignments.  You are all top students, otherwise you wouldn't
be at NYUAD. You have gotten here because of your excellent academic skills.
You are used to estimating how long an assignment or project will take based
on your past experiences.  Physical computing involves skills which are
probably new to most of you: mechanics and physical construction.  When the
assignments require skill with which you have little experience, your
time estimates can be very, **very**, *very* wrong.  

I can almost guarantee that you will spend much more time on this class than
you think. Don't take this class if you aren't prepared to work hard and
invest the necessary amount of time.

On the other hand, I am here for you. I want to see you succeed. I like seeing
your projects succeed. You will find me very accessible and helpful. I am
online at all hours and can often solve problem via Discord. I'm also very
available in person and spend much time outside of class in the IM lab or in
my office. You can approach me at any time, but *you* must take the initiative
and reach out to me, and you must not wait until the last minute. You must try
seriously to solve your problems, and if you can't solve them, you must reach
out to me while there is still time for me to help you.

In return I have expectations of you: I expect you to come to class on time
and to be fully present. I expect you to be fully engaged in the course, and to
fully participate in and contribute to class discussion. I expect you to work
hard, very hard, to try to solve problems on your own, and to ask me for help
when you run into trouble. 

I am deeply committed to teaching. I expect you to be fully engaged in this
class. If you are not interested in this material and are taking this class
strictly to fulfill a requirement, I urge you to drop this class and allow
someone who is interested take your place.

I do not tolerate the use of cellphones, earphones, watches, or laptops in
class for anything other than what we're actively working on.  If you need any
exceptions, talk to me.  

I strongly recommend that you take notes on paper.  In particular, when I help
you, I like being able to make notes on paper, so I require that each of you
will have a notebook on hand when you ask for my help.

I understand that there is more going on in your lives than this class.  If
there is stuff going on that is making it difficult to get your work done,
contact me and we'll work something out.  Email is appropriate for these
discussions.

One last thing: I don't want to get sick.  If you're feeling sick, please stay
at home.

#### Logistics

Each of you will write a paper and make a presentation related broadly to the
topic of this class.

This course requires training on different tools. Training is offered only at
certain times, and the training staff does not have the resources to offer
training at other times. You must attend the training sessions unless there
is some truly exceptional reason not to do so. 

You may require separate training for your particular project (e.g. sewing or
welding). You will be responsible for reaching out to the relevant shop to
arrange such training.

You are encouraged to use Discord to ask all questions related to class,
whether technical, logistic, or otherwise. Reserve email for personal matters.

#### Cleaning up

We will be building things. We will use lots of tools and materials. It is
your responsibility to clean up after yourselves, to return tools and
materials to their places, and to put trash and recycling in the appropriate
bins.

Some of the tools and materials are for the exclusive use of our class; others
are generic tools and materials used by other classes. You must return things
to their proper place.

In summary:

- *Always* clean up after yourselves, and always clean up a little more than
	whatever you left. Leave the space cleaner than you found it. Failure to do
	so will result in a lower grade.
- Return tools and unused materials to their proper places
- Discard trash and recycling in the proper bins
- Keep our tools and materials in our space
- If you see anyone outside of our class using our tools, materials, or space,
	please get their names and inform me.

### Homework

All homework will be given in the [homework](homework.md) file. It is your
responsibility to know what's due. I will send a message on Discord and
Brightspace whenever I make a change.

### Introduction to Arduino

- Upload the Blink example
- Change the parameter in delay()
- Upload again and verify that the LED blinks at the new rate

Discuss

- What's going on here?
- What role does Arduino play?
- LEDs and other actuators
- What is the opposite of an actuator?
- Reading from a sensor vs. writing to an actuator

## Wednesday 24 January 2023
### Admin
### Plan for today
- Last year's project
- Breadboard circuits
- Soldering 
- Theme

### Last year's project
- Visit
- Theme
- Inspect
    - Mechanisms
    - Construction Techniques
- Document
- Disassemble

#### Breadboard Circuits

The most confusing part of this lecture will be the solderless breadboard:
![](https://github.com/michaelshiloh/IntroductionToInteractiveMedia/blob/master/media/breadboard.jpg)
Image courtesy of
[SparkFun](https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard/all)

Let's extend our blinking LED to the breadboard:

![](https://github.com/michaelshiloh/IntroductionToInteractiveMedia/blob/master/media/ArduinoControllingLED_bb.png)

#### Review
- Code or program
- Circuit
- Input and Output (I/O) pins
	- 20 IO pins
	- All 20 pins can do digital input and digital output
	- Many of the pins have additional special functionality
- Built-in LED
	- On the Arduino Uno this LED is on pin 13
	- On the Arduino Uno LED_BUILTIN = 13 

#### Schematics
- Schematics are ways to capture the important features of a circuit
	without getting distracted by details (e.g. subway maps)
- What's important in an electrical circuit?
	- Where is the power coming from?
	- What other components are there in the circuit?
	- How are they connected?
- Schematic for the circuit we built above
- Schematic conventions
    - Positive voltage on top, ground at the bottom
    - Inputs on the left, outputs on the right
        - Information flows from left to right
    - Unused pins can be left off
- Schematics are an important way to show a circuit. You will be required to
  understand and use them

#### Analog Output

- Analog output uses the `analogWrite()` function
- The `analogWrite()` function only works on the six PWM pins (3, 5, 6, 9, 10,
  and 11).
- Usually only suitable for LEDs and motors

Your turn:
- How can we modify our circuit to test an analog output?
- How can we modify the `blink` program to test the `analogWrite()` function?

#### Analog Input

Build this circuit. Try to follow the schematic and not the breadboard view:

![](https://github.com/michaelshiloh/IntroductionToInteractiveMedia/blob/master/media/ArduinoPhotoresistor_schem.png)
![](https://github.com/michaelshiloh/IntroductionToInteractiveMedia/blob/master/media/ArduinoPhotoresistor_bb.png)

- Analog Inputs, `analogRead()`, and (some) sensors go together
	- `analogRead()` only works on the six analog input pins (A0-A5)
        - In contrast, `digitalRead()` works on all 20 pins
        - Digital sensors, like a switch, have only one of two values 
        and so are more suited to a digital input
- Remember that the so-called analog input pins can do digital input and
	output as well
- Since you have so few analog input pins, when you decide which pins to use
	for which device, reserve the analog input pins for analog input devices
	as much as possible

#### Programming

- `map()`
- `constrain()`
- `if()`
- Getting information from Arduino
    - `Serial.println()`
    - Must be initialized `Serial.begin()`

Example using an analog input to control the brightness of an LED

````
const int LED_PIN = 3;           // the PWM pin the LED is attached to
const int POT_PIN = A2;
int brightness = 0;    // how bright the LED is

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int pot_value = analogRead(POT_PIN); // 0-1023
  brightness = map(pot_value, 0, 1023, 255, 0);
  Serial.println(brightness);
  analogWrite(LED_PIN, brightness); // 0-255
}
````
#### Digital Input

Adding a switch

![](https://github.com/michaelshiloh/IntroductionToInteractiveMedia/blob/master/media/ArduinoLEDMomentarySwitch_schem.png)
![](https://github.com/michaelshiloh/IntroductionToInteractiveMedia/blob/master/media/ArduinoLEDMomentarySwitch_bb.png)

````
void setup() {
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {

  int switchPosition = digitalRead(A2);

  if (switchPosition == HIGH) {
    digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(13, LOW);
  } else  {
    digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(13, HIGH);
  }
}
````

An example:

````

const int pushButton = A2;
const int redLEDPin = A0;
const int greenLEDPin = 8;

void setup() {
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
}

void loop() {

  int buttonState = digitalRead(pushButton);

  if (buttonState == HIGH) {
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, HIGH);
    delay(500);
    digitalWrite(greenLEDPin, LOW);
    delay(300);
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, HIGH);
    delay(700);
  }
  allOff();
  delay(1000);
}

void allOff() {
  digitalWrite(redLEDPin, LOW);
  digitalWrite(greenLEDPin, LOW);
}
````

