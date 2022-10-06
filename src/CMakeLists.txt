cmake_minimum_required(VERSION 3.22)

set (MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set(SOURCE
        main.cpp

        )
set(INCLUDE
        ${MY_DIRECTORY}/dog.h
        ${MY_DIRECTORY}/talent.h
        ${MY_DIRECTORY}/counting.h
        ${MY_DIRECTORY}/dancing.h
        ${MY_DIRECTORY}/swimming.h
        )


add_executable(superDog ${SOURCE} ${INCLUDE})
target_include_directories (superDog PUBLIC ${MY_DIRECTORY})