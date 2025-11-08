#include "Audio.hpp"
#include <iostream>

Audio::Audio() {
    // Constructor implementation
}

Audio::~Audio() {
    // Destructor implementation
}

void Audio::loadSound(const std::string& filePath) {
    // Load sound implementation
    std::cout << "Loading sound from: " << filePath << std::endl;
}

void Audio::playSound(const std::string& soundName) {
    // Play sound implementation
    std::cout << "Playing sound: " << soundName << std::endl;
}

void Audio::stopSound(const std::string& soundName) {
    // Stop sound implementation
    std::cout << "Stopping sound: " << soundName << std::endl;
}
