file(GLOB proj_src ${CMAKE_SOURCE_DIR}/src/[A-Za-z0-9]*.h ${CMAKE_SOURCE_DIR}/src/[A-Za-z0-9]*.c)

source_group(Others\\Header REGULAR_EXPRESSION ".*\\.h")
source_group(Others\\Source REGULAR_EXPRESSION ".*\\.c")

add_executable(${PROJECT_NAME} ${proj_src})

IF (USED_COMPILER MATCHES "MSVC")
   	#target_link_libraries(${PROJECT_NAME})
ELSE (USED_COMPILER MATCHES "MSVC")
   	IF (USED_COMPILER MATCHES "CLANG")
       	#target_link_libraries(${PROJECT_NAME})
   	ELSE (USED_COMPILER MATCHES "CLANG")
       	#target_link_libraries(${PROJECT_NAME})
   	ENDIF(USED_COMPILER MATCHES "CLANG")
ENDIF(USED_COMPILER MATCHES "MSVC")