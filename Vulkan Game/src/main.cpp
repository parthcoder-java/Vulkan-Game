#include <iostream>
#include "../lib/application.h"

int main(void) {
	if (!glfwInit()) {
		std::cout << "GLFW initialization failed" << std::endl;
	}

	window* win = new window(800, 800, "Game");
	win->initialize_window();

	GLFWwindow* win_ptr = win->get_window();

	while (!glfwWindowShouldClose(win_ptr)) {
		glfwPollEvents();
		glfwSwapBuffers(win_ptr);
	}

	win_ptr = nullptr;
	free(win);
	glfwTerminate();
}