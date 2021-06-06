#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

#include "game_init.hpp"

#include "2639types.h"

/**
 * VulkanWindow2639
 *  - Only does the things from the Vulkan Tutorial
 *  - To say that this is my very own code is the biggest stretch
 *  - Once this works I can go ham writing abstractions over it
 */

class VulkanWindow2639 {
    private:
        VkApplicationInfo appInfo;
        VkInstanceCreateInfo createInfo;
        VkInstance instance;
        GLFWwindow *mWindow;
        VkPhysicalDevice mPhysicalDevice = VK_NULL_HANDLE;
        void instanceMake();
        void chooseGraphicsCard();
    public:
        void initialize();
        void makeWindow(const char *name, u32 w, u32 h);
        void windowLoop();
        void finish();
};
