# NOTE: This file is generated by yotta: changes will be overwritten!

include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test")


# add include path definitions needed only for tests (from testDependencies):




# define the tests themselves:

add_executable(mbed-drivers-test-c_strings EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/c_strings/main.cpp"
)
target_link_libraries(mbed-drivers-test-c_strings
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-c_strings)
add_test(mbed-drivers-test-c_strings mbed-drivers-test-c_strings)
add_dependencies(all_tests mbed-drivers-test-c_strings)

add_executable(mbed-drivers-test-dev_null EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/dev_null/main.cpp"
)
target_link_libraries(mbed-drivers-test-dev_null
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-dev_null)
add_test(mbed-drivers-test-dev_null mbed-drivers-test-dev_null)
add_dependencies(all_tests mbed-drivers-test-dev_null)

add_executable(mbed-drivers-test-echo EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/echo/main.cpp"
)
target_link_libraries(mbed-drivers-test-echo
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-echo)
add_test(mbed-drivers-test-echo mbed-drivers-test-echo)
add_dependencies(all_tests mbed-drivers-test-echo)

add_executable(mbed-drivers-test-generic_tests EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/generic_tests/main.cpp"
)
target_link_libraries(mbed-drivers-test-generic_tests
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-generic_tests)
add_test(mbed-drivers-test-generic_tests mbed-drivers-test-generic_tests)
add_dependencies(all_tests mbed-drivers-test-generic_tests)

add_executable(mbed-drivers-test-rtc EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/rtc/main.cpp"
)
target_link_libraries(mbed-drivers-test-rtc
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-rtc)
add_test(mbed-drivers-test-rtc mbed-drivers-test-rtc)
add_dependencies(all_tests mbed-drivers-test-rtc)

add_executable(mbed-drivers-test-stl_features EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/stl_features/main.cpp"
)
target_link_libraries(mbed-drivers-test-stl_features
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-stl_features)
add_test(mbed-drivers-test-stl_features mbed-drivers-test-stl_features)
add_dependencies(all_tests mbed-drivers-test-stl_features)

add_executable(mbed-drivers-test-ticker EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/ticker/main.cpp"
)
target_link_libraries(mbed-drivers-test-ticker
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-ticker)
add_test(mbed-drivers-test-ticker mbed-drivers-test-ticker)
add_dependencies(all_tests mbed-drivers-test-ticker)

add_executable(mbed-drivers-test-ticker_2 EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/ticker_2/main.cpp"
)
target_link_libraries(mbed-drivers-test-ticker_2
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-ticker_2)
add_test(mbed-drivers-test-ticker_2 mbed-drivers-test-ticker_2)
add_dependencies(all_tests mbed-drivers-test-ticker_2)

add_executable(mbed-drivers-test-ticker_3 EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/ticker_3/main.cpp"
)
target_link_libraries(mbed-drivers-test-ticker_3
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-ticker_3)
add_test(mbed-drivers-test-ticker_3 mbed-drivers-test-ticker_3)
add_dependencies(all_tests mbed-drivers-test-ticker_3)

add_executable(mbed-drivers-test-timeout EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/timeout/main.cpp"
)
target_link_libraries(mbed-drivers-test-timeout
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-timeout)
add_test(mbed-drivers-test-timeout mbed-drivers-test-timeout)
add_dependencies(all_tests mbed-drivers-test-timeout)

add_executable(mbed-drivers-test-wait_us EXCLUDE_FROM_ALL
        "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/test/wait_us/main.cpp"
)
target_link_libraries(mbed-drivers-test-wait_us
    mbed-hal
    cmsis-core
    ualloc
    minar
    core-util
    compiler-polyfill
    greentea-client
    mbed-drivers
)
yotta_postprocess_target(EXECUTABLE mbed-drivers-test-wait_us)
add_test(mbed-drivers-test-wait_us mbed-drivers-test-wait_us)
add_dependencies(all_tests mbed-drivers-test-wait_us)


