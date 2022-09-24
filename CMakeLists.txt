cmake_minimum_required(VERSION 3.19)
project(Airbnb)

set(CMAKE_CXX_STANDARD 14)

add_executable(Airbnb Administracion.cpp Administracion.h Main.cpp Persona.cpp Persona.h Huesped.cpp Huesped.h Propietario.cpp Propietario.h Reserva.cpp Reserva.h Evaluacion.cpp Evaluacion.h Hogar.cpp Hogar.h)