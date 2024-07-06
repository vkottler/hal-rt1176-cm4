/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USDHC1_HOST_CTRL_CAP_MBL : uint8_t
{
    _0 /*!< 512 bytes */,
    _1 = 1 /*!< 1024 bytes */,
    _2 = 2 /*!< 2048 bytes */,
    _3 = 3 /*!< 4096 bytes */
};
static_assert(sizeof(USDHC1_HOST_CTRL_CAP_MBL) == 1);

/**
 * Converts USDHC1_HOST_CTRL_CAP_MBL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_HOST_CTRL_CAP_MBL instance)
{
    const char *result = "UNKNOWN USDHC1_HOST_CTRL_CAP_MBL";

    switch (instance)
    {
    case USDHC1_HOST_CTRL_CAP_MBL::_0:
        result = "_0";
        break;
    case USDHC1_HOST_CTRL_CAP_MBL::_1:
        result = "_1";
        break;
    case USDHC1_HOST_CTRL_CAP_MBL::_2:
        result = "_2";
        break;
    case USDHC1_HOST_CTRL_CAP_MBL::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_HOST_CTRL_CAP_MBL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_HOST_CTRL_CAP_MBL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_HOST_CTRL_CAP_MBL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_HOST_CTRL_CAP_MBL::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = USDHC1_HOST_CTRL_CAP_MBL::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = USDHC1_HOST_CTRL_CAP_MBL::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
