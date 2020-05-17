int led = D6;

void buddyFunction(const char *event, const char *data);

void setup()
{
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", buddyFunction);

    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
}

void buddyFunction(const char *event, const char *data)
{
    if (strcmp(data, "wave") == 0)
    {
// flash LEDs 3 times
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    }

    else if (strcmp(data, "pat") == 0)
    {

    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);

    }

}

void loop()
{

}