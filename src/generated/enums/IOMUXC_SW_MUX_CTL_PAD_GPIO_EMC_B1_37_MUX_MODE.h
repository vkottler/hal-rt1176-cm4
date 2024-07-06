/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE : uint8_t
{
    _0_semc_DATA15 /*!< Select mux mode: ALT0 mux port: SEMC_DATA15 of
                      instance: SEMC */
        ,
    _1_XBAR1_INOUT11 = 1 /*!< Select mux mode: ALT1 mux port: XBAR1_INOUT11 of
                            instance: XBAR1 */
        ,
    _5_gpio_mux2_IO5 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO05 of
                            instance: GPIO_MUX2 */
        ,
    _10_gpio8_IO5 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO05 of
                          instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_0_semc_DATA15:
        result = "_0_semc_DATA15";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_1_XBAR1_INOUT11:
        result = "_1_XBAR1_INOUT11";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_5_gpio_mux2_IO5:
        result = "_5_gpio_mux2_IO5";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_10_gpio8_IO5:
        result = "_10_gpio8_IO5";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA15", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_0_semc_DATA15;
    }
    else if ((result = !strncmp(data, "_1_XBAR1_INOUT11", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_1_XBAR1_INOUT11;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO5", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_5_gpio_mux2_IO5;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO5", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37_MUX_MODE::_10_gpio8_IO5;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
