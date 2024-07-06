/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP : uint8_t
{
    _0 /*!< 344mV */,
    _1 = 1 /*!< 325mV (Default) */,
    _2 = 2 /*!< 307mV */,
    _3 = 3 /*!< Invalid */
};
static_assert(sizeof(DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP) == 1);

/**
 * Converts DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP instance)
{
    const char *result = "UNKNOWN DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP";

    switch (instance)
    {
    case DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_0:
        result = "_0";
        break;
    case DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_1:
        result = "_1";
        break;
    case DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_2:
        result = "_2";
        break;
    case DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = DSI_HOST_DPHY_INTFC_RXCDRP_RXCDRP::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4