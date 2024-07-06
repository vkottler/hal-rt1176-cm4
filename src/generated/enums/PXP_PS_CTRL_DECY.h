/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PXP_PS_CTRL_DECY : uint8_t
{
    DISABLE /*!< Disable pre-decimation filter. */,
    DECY2 = 1 /*!< Decimate PS by 2. */,
    DECY4 = 2 /*!< Decimate PS by 4. */,
    DECY8 = 3 /*!< Decimate PS by 8. */
};
static_assert(sizeof(PXP_PS_CTRL_DECY) == 1);

/**
 * Converts PXP_PS_CTRL_DECY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PXP_PS_CTRL_DECY instance)
{
    const char *result = "UNKNOWN PXP_PS_CTRL_DECY";

    switch (instance)
    {
    case PXP_PS_CTRL_DECY::DISABLE:
        result = "DISABLE";
        break;
    case PXP_PS_CTRL_DECY::DECY2:
        result = "DECY2";
        break;
    case PXP_PS_CTRL_DECY::DECY4:
        result = "DECY4";
        break;
    case PXP_PS_CTRL_DECY::DECY8:
        result = "DECY8";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_PS_CTRL_DECY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PXP_PS_CTRL_DECY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLE", 7)))
    {
        output = PXP_PS_CTRL_DECY::DISABLE;
    }
    else if ((result = !strncmp(data, "DECY2", 5)))
    {
        output = PXP_PS_CTRL_DECY::DECY2;
    }
    else if ((result = !strncmp(data, "DECY4", 5)))
    {
        output = PXP_PS_CTRL_DECY::DECY4;
    }
    else if ((result = !strncmp(data, "DECY8", 5)))
    {
        output = PXP_PS_CTRL_DECY::DECY8;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
