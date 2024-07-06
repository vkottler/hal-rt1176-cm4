/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE : uint8_t
{
    NO_SWAP /*!< No byte swapping.(Little endian) */,
    BIG_ENDIAN_SWAP = 1 /*!< Big Endian swap (swap bytes 0,3 and 1,2). */,
    HWD_SWAP = 2 /*!< Swap half-words. */,
    HWD_BYTE_SWAP = 3 /*!< Swap bytes within each half-word. */
};
static_assert(sizeof(LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE) == 1);

/**
 * Converts LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE instance)
{
    const char *result = "UNKNOWN LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE";

    switch (instance)
    {
    case LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::NO_SWAP:
        result = "NO_SWAP";
        break;
    case LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::BIG_ENDIAN_SWAP:
        result = "BIG_ENDIAN_SWAP";
        break;
    case LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::HWD_SWAP:
        result = "HWD_SWAP";
        break;
    case LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::HWD_BYTE_SWAP:
        result = "HWD_BYTE_SWAP";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO_SWAP", 7)))
    {
        output = LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::NO_SWAP;
    }
    else if ((result = !strncmp(data, "BIG_ENDIAN_SWAP", 15)))
    {
        output = LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::BIG_ENDIAN_SWAP;
    }
    else if ((result = !strncmp(data, "HWD_SWAP", 8)))
    {
        output = LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::HWD_SWAP;
    }
    else if ((result = !strncmp(data, "HWD_BYTE_SWAP", 13)))
    {
        output = LCDIF_CTRL_TOG_CSC_DATA_SWIZZLE::HWD_BYTE_SWAP;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
