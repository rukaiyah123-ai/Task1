int led1 = 12;
int led2 = 11;

unsigned long previousTime1 = 0;
unsigned long previousTime2 = 0;

int state1 = LOW;
int state2 = LOW;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    unsigned long currentTime = millis();

    // LED 1: Blink every 1 second
    if (currentTime - previousTime1 >= 1000) {
        previousTime1 = currentTime;
        state1 = !state1;
        digitalWrite(led1, state1);
    }

    // LED 2: Blink every 2 seconds
    if (currentTime - previousTime2 >= 2000) {
        previousTime2 = currentTime;
        state2 = !state2;
        digitalWrite(led2, state2);
    }
}
