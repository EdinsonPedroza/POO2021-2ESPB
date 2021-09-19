cmake_minimum_required(VERSION 3.20)
project(EjercicioApuntadoresHerencia)

set(CMAKE_CXX_STANDARD 14)

add_executable(EjercicioApuntadoresHerencia main.cpp Persona.cpp Persona.h Estudiante.cpp Estudiante.h Colaborador.cpp Colaborador.h Universidad.cpp Universidad.h)
