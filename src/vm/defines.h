#pragma once

#include <SDL.h>

#include <array>

namespace retro8
{
  enum color_t
  {
    BLACK, DARK_BLUE, DARK_PURPLE, DARK_GREEN,
    BROWN, DARK_GREY, LIGHT_GREY, WHITE,
    RED, ORANGE, YELLOW, GREEN,
    BLUE, INDIGO, PINK, PEACH
  };

  using coord_t = uint32_t;
  struct point_t { coord_t x, y; };
}