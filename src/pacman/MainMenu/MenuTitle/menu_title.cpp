#include "menu_title.hpp"

MenuTitle::MenuTitle(const std::string &_content, const sf::Vector2f &_position) {
    content = _content;
    text = sf::Text();

    text.setFont( *(Config::getInstance()->font) );
    text.setString(_content);
    text.setCharacterSize(30.f);
    text.setLetterSpacing(1.25);
    text.setFillColor(sf::Color::Yellow);
    text.setPosition(_position);

}
MenuTitle::~MenuTitle() { /* nothing to do here */ }

void MenuTitle::render(sf::RenderTarget *_target) const {
    _target->draw(text);
}

void MenuTitle::update() { /* Nothing to do here */ }



