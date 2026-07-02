add_executable(test_app test_main.cpp)

target_link_libraries(test_app)

add_test(NAME app_test COMMAND test_app)
