cmake_minimum_required(VERSION 3.16)
project(CPP_Exercices)

add_executable(main
  tp2/Card/Card.cpp
  tp2/Card/Card.hpp
  tp2/Card/main.cpp
)

target_compile_features(main PUBLIC cxx_std_17)