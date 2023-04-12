cmake_minimum_required(VERSION 3.10)

project(vcstatus)
find_package(X11 REQUIRED)

file (GLOB SRC
    "*.cpp"
)

add_executable(vcstatus ${SRC})
target_link_libraries(vcstatus X11)
install(TARGETS vcstatus DESTINATION bin)