cmake_minimum_required(VERSION 3.16)
project(CPP_Exercices)

add_executable(main
./tp1/ex1/main.cpp
)

add_executable(main2
./tp1/ex2/main.cpp
./tp1/ex2/Person.cpp
)

add_executable(main3
./tp1/ex3/main.cpp
./tp1/ex3/utils.cpp
)

target_compile_features(main PUBLIC cxx_std_17)
target_compile_features(main2 PUBLIC cxx_std_17)
target_compile_features(main3 PUBLIC cxx_std_17)