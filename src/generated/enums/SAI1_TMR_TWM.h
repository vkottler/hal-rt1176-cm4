/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SAI1_TMR_TWM : uint16_t
{
    ENABLED /*!< Word N is enabled. */,
    MASKED = 1 /*!< Word N is masked. The transmit data pins are tri-stated or
                  drive zero when masked. */
};
static_assert(sizeof(SAI1_TMR_TWM) == 2);

/**
 * Converts SAI1_TMR_TWM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SAI1_TMR_TWM instance)
{
    const char *result = "UNKNOWN SAI1_TMR_TWM";

    switch (instance)
    {
    case SAI1_TMR_TWM::ENABLED:
        result = "ENABLED";
        break;
    case SAI1_TMR_TWM::MASKED:
        result = "MASKED";
        break;
    }

    return result;
}

/**
 * Converts a C string to SAI1_TMR_TWM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SAI1_TMR_TWM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = SAI1_TMR_TWM::ENABLED;
    }
    else if ((result = !strncmp(data, "MASKED", 6)))
    {
        output = SAI1_TMR_TWM::MASKED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
