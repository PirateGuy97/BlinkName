int led1 = D6;

void setup() {
    pinMode(led1, OUTPUT);

}

void loop() {
    //Blinking first name "RYAN"
    //Long Blink: 1sec
    //Short Blink: 0.5sec
    //Next Letter: 2sec
    //New Loop: 5sec
    
    //R: .-.
    // .
    digitalWrite(led1, HIGH);
    
    delay(500);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // -
    digitalWrite(led1, HIGH);
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // .
    digitalWrite(led1, HIGH);
    
    delay(500);
    
    digitalWrite(led1, LOW);
    
    delay(2000);
    
    //Y: -.--
    // -
    digitalWrite(led1, HIGH);
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // .
    digitalWrite(led1, HIGH);
    
    delay(500);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // -
    digitalWrite(led1, HIGH);
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // -
    digitalWrite(led1, HIGH);
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(2000);
    
    //A: .-
    // .
    digitalWrite(led1, HIGH);
    
    delay(500);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // -
    digitalWrite(led1, HIGH);
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(2000);
    
    //N: -.
    // -
    digitalWrite(led1, HIGH);
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(500);
    
    // .
    digitalWrite(led1, HIGH);
    
    delay(500);
    
    digitalWrite(led1, LOW);
    
    delay(5000);

}