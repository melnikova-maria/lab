// Copyright 2021 Melnikova Maria dandelion.m@mail.ru

#ifndef INCLUDE_SUGGESTION_HPP_
#define INCLUDE_SUGGESTION_HPP_

#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class suggestionsColl{
 private:
  json _suggestions;

 public:
  suggestionsColl();
  void update(json store);
  json suggest(const std::string& input);
};

auto example() -> void;

#endif // INCLUDE_SUGGESTION_HPP_
