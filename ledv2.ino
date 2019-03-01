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
    leds[(NUM_LEDS-i)] = CRGB::Black;
  for(int i=NUM_LEDS; i>-1;i--){
    leds[i] = CRGB::Green;
    leds[(NUM_LEDS-i)] = CRGB::Orange;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Black;
    leds[(NUM_LEDS-i)] = CRGB::Black;
  }
  void loop() {
  //make blue up to LED#22 with the leading one being White.
for (int n = 22; n<NUM_LEDS;n+= 22){
  for(int i=0; i < n; i++){
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[i] = CRGB::Blue;
  }
  for(int i=0;i<n;i++){
    leds[n-i] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[n-i] = CRGB::Black;
  }
}

}
