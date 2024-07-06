/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class XRDC2_D0_PAC_PDAC_W1_EAL : uint8_t
{
    disabled_00 /*!< Lock disabled. */,
    disabled_01 = 1 /*!< Lock disabled until next reset. */,
    enabled_10 = 2 /*!< Lock enabled, lock state = available. */,
    enabled_11 = 3 /*!< Lock enabled, lock state = not available. */
};
static_assert(sizeof(XRDC2_D0_PAC_PDAC_W1_EAL) == 1);

/**
 * Converts XRDC2_D0_PAC_PDAC_W1_EAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(XRDC2_D0_PAC_PDAC_W1_EAL instance)
{
    const char *result = "UNKNOWN XRDC2_D0_PAC_PDAC_W1_EAL";

    switch (instance)
    {
    case XRDC2_D0_PAC_PDAC_W1_EAL::disabled_00:
        result = "disabled_00";
        break;
    case XRDC2_D0_PAC_PDAC_W1_EAL::disabled_01:
        result = "disabled_01";
        break;
    case XRDC2_D0_PAC_PDAC_W1_EAL::enabled_10:
        result = "enabled_10";
        break;
    case XRDC2_D0_PAC_PDAC_W1_EAL::enabled_11:
        result = "enabled_11";
        break;
    }

    return result;
}

/**
 * Converts a C string to XRDC2_D0_PAC_PDAC_W1_EAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, XRDC2_D0_PAC_PDAC_W1_EAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled_00", 11)))
    {
        output = XRDC2_D0_PAC_PDAC_W1_EAL::disabled_00;
    }
    else if ((result = !strncmp(data, "disabled_01", 11)))
    {
        output = XRDC2_D0_PAC_PDAC_W1_EAL::disabled_01;
    }
    else if ((result = !strncmp(data, "enabled_10", 10)))
    {
        output = XRDC2_D0_PAC_PDAC_W1_EAL::enabled_10;
    }
    else if ((result = !strncmp(data, "enabled_11", 10)))
    {
        output = XRDC2_D0_PAC_PDAC_W1_EAL::enabled_11;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
