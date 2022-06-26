#pragma once 
#define GLFW_INCLUDE_VULCAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve {
    class LveWindow {
    private:
        GLFWwindow* window;
        const int width;
        const int height;
        std::string windowName;

        void initWindow();
    public:
        LveWindow(int _width, int _height, std::string _windowName);
        ~LveWindow();
        bool shouldClose();
        /* delete defaule function, because we use pointer to GLFWWindows, 
        it will be helpful in next lessons, optimization ? probably yes */
        LveWindow(const LveWindow &) = delete;
        LveWindow &operator=(const LveWindow &) = delete;
    }; 
 }