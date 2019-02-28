#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11
#define FORWARD 1
#define BACKWARD 0
#define FAST 5
#define MEDIUM 50
#define SLOW 250

CRGB leds[NUM_LEDS];

void setup() {
    delay(2000); 
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  //make blue up to LED#22 with the leading one being White.
  for(int i = 0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Black;
int n = 22;
  for(int i = 0; i < NUM_LEDS; n+=n){
    leds[i] = CRGB::White;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Blue;
      continue;
  }
    leds[NUM_LEDS] = CRGB::White; 
    FastLED.show(); 
    delay(50); 
    leds[NUM_LEDS] = CRGB::Black; 
    FastLED.show(); 
    delay(50);
    leds[NUM_LEDS] = CRGB::Red; 
    FastLED.show(); 
    delay(50); 
    leds[NUM_LEDS] = CRGB::Black; 
    FastLED.show(); 
    delay(50);
    leds[NUM_LEDS] = CRGB::Green; 
    FastLED.show(); 
    delay(50); 
    leds[NUM_LEDS] = CRGB::Black; 
    FastLED.show(); 
    delay(50);
    leds[NUM_LEDS] = CRGB::Blue; 
    FastLED.show(); 
    delay(50); 
    leds[NUM_LEDS] = CRGB::Black; 
    FastLED.show(); 
    delay(50);
    leds[NUM_LEDS] = CRGB::White; 
    FastLED.show(); 
    delay(1500); 
    leds[NUM_LEDS] = CRGB::Black; 
    FastLED.show(); 
    delay(1000);
      continue;
  }
 void loop();
      leds[0] = CRGB::Red; 
        FastLED.show(); 
        delay(50); 
  leds[0] = CRGB::Red;
  leds[15] = CRGB::Red;
  leds[30] = CRGB::Red;
  leds[45] = CRGB::Red;
  leds[60] = CRGB::Red;
  leds[75] = CRGB::Red;
  leds[90] = CRGB::Red;
  leds[105] = CRGB::Red;
  leds[120] = CRGB::Red;
  leds[134] = CRGB::Red;
      FastLED.show();
      delay(1000);
  leds[10] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[55] = CRGB::Blue;
  leds[70] = CRGB::Blue;
  leds[85] = CRGB::Blue;
  leds[100] = CRGB::Blue;
  leds[115] = CRGB::Blue;
  leds[130] = CRGB::Blue;
      FastLED.show();
      delay(1000);
        for(int dot = 0; dot < NUM_LEDS; dot++) { 
            leds[dot] = CRGB::Yellow;
            FastLED.show();
            leds[dot] = CRGB::Green;
            delay(30);
         continue;
}
 void loop();
    for (int n = 22; n<NUM_LEDS;n+= 22){
  for(int i=0; i < n; i++){
    leds[i] = CRGB::Yellow;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Blue;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::White;
    FastLED.show();
    delay(30);
    leds[n-i] = CRGB::Black;
  }
}
}

