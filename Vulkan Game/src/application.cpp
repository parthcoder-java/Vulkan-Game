#include<iostream>
#include "../lib/application.h"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

void initialize_window(window target_window) {
	window* win = (window*)malloc(sizeof(window));
	win = new window(800, 800, "App");
}
