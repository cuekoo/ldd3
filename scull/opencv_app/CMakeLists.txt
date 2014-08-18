find_package(OpenCV REQUIRED)
add_executable(write_img write_img)
target_link_libraries(write_img ${OpenCV_LIBS})
