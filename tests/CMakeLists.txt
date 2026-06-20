find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test)

set(CMAKE_AUTOMOC ON)

function(add_test_task
	test_task_name
)
	add_executable(${test_task_name}
		${ARGN}
	)
	target_link_libraries(${test_task_name} PRIVATE
		utils
		Qt${QT_VERSION_MAJOR}::Test
	)
	add_test(NAME ${test_task_name} COMMAND ${test_task_name})
endfunction()

# test for FormatUtils
add_test_task(
	test_format_utils
	src/test_format_utils/test_format_utils.h
	src/test_format_utils/test_format_utils.cpp
)

# test for FileUtils
add_test_task(
	test_file_utils
	src/test_file_utils/test_file_utils.h
	src/test_file_utils/test_file_utils.cpp
)
