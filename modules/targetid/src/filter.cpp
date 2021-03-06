/*
 *   This file is part of WARG's computer-vision
 *
 *  Copyright (c) 2015-2016, Waterloo Aerial Robotics Group (WARG)
 *  All rights reserved.
 *
 *  This software is licensed under a modified version of the BSD 3 clause license
 *  that should have been included with this software in a file called COPYING.txt
 *  Otherwise it is available at:
 *  https://raw.githubusercontent.com/UWARG/computer-vision/master/COPYING.txt
 */

#include "filter.h"
#include <string>

Filter::Filter() {
    this->parameters = new std::map<std::string, int>();
}

Filter::~Filter() {
    delete this->parameters;
}


void Filter::setParameter(std::string param, int value) {
    (*this->parameters)[param] = value;
}
