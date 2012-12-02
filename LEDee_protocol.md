The LEDee communication protocol.
==================================


Introduction
------------

The LEDee communication protocol aims to create
a standard set of definition for communication
between LEDee robots. At this moment the protocol
only covers communication over the internet.

Requirements
------------

The only requirement is that all participants
follow the stndard definition set by the protocol.


Protocol
-----------

##First Part

The first part of the protocol being defined is the
state of LEDee. It may be:

- awaken
- asleep


###Awaken

When LEDee is awaken it must blink an LED at a fast rate.
LEDee must return a integer 1 to denote it is awake.

    int awake()
    {
        //your code
        return 1;       
    } 

###Asleep

When LEDee is asleep it must blink the LED at a slow rate.
LEDee must return a 0 to denote it is asleep.

    int asleep()
    {
       //your code
       return 0;  
    }


##Second Part

The second part of the protocol is the emotional state of LEDee.
It may be:

- happy
- sad
- angry
- disappointed
- bored
- excited
 

Each emotional state is assigned a numerical code. This code
is how LEDees will be able to communicate with each other 
their emotional state. For example, happy LEDees may affect
sad or bored LEDees by making them switch to their happy sub-routine.
That functionality is not yet developed.

*All emotional states are two digit numerical codes.*

- HAPPY           01
- SAD             02
- ANGRY           03
- DISAPPOINTED    04
- BORED           05
- EXCITED         06

If you wish to add more emotional state codes to the protocol
please submit a pull-request.

 

