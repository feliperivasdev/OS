// Constants to define LED pins
#define RED_LED 11
#define GREEN_LED 12
#define BLUE_LED 13

// Variable to control blinking state
bool isBlinking = false;

void setup()
{
    Serial.begin(9600);         // Initialize serial communication at 9600 
    pinMode(RED_LED, OUTPUT);   // Set RED_LED pin as output
    pinMode(GREEN_LED, OUTPUT); // Set GREEN_LED pin as output
    pinMode(BLUE_LED, OUTPUT);  // Set BLUE_LED pin as output
    
    showMenu(); // Show menu when the program starts
}

void loop()
{
    serialInput(); // Check for serial input and execute corresponding actions

    // Only execute blinking if the flag is set
    if (isBlinking)
    {
        blinkAll();
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
    turnOnAll();
    delay(500);
    turnOffAll();
    delay(500);
}

// Function to handle serial input
void serialInput()
{
    if (Serial.available() > 0)
    {
        int option = Serial.read();

        // Stop blinking if input is not '9'
        if (isBlinking && option != '9')
        {
            isBlinking = false; // Stop blinking
        }

        // Execute corresponding action
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
        case '9':
            isBlinking = true; // Start blinking
            break;
        default:
            Serial.println("Invalid option. Please select a valid option.");
            break;
        }
        
        // Show menu again after processing the input
        showMenu();
    }
}

// Function to show the menu
void showMenu()
{
    Serial.println("LED Control Menu:");
    Serial.println("1: Turn on Red LED");
    Serial.println("2: Turn off Red LED");
    Serial.println("3: Turn on Green LED");
    Serial.println("4: Turn off Green LED");
    Serial.println("5: Turn on Blue LED");
    Serial.println("6: Turn off Blue LED");
    Serial.println("7: Turn on All LEDs");
    Serial.println("8: Turn off All LEDs");
    Serial.println("9: Start Blinking All LEDs");
    Serial.println("Please enter your choice:");
}
