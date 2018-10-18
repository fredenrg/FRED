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
{  1000, "ab4512ac9a98230d081beb80a46dad397e92e345a02c383ee1628de3b43faaa2"},
{  3000, "cf47151fe2006cc8bd4451ce7cfa44db9e502b355be46d1a637b59f1d5581700"},
{  5000, "0427479345b4b4144fc6edb87fd67982f9ba0ba106e40185e2db3343e51ef4b5"},
{  10000, "df70a70c5c45652d43fb6641ea9d1e7c5419ddaca0d681cc48900c9e4e0616ec"},
{  15000, "b708af916a190514a3a454527007a58e8cecbae5ac9ea3515137892bc07bcc71"},
{  20000, "bfe7a90bf9ba719394fa186a9ce9c9eb4710b86c9a555bd2423da636c49c0b9d"}

};
}
