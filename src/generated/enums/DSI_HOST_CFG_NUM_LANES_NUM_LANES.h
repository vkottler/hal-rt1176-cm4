/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DSI_HOST_CFG_NUM_LANES_NUM_LANES : uint8_t
{
    _0 /*!< 1 lane */,
    _1 = 1 /*!< 2 lanes */
};
static_assert(sizeof(DSI_HOST_CFG_NUM_LANES_NUM_LANES) == 1);

/**
 * Converts DSI_HOST_CFG_NUM_LANES_NUM_LANES to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSI_HOST_CFG_NUM_LANES_NUM_LANES instance)
{
    const char *result = "UNKNOWN DSI_HOST_CFG_NUM_LANES_NUM_LANES";

    switch (instance)
    {
    case DSI_HOST_CFG_NUM_LANES_NUM_LANES::_0:
        result = "_0";
        break;
    case DSI_HOST_CFG_NUM_LANES_NUM_LANES::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSI_HOST_CFG_NUM_LANES_NUM_LANES.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        DSI_HOST_CFG_NUM_LANES_NUM_LANES &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = DSI_HOST_CFG_NUM_LANES_NUM_LANES::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = DSI_HOST_CFG_NUM_LANES_NUM_LANES::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
