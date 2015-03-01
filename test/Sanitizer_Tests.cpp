// Copyright Benoit Blanchon 2014-2015
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#include <gtest/gtest.h>
#include <ArduinoJson.h>

TEST(SanitizerTests, EmptyString) {
  char output[16];
  sanitizeJson("", output, sizeof(output));

  ASSERT_STREQ("", output);
}

TEST(SanitizerTests, ValidJson) {
  const char* input = "{\"a\":[\"b\",1,2.3,true,false,{}]}";
  char output[64];

  sanitizeJson(input, output, sizeof(output));

  ASSERT_STREQ(input, output);
}

TEST(SanitizerTests, BufferTooSmall) {
  char output[2];

  sanitizeJson("[{}]", output, sizeof(output));

  ASSERT_STREQ("[", output);
}