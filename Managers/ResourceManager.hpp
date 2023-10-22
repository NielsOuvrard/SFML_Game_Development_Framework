/*
** Created the 02/10/2023
*/

#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <map>
#include <string>

class ResourceManager
{
public:
    ResourceManager();

    // Load and retrieve textures
    sf::Texture &getTexture(const std::string &filename);
    void loadTexture(const std::string &filename);

    // Load and retrieve fonts
    sf::Font &getFont(const std::string &filename);
    void loadFont(const std::string &filename);

    // Load and retrieve sounds
    sf::SoundBuffer &getSoundBuffer(const std::string &filename);
    void loadSoundBuffer(const std::string &filename);

private:
    std::map<std::string, sf::Texture> textures;
    std::map<std::string, sf::Font> fonts;
    std::map<std::string, sf::SoundBuffer> soundBuffers;

    // Add any other resource types and data structures as needed
};

#endif// RESOURCEMANAGER_HPP