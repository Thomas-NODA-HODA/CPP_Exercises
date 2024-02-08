cmake_minimum_required(VERSION 3.16)
project(CPP_Exercices)

add_executable(main
  ./tp1/ex1/main.cpp
)

target_compile_features(main PUBLIC cxx_std_17)