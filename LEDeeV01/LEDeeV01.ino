// LEDee friend code.
// Released under the GNU WTFPL.
// orangethirty@nuuton.com

//Note: Keep posted. I will add in more functionality to LEDee. 
//Maybe he will be able to write code for me in the future?
//Note: Code changed to conform to LEDee Communication Protocol on 2/12/2012 - orangethirty

//declare the pins.
int state = 12;      //awake or asleep

int randNum;         //to make sleep/up patterns random. Like me :)

//setup

void setup()
{
        
  pinMode(state, OUTPUT);       //this is so hard to write without
                                //feeling guilty.
}

void loop()
{
  
  
    randNum = random(1000);
   
    if(randNum < 100) 
      {
        //wake up LEDee!
        for( int i = 0; i <= randNum; i++)
        {
          up();
        }
      } 
    
    else
      { //LEDee loves to sleep. 
        for( int i = 0; i <= 10; i++)  //can't let LEDee sleep that much. He needs to help me code!
        {
          sleep();
        }
      }
   
}


int sleep()  
{
     digitalWrite(state, HIGH);
     delay(1000);
     digitalWrite(state,LOW);
     delay(3000);
     return 0;
}


int up()
{
     digitalWrite(state, HIGH);
     delay(200);
     digitalWrite(state,LOW);
     delay(200);
     return 1;
}
