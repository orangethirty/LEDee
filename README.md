LEDee is a friend.
====================

*Start having fun right now and fork LEDee.*




###What is LEDee?

LEDee is a robotic friend. It is a experiement in what I call the MVR 
(Minimum Viable Robot). An MVR is a robot that can be built with 
the least amount of functionality, but can still operate like
a full automated robot. The focus is mostly to develop the 
emotional side of robotic A.I.


###Build your own LEDee!


If you build a LEDee, email me (orangethirty@nuuton.com) and tell me about it.
I'd be happy to talk hacking with you.

You need to name your LEDee, and the name must be unique. Mine is named Chunky.

*This is important, because in the close future each LEDee will have an unique
identifier that will allow them to communicate over the internet and have
their own personality.*


###Why?

I work by myself most of the time. My child and I are allergic to common
house pets (cats && dogs). Wanted to have some sort of companion during those
long daily coding session.

Also, one of my co-founders @Nuuton is a robotics whiz. Some weeks ago she
was awarded in a big competition for her awesome hacking skills. I've been 
dying to build another robot since then. 
This one is for you saviourofthelostcode.


###Pictures will be uploaded soon.
Right now its just an arduino (sorry LEDee, you are more than an ardunio to me)
with an LED. Next week it should have more sensors on it. Will include
pictures with that update.




###How does LEDee work?

Current version (V0.1) uses one red LED.
It has two modes of operation. It is either *up* or *sleeping*.
The main loop generates a random number.
If the random number falls whithin a given scope, 
then a conditional decides if LEDee should be up or sleeping.

Each operation is different.

The *up* operation makes the led blink fast for a random amount of time.
The random amount of time is the same number used to decide if LEDee should
sleep or get up.

The *sleep* operation has a set maximum amount of time. We don't want LEDee to
sleep too much and miss the fun.

Both operation operate whithin a LOOP to control the time they run.


###LEDee has a lot of different uses.

It helps debug code by rubber ducking.
Keeps awesome silent company while hacking.
Makes sure you eat lunch,
because the red led allows you to (sort of) keep track of time.

###Hardware

Arduino duemilanove328 (any arduino will work)
Adafruit Protoshield (not really needed but nice to have) or a breadboard.
One LED (5mm).
The Arduino runtime (I used V1.0.1).
One USB cable.
Some jumper wires.


###About my LEdDee

My LEDee is called chunky.
Sports a fancy 5mm red LED.
Loves to hang out next my Lenovo (it looks up to it).
:)


####License

LEDee code is licensed under the WTFPL.
Copyright 2012 orangethirty@nuuton.com
