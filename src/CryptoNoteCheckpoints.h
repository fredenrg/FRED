// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{     0, "16f31d36d64f8b029f1c7f3b5ddb36f010666325eaee86c3b0bbb6af826d3703"},
{   500, "b94e4dd1d370a6d51bd2b36296674391bb0ba63620abf102a3dbcc37fa2d5b74"},
{  1000, "ba88f0a1de444fefbbde9d8c815b866b1e48d69c7cc8a1cca44ed87d799de08f"},
{  1900, "d13ffcd4dab1bd760a8a0abdc146db5730efb3fd5d8ca7fe6feb6e9c94ec4cd1"}
};
}
