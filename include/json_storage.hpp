// Copyright 2021 Melnikova Maria dandelion.m@mail.ru
#ifndef INCLUDE_JSON_STORAGE_HPP_
#define INCLUDE_JSON_STORAGE_HPP_
#include "nlohmann/json.hpp"
#include <iostream>
#include <string>

using json = nlohmann::json;

class JsonStorage{
 private:
  json _storage;
  std::string _filename;

 public:
  explicit JsonStorage(const std::string filename) : _filename(filename) {}
  [[nodiscard]]json get_storage() const;
  void load();
};

#endif // INCLUDE_JSON_STORAGE_HPP_
