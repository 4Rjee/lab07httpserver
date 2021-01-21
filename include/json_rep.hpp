// Copyright 2020 Kochurin Nikita kochurin.nikita@gmail.com


#ifndef INCLUDE_JSON_STORAGE_HPP_
#define INCLUDE_JSON_STORAGE_HPP_

#include <nlohmann/json.hpp>
#include <string>
using json = nlohmann::json;

class json_rep {
 public:
  explicit json_rep(const std::string& filename);
  json get_rep() const;
  void load();

 private:
  std::string filename_;
  json storage_;
};

#endif  // INCLUDE_JSON_STORAGE_HPP_
