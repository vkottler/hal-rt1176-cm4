/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USDHC1_SYS_CTRL_DVS : uint8_t
{
    _0 /*!< Divide-by-1 */,
    _1 = 1 /*!< Divide-by-2 */,
    _14 = 14 /*!< Divide-by-15 */,
    _15 = 15 /*!< Divide-by-16 */
};
static_assert(sizeof(USDHC1_SYS_CTRL_DVS) == 1);

/**
 * Converts USDHC1_SYS_CTRL_DVS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_SYS_CTRL_DVS instance)
{
    const char *result = "UNKNOWN USDHC1_SYS_CTRL_DVS";

    switch (instance)
    {
    case USDHC1_SYS_CTRL_DVS::_0:
        result = "_0";
        break;
    case USDHC1_SYS_CTRL_DVS::_1:
        result = "_1";
        break;
    case USDHC1_SYS_CTRL_DVS::_14:
        result = "_14";
        break;
    case USDHC1_SYS_CTRL_DVS::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_SYS_CTRL_DVS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_SYS_CTRL_DVS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_SYS_CTRL_DVS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_SYS_CTRL_DVS::_1;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = USDHC1_SYS_CTRL_DVS::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = USDHC1_SYS_CTRL_DVS::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
