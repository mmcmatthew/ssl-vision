//========================================================================
//  This software is free: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License Version 3,
//  as published by the Free Software Foundation.
//
//  This software is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  Version 3 in the file COPYING that came with this distribution.
//  If not, see <http://www.gnu.org/licenses/>.
//========================================================================
/*!
  \file    multistack_robocup_ssl.h
  \brief   C++ Interface: multistack_robocup_ssl
  \author  Author Name, 2008
*/
//========================================================================
#ifndef MULTISTACK_ROBOCUP_SSL_H
#define MULTISTACK_ROBOCUP_SSL_H

#include "multivisionstack.h"
#include "stack_robocup_ssl.h"
#include "field.h"
using namespace std;

/*!
  \class   MultiStackRoboCupSSL
  \brief   The multi-camera vision processing stack used for the RoboCup SSL vision system.
  \author  Stefan Zickler, (C) 2008
*/
class MultiStackRoboCupSSL : public MultiVisionStack {
  protected:
  RoboCupField * global_field;
  public:
  MultiStackRoboCupSSL(RenderOptions * _opts, int cameras);
  virtual string getSettingsFileName();
  virtual ~MultiStackRoboCupSSL();
};

#endif