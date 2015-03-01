// Copyright Benoit Blanchon 2014-2015
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#include "../include/ArduinoJson/JsonSanitizer.hpp"

#include <string.h>

void ArduinoJson::sanitizeJson(const char* input, char* output,
                               size_t outputSize) {
  strncpy(output, input, outputSize);
  output[outputSize - 1] = 0;
}
