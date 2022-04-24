// Copyright 2021 Melnikova Maria dandelion.m@mail.ru

#include <stdexcept>
#include <suggestion.hpp>

suggestionsColl::suggestionsColl() { _suggestions = {}; }

//Сортируем коллекцию по полю cost в порядке убывания
void suggestionsColl::update(json storage) {
  std::sort(storage.begin(), storage.end(),
            [](const json& a, const json& b) -> bool {
              return a.at("cost") < b.at("cost");
            });
  //Объект с отсортированной коллекцией
  _suggestions = storage;
}

//Формируем окончательный ответ с предложениями (поля text и position)
json suggestionsColl::suggest(const std::string& input) {
  json res;
  for (size_t i = 0, m = 0; i < _suggestions.size(); ++i) {
    if (input == _suggestions[i].at("id")) {
      //формируем одно предложение
      json one_sug;
      one_sug["text"] = _suggestions[i].at("name");
      one_sug["position"] = m++;
      //кладём в объект-ответ предложение
      res["suggestions"].push_back(one_sug);
    }
  }
  return res;
}

auto example() -> void {
  throw std::runtime_error("not implemented");
}
