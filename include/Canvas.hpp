#include "Pendulum.hpp"
#include <SFML/Graphics.hpp> 
#include "Line.hpp"
#include <vector>
#ifndef CANVAS_HPP 
#define CANVAS_HPP 


class Canvas{
    private: 
        sf::RenderWindow window;
        sf::Clock clock; 
        sf::View view;
        Pendulum* pendulum;         
        std::vector<Pendulum*> pendulums; 

        void update(float dt); 
        void handleEvents(); 
        void render(); 


        const float G = 0.1;
        const float airDrag = 0.99; 
    public: 
        Canvas(int width, int height);
        ~Canvas(); 
        void run(); 
};
#endif 