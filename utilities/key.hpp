/*
  Key
  --
  Anything related to keys and key searching

  Copyright: public-domain
*/
#ifndef KEY_INCLUDED_3DAC3A09_4DD9_45B0_A521_4369D4B4B930
#define KEY_INCLUDED_3DAC3A09_4DD9_45B0_A521_4369D4B4B930


#include <stddef.h>
#include <stdint.h>


// ---------------------------------------------------------- [ Key Config ] --


// Not impl yet.
#define UTIL_KEY_CPP 0;
#define UTIL_KEY_SIMD 0;
#define UTIL_KEY_ASM 0;


// ------------------------------------------------------- [ Key Interface ] --


namespace util {
namespace key {


bool
linear_search(const uint32_t id_to_find,
              const uint32_t ids[],
              const size_t id_count,
              size_t *out_index = nullptr);


} // ns
} // ns


#endif // inc guard


#ifdef UTIL_KEY_IMPL


// ------------------------------------------------------------ [ Key Impl ] --


namespace util {
namespace key {


bool
linear_search(const uint32_t id_to_find,
              const uint32_t ids[],
              const size_t id_count,
              size_t *out_index)
{
  for(size_t i = 0; i < id_count; ++i)
  {
    if(ids[i] == id_to_find)
    {
      if(out_index)
      {
        *out_index = i;
      }

      return true;
    }
  }

  return false;
}


} // ns
} // ns


#endif // impl guard