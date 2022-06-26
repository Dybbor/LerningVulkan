#include <cstdlib>
#include <iostream>
#include <exception>
#include "first_app.hpp"

int main() {
    lve::FirstApp firstApp{};
    try {
        firstApp.run();
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << "\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;

}