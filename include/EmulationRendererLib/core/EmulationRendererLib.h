#pragma once
#include <GLFW/glfw3.h>
#include <cstring>
#include <string>
#include <iomanip>

class Application{

    struct ApplicationConfigs{
        std::string name;
        std::size_t width;
        std::size_t height;
    };

    Application(ApplicationConfigs&&);
private:

    void mainloop();

private:
    GLFWwindow* window;
    ApplicationConfigs configs;
};