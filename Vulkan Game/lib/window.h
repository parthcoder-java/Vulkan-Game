#pragma once
#include <iostream>
#include <GLFW/glfw3.h>

class window {
private:
	int m_height;
	int m_width;
	const char* m_title;
	GLFWwindow* m_window = NULL;

public:
	window(int height, int width, const char* title) : m_height(height), m_width(width), m_title(title), m_window(nullptr)
	{
		m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
	}

	~window()
	{
		glfwDestroyWindow(m_window);
	}

	void initialize_window() {

		if (!m_window) {
			std::cout << "Initialization of window failed" << std::endl;
			glfwTerminate();
			return;
		}

		glfwMakeContextCurrent(m_window);
		std::cout << "Window initialization was successful!" << std::endl;
	}

	GLFWwindow* get_window() {
		return m_window;
	}
};