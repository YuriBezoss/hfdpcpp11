//===--- frozen_clams.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_FROZEN_CLAMS_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_FROZEN_CLAMS_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "clams.hpp"


class FrozenClams : public Clams {

public:
  std::string toString() const;
};


#endif
