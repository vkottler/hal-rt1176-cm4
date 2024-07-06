/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PDM_DC_CTRL_DCCONFIG4 : uint8_t
{
    _21Hz /*!< DC Remover cut-off at 21Hz */,
    _83Hz = 1 /*!< DC Remover cut-off at 83Hz */,
    _152Hz = 2 /*!< DC Remover cut-off at 152Hz */,
    bypass = 3 /*!< DC Remover is bypassed */
};
static_assert(sizeof(PDM_DC_CTRL_DCCONFIG4) == 1);

/**
 * Converts PDM_DC_CTRL_DCCONFIG4 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PDM_DC_CTRL_DCCONFIG4 instance)
{
    const char *result = "UNKNOWN PDM_DC_CTRL_DCCONFIG4";

    switch (instance)
    {
    case PDM_DC_CTRL_DCCONFIG4::_21Hz:
        result = "_21Hz";
        break;
    case PDM_DC_CTRL_DCCONFIG4::_83Hz:
        result = "_83Hz";
        break;
    case PDM_DC_CTRL_DCCONFIG4::_152Hz:
        result = "_152Hz";
        break;
    case PDM_DC_CTRL_DCCONFIG4::bypass:
        result = "bypass";
        break;
    }

    return result;
}

/**
 * Converts a C string to PDM_DC_CTRL_DCCONFIG4.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PDM_DC_CTRL_DCCONFIG4 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_21Hz", 5)))
    {
        output = PDM_DC_CTRL_DCCONFIG4::_21Hz;
    }
    else if ((result = !strncmp(data, "_83Hz", 5)))
    {
        output = PDM_DC_CTRL_DCCONFIG4::_83Hz;
    }
    else if ((result = !strncmp(data, "_152Hz", 6)))
    {
        output = PDM_DC_CTRL_DCCONFIG4::_152Hz;
    }
    else if ((result = !strncmp(data, "bypass", 6)))
    {
        output = PDM_DC_CTRL_DCCONFIG4::bypass;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4