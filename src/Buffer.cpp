#include "Buffer.hpp"

Buffer::Buffer(const sf::Vector2f &size,sf::Vector2f position):sf::RectangleShape(size)
{
    speed.y=10;
    this->setPosition(position);
}

Buffer::~Buffer()
{
    //dtor
}
void Buffer::print(void){
    this->setPosition(this->getPosition().x,this->getPosition().y+speed.y);
}
void Buffer::evento(sf::RenderWindow &Apps, sf::RectangleShape &sabre,sf::CircleShape &bola,Pilha<sf::RectangleShape> &Vidas){
    type==0;
}
