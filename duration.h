#pragma once

#include "durationBase.h"

class Seconds : public DurationBase<Seconds>{
  public:
  constexpr explicit Seconds(int seconds)
    : DurationBase(seconds) {
  }

  static constexpr int Convert(int sec) {
    return sec;
  }
};

class Minutes : public DurationBase<Minutes>{
  public:
  constexpr Minutes(int minutes)
    : DurationBase(minutes * 60) {
  }

  static constexpr int Convert(int sec) {
    return sec / 60;
  }
};

