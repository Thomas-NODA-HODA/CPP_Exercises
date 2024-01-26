cmake_minimum_required(VERSION 3.16)
project(CPP_Exercices)

add_executable(main
  tp2/Card.cpp
  tp2/Card.hpp
  tp2/Player.cpp
  tp2/Player.hpp
  tp2/main.cpp
)

target_compile_features(main PUBLIC cxx_std_17)