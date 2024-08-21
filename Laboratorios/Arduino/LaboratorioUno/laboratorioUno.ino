// Constants to define LED pins
#define RED_LED 11
#define GREEN_LED 12
#define BLUE_LED 13

void setup()
{
    Serial.begin(9600);         // Initialize serial communication at 9600 baud
    pinMode(RED_LED, OUTPUT);   // Set RED_LED pin as output
    pinMode(GREEN_LED, OUTPUT); // Set GREEN_LED pin as output
    pinMode(BLUE_LED, OUTPUT);  // Set BLUE_LED pin as output
}

void loop()
{
    // Check if there is data available from the serial input
    if (Serial.available() > 0)
    {
        int option = Serial.read(); // Read the input option
        switch (option)
        {
        case '1':
            turnOnRed();    // Turn on the red LED
            turnOffGreen(); // Turn off the green LED
            turnOffBlue();  // Turn off the blue LED
            break;
        case '2':
            turnOffRed(); // Turn off the red LED
            break;
        case '3':
            turnOnGreen(); // Turn on the green LED
            turnOffRed();  // Turn off the Red LED
            turnOffBlue(); // Turn off the blue LED
            break;
        case '4':
            turnOffGreen(); // Turn off the green LED
            break;
        case '5':
            turnOnBlue();   // Turn on the blue LED
            turnOffRed();   // Turn off the red LED
            turnOffGreen(); // Turn off the green LED
            break;
        case '6':
            turnOffBlue(); // Turn off the blue LED
            break;
        case '7':
            turnOnAll(); // Turn on all LEDs
            break;
        case '8':
            turnOffAll(); // Turn off all LEDs
            break;
        case '9':
            blinkAll(); // Start blinking all LEDs
            break;
        }
    }
}

// Functions to control individual LEDs
void turnOnRed()
{
    digitalWrite(RED_LED, HIGH); // Turn on the red LED
}

void turnOffRed()
{
    digitalWrite(RED_LED, LOW); // Turn off the red LED
}

void turnOnGreen()
{
    digitalWrite(GREEN_LED, HIGH); // Turn on the green LED
}

void turnOffGreen()
{
    digitalWrite(GREEN_LED, LOW); // Turn off the green LED
}

void turnOnBlue()
{
    digitalWrite(BLUE_LED, HIGH); // Turn on the blue LED
}

void turnOffBlue()
{
    digitalWrite(BLUE_LED, LOW); // Turn off the blue LED
}

// Functions to control all LEDs
void turnOnAll()
{
    turnOnRed(); // Turn on all LEDs
    turnOnGreen();
    turnOnBlue();
}

void turnOffAll()
{
    turnOffRed(); // Turn off all LEDs
    turnOffGreen();
    turnOffBlue();
}

// Function to blink all LEDs
void blinkAll()
{
    while (true)
    {
        // Check for serial input to interrupt blinking
        if (Serial.available() > 0)
        {
            int option = Serial.read();

            // If input is not '9', execute corresponding action and stop blinking
            if (option != '9')
            {
                switch (option)
                {
                case '1':
                    turnOnRed();
                    turnOffBlue();
                    turnOffGreen();
                    break;
                case '2':
                    turnOffRed();
                    break;
                case '3':
                    turnOnGreen();
                    turnOffRed();
                    turnOffBlue();
                    break;
                case '4':
                    turnOffGreen();
                    break;
                case '5':
                    turnOnBlue();
                    turnOffRed();
                    turnOffGreen();
                    break;
                case '6':
                    turnOffBlue();
                    break;
                case '7':
                    turnOnAll();
                    break;
                case '8':
                    turnOffAll();
                    break;
                }
                break; // Exit the blinking loop
            }
        }
        // Blink all LEDs on and off with a 500ms delay
        turnOnAll();
        delay(500);
        turnOffAll();
        delay(500);
    }
}
