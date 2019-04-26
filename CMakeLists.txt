cmake_minimum_required(VERSION 3.12)
project(leviathan)

set(CMAKE_CXX_STANDARD 17)

add_executable(leviathan src/main.cpp src/Config.cpp src/Config.h src/Owner.cpp src/Owner.h src/Moderator.cpp src/Moderator.h src/User.cpp src/User.h src/Enum.h src/ControlCenter.cpp src/ControlCenter.h src/Logger.cpp src/Logger.h src/Room.cpp src/Room.h src/cli-ser/Client.cpp src/cli-ser/Client.h src/cli-ser/Enums.h src/cli-ser/Server.cpp src/cli-ser/Server.cpp src/cli-ser/Server.cpp src/cli-ser/Server.h src/cli-ser/Texter.cpp src/cli-ser/Texter.h)