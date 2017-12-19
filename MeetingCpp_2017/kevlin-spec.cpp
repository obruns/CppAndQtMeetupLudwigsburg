#include "is_leap_year.hpp"
#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>

template <typename ArgumentType, typename ResultType>
struct unary_test {
  std::string name;
  std::vector<ArgumentType> input;
  ResultType output;
};

template <typename UnaryFunction, typename Tests>
void run(UnaryFunction function, const Tests &spec) {
  for (auto[name, input, output] : spec) {
    std::cout << name << std::flush;
    auto separator = " failed:\n  ";
    for (auto value : input) {
      if (function(value) != output) {
        std::cout << separator << value;
        separator = " ";
      }
    }
    std::cout << "\n";
  }
}

using name = std::string;
using values = std::initializer_list<int>;
using result = bool;
using proposition = unary_test<int, bool>;
using specification = const proposition[];

int main() {
  // clang-format off
  specification leap_year_spec =
  {
    {
      "Years not divisible by 4 are not leap years",
      values{2017, 1999, 1998, 1}, result{false},
    },
    {
      "Years divisible by 4 but not by 100 are leap years",
      values{2016, 1984, 4}, result{true}
    },
    {
      "Years divisible by 100 but not by 400 are not leap years",
      values{2100, 1900, 1800, 100}, result{false}
    },
    {
     "Years divisible by 400 are leap years",
     values{2000, 1600, 400}, result{true}
    }
  };
  // clang-format on

  run(is_leap_year, leap_year_spec);
}
