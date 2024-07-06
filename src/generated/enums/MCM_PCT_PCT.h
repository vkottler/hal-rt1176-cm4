/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class MCM_PCT_PCT : uint16_t
{
    PCT_44096 = 44096 /*!< ARM Cortex M4 */
};
static_assert(sizeof(MCM_PCT_PCT) == 2);

/**
 * Converts MCM_PCT_PCT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MCM_PCT_PCT instance)
{
    const char *result = "UNKNOWN MCM_PCT_PCT";

    switch (instance)
    {
    case MCM_PCT_PCT::PCT_44096:
        result = "PCT_44096";
        break;
    }

    return result;
}

/**
 * Converts a C string to MCM_PCT_PCT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MCM_PCT_PCT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "PCT_44096", 9)))
    {
        output = MCM_PCT_PCT::PCT_44096;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
