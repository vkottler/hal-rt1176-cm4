/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DAC_VERID_FEATURE : uint16_t
{
    _0 /*!< Standard feature set */,
    _1 = 1 /*!< C40 feature set */,
    _2 = 2 /*!< 5V DAC feature set */,
    _4 = 4 /*!< ADC BIST feature set */
};
static_assert(sizeof(DAC_VERID_FEATURE) == 2);

/**
 * Converts DAC_VERID_FEATURE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_VERID_FEATURE instance)
{
    const char *result = "UNKNOWN DAC_VERID_FEATURE";

    switch (instance)
    {
    case DAC_VERID_FEATURE::_0:
        result = "_0";
        break;
    case DAC_VERID_FEATURE::_1:
        result = "_1";
        break;
    case DAC_VERID_FEATURE::_2:
        result = "_2";
        break;
    case DAC_VERID_FEATURE::_4:
        result = "_4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_VERID_FEATURE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_VERID_FEATURE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = DAC_VERID_FEATURE::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = DAC_VERID_FEATURE::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = DAC_VERID_FEATURE::_2;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = DAC_VERID_FEATURE::_4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
