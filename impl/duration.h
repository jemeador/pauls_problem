#pragma once

#include "../duration.h"

constexpr Seconds::Seconds(int seconds)
  : DurationBase(seconds) {
}

constexpr int Seconds::Convert(int sec) {
  return sec;
}

constexpr Minutes::Minutes(int minutes)
  : DurationBase(minutes / 60) {
}

constexpr int Minutes::Convert(int sec) {
  return sec * 60;
}
