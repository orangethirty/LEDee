LEDee is a friend.
====================

*Start having fun right now and fork LEDee.*


###Why?

I work by myself most of the time. My child and I are allergic to common
house pets (cats && dogs). Wanted to have some sort of companion during those
long daily coding session.

Also, one of my co-founders @Nuuton is a robotics whiz. Some weeks ago she
was awarded in a big competition for her awesome hacking skills. I've been 
dying to build another robot since then. 
This one is for you saviourofthelostcode.

###What is LEDee?

LEDee is a robotic friend. Right now, all it can do is blink an LED.
In future versions, he will be equipped with all (a lot!) of the sensors
I've managed to collect along the years of building robots and hacking hardware.


###Pictures will be uploaded soon.
Right now its just an arduino (sorry LEDee, you are more than an ardunio to me)
with an LED. Next week it should have more sensors on it. Will include
pictrues with that update.



###Build your own LEDee!

I plan to add an ethernet shield to LEDee. This will allow it to 
connect to the web. You will be able to see how LEDee is doing
by visiting its (not yet built) page. You will also be
able to build your own LEDee and talk with mine 
if you add an ethernet shield to yours. 
Just make sure you don't use the same name of my LEDee, because
it could cause future potential problems. 
This functionality is planned, but not yet developed. 

If you build a LEDee, email me (orangethirty@nuuton.com) and tell me about it.
I'd be happy to talk hacking with you.


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


###Am I crazy?

Let's flip a coin. In all seriousness, this is a real project. LEDee has a 
bunch of awesome uses. It helps me debug code by rubber ducking.
Keeps me awesome silent company while in the office.
Makes sure I eat lunch, 
because the red led allows me to (sort of) keep track of time.

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

LEDee code is licensed under the GNU WTFPL.
2012 orangethirty@nuuton.com
