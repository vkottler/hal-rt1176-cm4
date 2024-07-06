/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PXP_PS_CTRL_DECX : uint8_t
{
    DISABLE /*!< Disable pre-decimation filter. */,
    DECX2 = 1 /*!< Decimate PS by 2. */,
    DECX4 = 2 /*!< Decimate PS by 4. */,
    DECX8 = 3 /*!< Decimate PS by 8. */
};
static_assert(sizeof(PXP_PS_CTRL_DECX) == 1);

/**
 * Converts PXP_PS_CTRL_DECX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PXP_PS_CTRL_DECX instance)
{
    const char *result = "UNKNOWN PXP_PS_CTRL_DECX";

    switch (instance)
    {
    case PXP_PS_CTRL_DECX::DISABLE:
        result = "DISABLE";
        break;
    case PXP_PS_CTRL_DECX::DECX2:
        result = "DECX2";
        break;
    case PXP_PS_CTRL_DECX::DECX4:
        result = "DECX4";
        break;
    case PXP_PS_CTRL_DECX::DECX8:
        result = "DECX8";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_PS_CTRL_DECX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PXP_PS_CTRL_DECX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLE", 7)))
    {
        output = PXP_PS_CTRL_DECX::DISABLE;
    }
    else if ((result = !strncmp(data, "DECX2", 5)))
    {
        output = PXP_PS_CTRL_DECX::DECX2;
    }
    else if ((result = !strncmp(data, "DECX4", 5)))
    {
        output = PXP_PS_CTRL_DECX::DECX4;
    }
    else if ((result = !strncmp(data, "DECX8", 5)))
    {
        output = PXP_PS_CTRL_DECX::DECX8;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
