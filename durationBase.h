#pragma once

template<typename EXT>
class DurationBase {
  public:
   DurationBase(int sec)
    :sec_(sec)
  {
  }
  virtual ~DurationBase() {
  }

  constexpr operator int () const {
    return EXT::Convert(sec_);
  }
  private:
    int sec_;
};
