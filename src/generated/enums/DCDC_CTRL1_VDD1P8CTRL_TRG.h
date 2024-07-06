/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DCDC_CTRL1_VDD1P8CTRL_TRG : uint8_t
{
    v1p5 /*!< 1.5V */,
    v1p8 = 12 /*!< 1.8V */,
    v2p275 = 31 /*!< 2.275V */
};
static_assert(sizeof(DCDC_CTRL1_VDD1P8CTRL_TRG) == 1);

/**
 * Converts DCDC_CTRL1_VDD1P8CTRL_TRG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DCDC_CTRL1_VDD1P8CTRL_TRG instance)
{
    const char *result = "UNKNOWN DCDC_CTRL1_VDD1P8CTRL_TRG";

    switch (instance)
    {
    case DCDC_CTRL1_VDD1P8CTRL_TRG::v1p5:
        result = "v1p5";
        break;
    case DCDC_CTRL1_VDD1P8CTRL_TRG::v1p8:
        result = "v1p8";
        break;
    case DCDC_CTRL1_VDD1P8CTRL_TRG::v2p275:
        result = "v2p275";
        break;
    }

    return result;
}

/**
 * Converts a C string to DCDC_CTRL1_VDD1P8CTRL_TRG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DCDC_CTRL1_VDD1P8CTRL_TRG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "v1p5", 4)))
    {
        output = DCDC_CTRL1_VDD1P8CTRL_TRG::v1p5;
    }
    else if ((result = !strncmp(data, "v1p8", 4)))
    {
        output = DCDC_CTRL1_VDD1P8CTRL_TRG::v1p8;
    }
    else if ((result = !strncmp(data, "v2p275", 6)))
    {
        output = DCDC_CTRL1_VDD1P8CTRL_TRG::v2p275;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4