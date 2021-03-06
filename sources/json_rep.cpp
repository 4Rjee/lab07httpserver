// Copyright 2020 Kochurin Nikita kochurin.nikita@gmail.com


#include "json_rep.hpp"

#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>

json_rep::json_rep(const std::string& filename) : filename_(filename) {}// путь для файла
json json_rep::get_rep() const { return storage_; }
void json_rep::load() {
  try {
    std::ifstream in(filename_);//
    in >> storage_;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}
