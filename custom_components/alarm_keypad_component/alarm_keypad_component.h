#pragma once

#include "esphome/core/component.h"
#include "esphome/components/ht16k33_alpha/ht16k33_display.h"

#define STATE_BOOTING 0
#define STATE_ALARM_STATUS_DISPLAY 1
#define STATE_TYPING 2

namespace esphome {
namespace alarm_keypad_component {



class AlarmKeypadComponent : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  uint8_t get_state();

  //ht16k33 displays
  void display1_lambdacall(ht16k33_alpha::HT16K33AlphaDisplay & it);
  void display2_lambdacall(ht16k33_alpha::HT16K33AlphaDisplay & it);

  //fastled leds
  //void keyboard_leds_lambdacall();
  //void rfid_leds_lambdacall();
  //void case_leds_lambdacall();

  void start_typing();
  void typing_timeout();
  void keypress();
  void network_connected();
  void network_disconnected();
};


}  // namespace empty_component
}  // namespace esphome