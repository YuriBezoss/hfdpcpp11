//===--- livingroom_light_off_command.hpp - ---------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIVINGROOM_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIVINGROOM_LIGHT_OFF_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"
#include "light.hpp"


class LivingroomLightOffCommand : public Command {

  const Light* light_;

public:
  explicit LivingroomLightOffCommand( const Light* light );
  void Execute() const;
};


#endif
