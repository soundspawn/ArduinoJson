// Copyright Benoit Blanchon 2014-2015
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#pragma once

#include <stddef.h> // for size_t

namespace ArduinoJson {

void sanitizeJson(const char* input, char* output, size_t outputSize);

}
