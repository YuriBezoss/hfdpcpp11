//===--- pizza.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
#include <list>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class Pizza {

  protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    mutable std::list< std::string > toppings_;
    Pizza();

  private:
    // Disable copy constructor and assignment operator
    Pizza( const Pizza& ) = delete;
    void operator=( const Pizza& ) = delete;

  public:
    virtual ~Pizza();
    virtual void Prepare() const;
    virtual void Bake() const;
    virtual void Cut() const;
    virtual void Box() const;
    std::string GetName() const;
    std::string ToString() const;
  };


} //namespace headfirst
#endif
