#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

#include "2639types.h"
#include "game_init.hpp"

int main() {
    VulkanWindow2639 w;
    
    w.initialize();
    w.makeWindow("Game name", 800, 600);
    w.windowLoop();
    w.finish();

    return 0;
}
