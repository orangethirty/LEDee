//note: using type byte to reduce to optimize for space. Arduino has limited
//memory and every little *bit* counts. :)


/*

- HAPPY         =  01
- SAD           =  02
- ANGRY         =  03
- DISAPPOINTED  =  04
- BORED         =  05
- EXCITED       =  06

*/


/*
Emotional state codes for LEDee.
Defining the behaviour for each state.

*/


byte happy()
{
    return 01;
}

byte sad()
{
    return 02;
}

byte angry()
{
    return 03;
}

byte disappobyteed()
{
    return 04;
}

byte bored()
{
    return 05;
}

byte excited()
{
    return 06;
}


/*
Desgining a simple manner to test and change between those emotions.

*/

byte emotional_state; // holds the code for the emotional state

byte get_emotional_state()
{
    return emotional state;
}

void set_emotion_state(byte state)
{
    emotional_state = state;
}
