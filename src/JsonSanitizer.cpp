// Copyright Benoit Blanchon 2014-2015
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#include "../include/ArduinoJson/JsonSanitizer.hpp"

void ArduinoJson::sanitizeJson(const char*, char* output, size_t)
{
  output[0] = 0;
}
