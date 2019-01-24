// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include <memory>
#include <vector>
#include <deque>
#include <string>
#include <string_view>
#include <unordered_map>
#include <functional>
#include <boost\container\vector.hpp>
#include <boost\container\deque.hpp>
#include <boost\unordered_map.hpp>
#include <boost\config.hpp>
#include <boost\algorithm\string.hpp>
#include <exception>
#include <stdexcept>
#include <boost\type_traits\remove_reference.hpp>
#include <boost\type_traits\is_detected.hpp>
#include <boost\type_traits\add_const.hpp>
#include <boost\type_traits\add_reference.hpp>
#include <boost\type_traits\remove_cv_ref.hpp>

#define forceinline BOOST_FORCEINLINE


// reference additional headers your program requires here
