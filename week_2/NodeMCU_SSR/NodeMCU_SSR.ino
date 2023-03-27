#define sw1   D0        // Declare variables
#define ssr1  D5

int st_sw1      = 0;
int st_1        = 0;
int last_st_sw1 = 0;    // Set current state

void setup()
{
  pinMode(ssr1, OUTPUT);
  pinMode(sw1,  INPUT);
}

void loop()
{
  // Read the input switch status
  st_sw1 = digitalRead(sw1); 
  if ((st_sw1 == 0) && (last_st_sw1 == 1))  // Check switch pressed
  {
    // Toggle state
    st_1 = ~st_1;
    // Activate Solid-state relay
    digitalWrite(ssr1, st_1);
    // Short delay
    delay(250);
  }
  // Keep the current status of switch
  last_st_sw1 = st_sw1;
}
