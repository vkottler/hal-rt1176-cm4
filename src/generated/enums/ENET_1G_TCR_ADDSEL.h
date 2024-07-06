/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_1G_TCR_ADDSEL : uint8_t
{
    VAL_MAC /*!< Node MAC address programmed on PADDR1/2 registers. */
};
static_assert(sizeof(ENET_1G_TCR_ADDSEL) == 1);

/**
 * Converts ENET_1G_TCR_ADDSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_1G_TCR_ADDSEL instance)
{
    const char *result = "UNKNOWN ENET_1G_TCR_ADDSEL";

    switch (instance)
    {
    case ENET_1G_TCR_ADDSEL::VAL_MAC:
        result = "VAL_MAC";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_1G_TCR_ADDSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_1G_TCR_ADDSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "VAL_MAC", 7)))
    {
        output = ENET_1G_TCR_ADDSEL::VAL_MAC;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
