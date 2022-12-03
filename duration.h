#pragma once

#include "durationBase.h"

class Seconds : public DurationBase<Seconds>{
  public:
  constexpr explicit Seconds(int seconds);
  static constexpr int Convert(int sec);
};

class Minutes : public DurationBase<Minutes>{
  public:
  constexpr explicit Minutes(int minutes);
  static constexpr int Convert(int sec);
};
