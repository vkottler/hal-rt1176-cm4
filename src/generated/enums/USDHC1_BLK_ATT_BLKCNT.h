/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USDHC1_BLK_ATT_BLKCNT : uint16_t
{
    _0 /*!< Stop count */,
    _1 = 1 /*!< 1 block */,
    _2 = 2 /*!< 2 blocks */,
    _65535 = 65535 /*!< 65535 blocks */
};
static_assert(sizeof(USDHC1_BLK_ATT_BLKCNT) == 2);

/**
 * Converts USDHC1_BLK_ATT_BLKCNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_BLK_ATT_BLKCNT instance)
{
    const char *result = "UNKNOWN USDHC1_BLK_ATT_BLKCNT";

    switch (instance)
    {
    case USDHC1_BLK_ATT_BLKCNT::_0:
        result = "_0";
        break;
    case USDHC1_BLK_ATT_BLKCNT::_1:
        result = "_1";
        break;
    case USDHC1_BLK_ATT_BLKCNT::_2:
        result = "_2";
        break;
    case USDHC1_BLK_ATT_BLKCNT::_65535:
        result = "_65535";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_BLK_ATT_BLKCNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_BLK_ATT_BLKCNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_BLK_ATT_BLKCNT::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_BLK_ATT_BLKCNT::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = USDHC1_BLK_ATT_BLKCNT::_2;
    }
    else if ((result = !strncmp(data, "_65535", 6)))
    {
        output = USDHC1_BLK_ATT_BLKCNT::_65535;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
