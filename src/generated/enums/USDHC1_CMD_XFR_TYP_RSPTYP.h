/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USDHC1_CMD_XFR_TYP_RSPTYP : uint8_t
{
    _0 /*!< No response */,
    _1 = 1 /*!< Response length 136 */,
    _2 = 2 /*!< Response length 48 */,
    _3 = 3 /*!< Response length 48, check busy after response */
};
static_assert(sizeof(USDHC1_CMD_XFR_TYP_RSPTYP) == 1);

/**
 * Converts USDHC1_CMD_XFR_TYP_RSPTYP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_CMD_XFR_TYP_RSPTYP instance)
{
    const char *result = "UNKNOWN USDHC1_CMD_XFR_TYP_RSPTYP";

    switch (instance)
    {
    case USDHC1_CMD_XFR_TYP_RSPTYP::_0:
        result = "_0";
        break;
    case USDHC1_CMD_XFR_TYP_RSPTYP::_1:
        result = "_1";
        break;
    case USDHC1_CMD_XFR_TYP_RSPTYP::_2:
        result = "_2";
        break;
    case USDHC1_CMD_XFR_TYP_RSPTYP::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_CMD_XFR_TYP_RSPTYP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_CMD_XFR_TYP_RSPTYP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_RSPTYP::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_RSPTYP::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_RSPTYP::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = USDHC1_CMD_XFR_TYP_RSPTYP::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
