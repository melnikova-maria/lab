// Copyright 2021 Melnikova Maria dandelion.m@mail.ru
#include "json_storage.hpp"
#include <fstream>
#include <sstream>

//задаем путь до файла

json JsonStorage::get_storage() const {
  return _storage;
}

void JsonStorage::load(){
  try {
    std::ifstream f(_filename);
    f >> _storage;
  } catch (const std::exception& exception){
    std::cout << exception.what() << std::endl;
  }
}
