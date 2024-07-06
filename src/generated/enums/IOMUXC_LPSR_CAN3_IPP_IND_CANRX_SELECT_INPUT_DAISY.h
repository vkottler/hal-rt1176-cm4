/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY : uint8_t
{
    _1_ALT0 /*!< Selecting Pad: GPIO_LPSR_01 for Mode: ALT0 */,
    _7_ALT6 = 1 /*!< Selecting Pad: GPIO_LPSR_07 for Mode: ALT6 */,
    _9_ALT1 = 2 /*!< Selecting Pad: GPIO_LPSR_09 for Mode: ALT1 */
};
static_assert(sizeof(IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY) == 1);

/**
 * Converts IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY instance)
{
    const char *result =
        "UNKNOWN IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY";

    switch (instance)
    {
    case IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY::_1_ALT0:
        result = "_1_ALT0";
        break;
    case IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY::_7_ALT6:
        result = "_7_ALT6";
        break;
    case IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY::_9_ALT1:
        result = "_9_ALT1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1_ALT0", 7)))
    {
        output = IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY::_1_ALT0;
    }
    else if ((result = !strncmp(data, "_7_ALT6", 7)))
    {
        output = IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY::_7_ALT6;
    }
    else if ((result = !strncmp(data, "_9_ALT1", 7)))
    {
        output = IOMUXC_LPSR_CAN3_IPP_IND_CANRX_SELECT_INPUT_DAISY::_9_ALT1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
