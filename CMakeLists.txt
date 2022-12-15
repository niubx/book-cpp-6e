cmake_minimum_required(VERSION 3.21)

project(book-cpp-6e C)

set(CMAKE_C_STANDARD 11)

add_executable(3.1_platinum chapter_03/example/3.1_platinum.c)
add_executable(3.2_print1 chapter_03/example/3.2_print1.c)
add_executable(3.3.1_bases chapter_03/example/3.3.1_bases.c)
add_executable(3.3.2_tooBig chapter_03/example/3.3.2_tooBig.c)
add_executable(3.4_print2 chapter_03/example/3.4_print2.c)
add_executable(3.5_charCode chapter_03/example/3.5_charCode.c)
add_executable(3.6_altNames chapter_03/example/3.6_altNames.c)
add_executable(3.7.1_showFloat_pt chapter_03/example/3.7.1_showFloat_pt.c)
add_executable(3.7.2_floatErr chapter_03/example/3.7.2_floatErr.c)
add_executable(3.8_typeSize chapter_03/example/3.8_typeSize.c)

add_executable(r_3.1 chapter_03/review/r_3.1.c)
add_executable(r_3.4 chapter_03/review/r_3.4.c)
add_executable(r_3.8 chapter_03/review/r_3.8.c)
add_executable(r_3.9 chapter_03/review/r_3.9.c)

add_executable(4.1_talkback.c chapter_04/example/4.1_talkback.c)
add_executable(4.2_praise1.c chapter_04/example/4.2_praise1.c)
add_executable(4.3_praise2.c chapter_04/example/4.3_praise2.c)
add_executable(4.4_pizza.c chapter_04/example/4.4_pizza.c)
add_executable(4.5_defines.c chapter_04/example/4.5_defines.c)
add_executable(4.6_printOut.c chapter_04/example/4.6_printOut.c)
add_executable(4.7_width.c chapter_04/example/4.7_width.c)
add_executable(4.8_floats.c chapter_04/example/4.8_floats.c)

add_executable(program_1.c chapter_04/program/program_1.c)

add_executable(test.c test/test.c)
