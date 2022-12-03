#include <iostream>

#include "duration.h"

int main () {
  auto m = Minutes(2);
  auto s = Seconds(15);

  std::cout << int(m) << ":" << int(s) << std::endl;
}
