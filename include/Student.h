// Copyright 2020 ivan <ikhonyak@gmail.com>
#ifndef INCLUDE_STUDENT_H_
#define INCLUDE_STUDENT_H_

#include <any>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

using nlohmann::json;

struct student_t {
  std::string name;
  std::any group;
  std::any avg;
  std::any debt;
};

void print(const student_t &student, std::ostream &os);
void print(const std::vector<student_t> &students, std::ostream &os);
std::vector<student_t> parse_file(const std::string &filepath);

#endif  // INCLUDE_STUDENT_H_
