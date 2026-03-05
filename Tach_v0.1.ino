#include <LiquidCrystal.h>

volatile double recentMillis; //Time of most recent revolution
volatile double previousMillis; //Time of previous most recent revolution


double secPerRev;
int rpm;

double lastRefreshMillis; //Used to maintain LCD refresh rate of 10 Hz

LiquidCrystal display(8, 9, 10, 11, 12, 13);

void setup() 
{
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), revolution, RISING);

  //Initialize display to be used as a live data stream for RPMs
  display.begin(16, 1);
  display.print("RPM: ");
  display.noBlink();
  display.noCursor();

  lastRefreshMillis = 0;
}

void loop() 
{
  //Calculate RPM
  secPerRev = (recentMillis - previousMillis)/1000.0;
  rpm = (1/secPerRev)*60;

  if(millis() - lastRefreshMillis >= 100) //Prevent premature updating of LCD display
  {
    display.setCursor(5, 0);
    display.print((int)rpm);

    //Clear any leftover characters
    //5 spaces are used to ensure no artifacts with a difference of 5 OOMs, whilst 
    //avoiding any wraparound errors with an integer up to 6 digits in length
    for(int i = 0; i < 5; i++)
    {
      display.print(" ");
    }

    lastRefreshMillis = millis(); //Reset timer for next update
  }
}


//Interrupt used to determine seconds per revolution
void revolution()
{
  previousMillis = recentMillis;
  recentMillis = millis();
}
