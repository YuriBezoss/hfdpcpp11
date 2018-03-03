//===--- Menu.cpp - ---------------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "Menu.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <cstdio>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "MenuComponent.hpp"


Menu::Menu( const std::string name, const std::string description ) :
  _name( name ), _description( description )
{
  std::cout << "Menu::Menu" << std::endl;
}
void Menu::add( std::shared_ptr<MenuComponent> menuComponent )
{
  assert( menuComponent );
  std::cout << "Menu::add" << std::endl;
  _menuComponents.push_back( menuComponent );
}
void Menu::remove( std::shared_ptr<MenuComponent> menuComponent )
{
  assert( menuComponent );
  std::cout << "Menu::remove" << std::endl;
  ////////////////////////////////////////////////////////////
  // This part is remained as a to-do
  //std::remove( _menuComponents.begin(), _menuComponents.end(),
  //             menuComponent->getName().c_str());
}
std::shared_ptr<MenuComponent> Menu::getChild( int i ) const
{
  std::cout << "Menu::getChild" << std::endl;
  return _menuComponents[i];
}
std::string Menu::getName() const
{
  std::cout << "Menu::getName" << std::endl;
  return _name;
}
std::string Menu::getDescription() const
{
  std::cout << "Menu::getDescription" << std::endl;
  return _description;
}
void Menu::print() const
{
  std::cout << "Menu::print" << std::endl;
  std::cout << std::endl << getName().c_str();
  std::cout << ", " << getDescription().c_str() << std::endl;
  std::cout << "---------------------" << std::endl;

  std::vector< std::shared_ptr<MenuComponent> >::iterator
    iterator = _menuComponents.begin();
  while( iterator != _menuComponents.end() ) {
    std::shared_ptr<MenuComponent> menuComponent = *iterator++;
    menuComponent->print();
  }
}

