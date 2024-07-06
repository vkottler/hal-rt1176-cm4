/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SAI1_RCR2_MSEL : uint8_t
{
    BUS_CLOCK /*!< Bus Clock selected. */,
    MCLK1 = 1 /*!< Master Clock (MCLK) 1 option selected. */,
    MCLK2 = 2 /*!< Master Clock (MCLK) 2 option selected. */,
    MCLK3 = 3 /*!< Master Clock (MCLK) 3 option selected. */
};
static_assert(sizeof(SAI1_RCR2_MSEL) == 1);

/**
 * Converts SAI1_RCR2_MSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SAI1_RCR2_MSEL instance)
{
    const char *result = "UNKNOWN SAI1_RCR2_MSEL";

    switch (instance)
    {
    case SAI1_RCR2_MSEL::BUS_CLOCK:
        result = "BUS_CLOCK";
        break;
    case SAI1_RCR2_MSEL::MCLK1:
        result = "MCLK1";
        break;
    case SAI1_RCR2_MSEL::MCLK2:
        result = "MCLK2";
        break;
    case SAI1_RCR2_MSEL::MCLK3:
        result = "MCLK3";
        break;
    }

    return result;
}

/**
 * Converts a C string to SAI1_RCR2_MSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SAI1_RCR2_MSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "BUS_CLOCK", 9)))
    {
        output = SAI1_RCR2_MSEL::BUS_CLOCK;
    }
    else if ((result = !strncmp(data, "MCLK1", 5)))
    {
        output = SAI1_RCR2_MSEL::MCLK1;
    }
    else if ((result = !strncmp(data, "MCLK2", 5)))
    {
        output = SAI1_RCR2_MSEL::MCLK2;
    }
    else if ((result = !strncmp(data, "MCLK3", 5)))
    {
        output = SAI1_RCR2_MSEL::MCLK3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
