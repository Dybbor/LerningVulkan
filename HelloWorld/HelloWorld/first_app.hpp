#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve {
    class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
        void run();
    private: 
        LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulcan" };
        LvePipeline lvePipeline{ "D:\\GithubProjects\\LerningVulkan\\HelloWorld\\HelloWorld\\shaders\\simp_shader.vert.spv",
            "D:\\GithubProjects\\LerningVulkan\\HelloWorld\\HelloWorld\\shaders\\simp_shader.frag.spv" };
    };
}