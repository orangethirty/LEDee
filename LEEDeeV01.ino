//LEDee friend code.
// Released under the GNU WTFPL.
// orangethirty@nuuton.com

//Note: Keep posted. I will add in more functionality to LEDee. 
//Maybe he will be able to write code for me in the future?


//declare the pins.


int alive = 12;      //...did I forget to feed it? Is it alive? 

int randNum;         //to make sleep/up patterns random. Like me :)





//setup

void setup()
{
        
  pinMode(alive, OUTPUT);       //this is so hard to write without
 
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


void sleep()  
{
     digitalWrite(alive, HIGH);
     delay(1000);
     digitalWrite(alive,LOW);
     delay(3000);
}


void up()
{
     digitalWrite(alive, HIGH);
     delay(200);
     digitalWrite(alive,LOW);
     delay(200);
}
