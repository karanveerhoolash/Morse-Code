
// SIT210 - Task 2.1P

//International Morse Code
//1. The length of a dot is one unit.
//2. A dash is three units.
//3. The space between parts of the same letter is one unit.
//4. The space between letters is three units.
//5. The space between words is seven units

// Name being used : YADAV

const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);


void setup()
{
	
	pinMode(MY_LED, OUTPUT);
}


void loop()
{
    
    // Letter Y
	digitalWrite(MY_LED, HIGH);
	delay(3s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(3s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(3s);

// -----------------
    digitalWrite(MY_LED, LOW);
    delay(3s) ;// between next letter
    
 //----------------
 
   // Letter A
 	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(3s);
	
	
// -----------------

    digitalWrite(MY_LED, LOW);
    delay(3s) ;// between next letter
    
 //----------------
 
    // Letter D
    
    digitalWrite(MY_LED, HIGH);
	delay(3s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	
	
	
// -----------------

    digitalWrite(MY_LED, LOW);
    delay(3s) ;// between next letter
    
 //----------------
 
 // Letter A
 	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(3s);


// -----------------

    digitalWrite(MY_LED, LOW);
    delay(3s) ;// between next letter
 //----------------
 
     // Letter V
    
    digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	
	
	digitalWrite(MY_LED, HIGH);
	delay(3s);
	
 // -----------------
     digitalWrite(MY_LED, LOW);
    delay(5s); // between next word ; 5 seconds
    
 //----------------
 

}