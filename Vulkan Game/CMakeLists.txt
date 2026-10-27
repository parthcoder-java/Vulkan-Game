add_executable (CMakeTarget "src/main.cpp" "src/application.cpp" "lib/application.h" "lib/window.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries(CMakeTarget PRIVATE glfw Vulkan::Vulkan)