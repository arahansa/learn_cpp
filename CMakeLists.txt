cmake_minimum_required(VERSION 3.10)
project(firstcpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(firstcpp main.cpp main2.h main2.cpp template.cpp struct/01_struct.cpp struct/02_struct_ref.cpp struct/03_struct_change.cpp strings/01_string.cpp strings/02_string_insert.cpp strings/03_string_search.cpp classes/Student.cpp classes/Student.h classes/01_classes_constructorparameter.cpp classes/02_destructor.cpp inheritance/01_inheritance.cpp inheritance/InheritencePractical.cpp inheritance/03_constructor.cpp inheritance/04_derived.cpp inheritance/05_.cpp)