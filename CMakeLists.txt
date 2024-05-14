cmake_minimum_required(VERSION 3.28)
project(Products_Filter)

set(CMAKE_CXX_STANDARD 14)

include_directories(Filter)
include_directories(Product)
include_directories(Specifier)

add_executable(Products_Filter
        Filter/BetterFilter.h
        Filter/MyFilter.h
        Product/Product.h
        Product/ProductReporter.h
        Specifier/ColorSpecifier.h
        Specifier/LessWeightSpecifier.h
        Specifier/Specifier.h
        main.cpp)
