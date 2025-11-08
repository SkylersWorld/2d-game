#include "Input.hpp"
#include <GLFW/glfw3.h>

class Input {
public:
    void processInput(GLFWwindow* window) {
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, true);
        }
        // Additional input handling can be added here
    }

    bool isKeyPressed(int key) {
        return glfwGetKey(window, key) == GLFW_PRESS;
    }
};
