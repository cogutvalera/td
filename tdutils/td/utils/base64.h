//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2018
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include "td/utils/common.h"
#include "td/utils/Slice.h"
#include "td/utils/Status.h"

namespace td {

string base64_encode(Slice input);
Result<string> base64_decode(Slice base64);

string base64url_encode(Slice input);
Result<string> base64url_decode(Slice base64);

bool is_base64(Slice input);
bool is_base64url(Slice input);

string base64_filter(Slice input);

}  // namespace td
