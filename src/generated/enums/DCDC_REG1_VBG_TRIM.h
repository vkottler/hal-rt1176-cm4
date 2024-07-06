/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DCDC_REG1_VBG_TRIM : uint8_t
{
    minvolt /*!< 0.452V */,
    default = 16 /*!< 0.5V */,
    maxvolt = 31 /*!< 0.545V */
};
static_assert(sizeof(DCDC_REG1_VBG_TRIM) == 1);

/**
 * Converts DCDC_REG1_VBG_TRIM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DCDC_REG1_VBG_TRIM instance)
{
    const char *result = "UNKNOWN DCDC_REG1_VBG_TRIM";

    switch (instance)
    {
    case DCDC_REG1_VBG_TRIM::minvolt:
        result = "minvolt";
        break;
    case DCDC_REG1_VBG_TRIM::default:
        result = "default";
        break;
    case DCDC_REG1_VBG_TRIM::maxvolt:
        result = "maxvolt";
        break;
    }

    return result;
}

/**
 * Converts a C string to DCDC_REG1_VBG_TRIM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DCDC_REG1_VBG_TRIM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "minvolt", 7)))
    {
        output = DCDC_REG1_VBG_TRIM::minvolt;
    }
    else if ((result = !strncmp(data, "default", 7)))
    {
        output = DCDC_REG1_VBG_TRIM::default;
    }
    else if ((result = !strncmp(data, "maxvolt", 7)))
    {
        output = DCDC_REG1_VBG_TRIM::maxvolt;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
