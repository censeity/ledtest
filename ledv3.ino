#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  for(int i=0;i<NUM_LEDS;i++){
    leds[i] = CRGB::Yellow;
    leds[(NUM_LEDS-i)] = CRGB::Blue;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Black;
    leds[(NUM_LEDS-i)] = CRGB::White;
  for(int i=NUM_LEDS; i>0;i--){
    leds[i] = CRGB::Green;
    leds[(NUM_LEDS-i)] = CRGB::Orange;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Yellow;
    leds[(NUM_LEDS-i)] = CRGB::Purple;
    }
  } 
  //make blue up to LED#22 with the leading one being White.
for (int i = 22; i<NUM_LEDS;i+= 22){
  for(int i=0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Blue;
    }
  }
  for(int i=0;i<NUM_LEDS;i++){
    leds[NUM_LEDS-i] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[NUM_LEDS-i] = CRGB::Pink;
  }
}
