/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY : uint8_t
{
    _00_ALT6 /*!< Selecting Pad: GPIO_LPSR_00 for Mode: ALT6 */,
    _06_ALT3 = 1 /*!< Selecting Pad: GPIO_LPSR_06 for Mode: ALT3 */,
    _10_ALT8 = 2 /*!< Selecting Pad: GPIO_LPSR_10 for Mode: ALT8 */
};
static_assert(
    sizeof(IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY to a C
 * string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY instance)
{
    const char *result =
        "UNKNOWN IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY::_00_ALT6:
        result = "_00_ALT6";
        break;
    case IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY::_06_ALT3:
        result = "_06_ALT3";
        break;
    case IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY::_10_ALT8:
        result = "_10_ALT8";
        break;
    }

    return result;
}

/**
 * Converts a C string to
 * IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_00_ALT6", 8)))
    {
        output = IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY::
            _00_ALT6;
    }
    else if ((result = !strncmp(data, "_06_ALT3", 8)))
    {
        output = IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY::
            _06_ALT3;
    }
    else if ((result = !strncmp(data, "_10_ALT8", 8)))
    {
        output = IOMUXC_LPSR_LPUART12_IPP_IND_LPUART_TXD_SELECT_INPUT_DAISY::
            _10_ALT8;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
