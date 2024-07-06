/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class MCM_LMDR_WY : uint8_t
{
    _0 /*!< No Cache */,
    _2 = 2 /*!< 2-Way Set Associative */,
    _4 = 4 /*!< 4-Way Set Associative */
};
static_assert(sizeof(MCM_LMDR_WY) == 1);

/**
 * Converts MCM_LMDR_WY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MCM_LMDR_WY instance)
{
    const char *result = "UNKNOWN MCM_LMDR_WY";

    switch (instance)
    {
    case MCM_LMDR_WY::_0:
        result = "_0";
        break;
    case MCM_LMDR_WY::_2:
        result = "_2";
        break;
    case MCM_LMDR_WY::_4:
        result = "_4";
        break;
    }

    return result;
}

/**
 * Converts a C string to MCM_LMDR_WY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MCM_LMDR_WY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = MCM_LMDR_WY::_0;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = MCM_LMDR_WY::_2;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = MCM_LMDR_WY::_4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4