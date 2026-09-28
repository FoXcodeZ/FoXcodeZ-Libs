// ================================================================================
// FoXcodeZ Libs source code.
// Copyright (c) 2026 Marcin "FoXcodeZ" Grabowy.
// SPDX-License-Identifier: MIT
// ================================================================================

#pragma once
#include "fxz/Core.hpp"

namespace fxz
{
    template<typename T>
    struct Size2T
    {
        T w {};
        T h {};
    };

    using Size2     = Size2T<f32>;
    using Size2f    = Size2T<f32>;
    using Size2i    = Size2T<i32>;
    using Size2u    = Size2T<u32>;
}