// Copyright Benoit Blanchon 2014-2015
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#include <gtest/gtest.h>
#include <ArduinoJson.h>

TEST(SanitizerTests, EmptyString)
{
	char result[16];
	sanitizeJson("", result, sizeof(result));

	ASSERT_STREQ("", result);
}