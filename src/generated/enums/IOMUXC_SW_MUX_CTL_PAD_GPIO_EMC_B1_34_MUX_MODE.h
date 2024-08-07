/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE : uint8_t
{
    _0_semc_DATA12 /*!< Select mux mode: ALT0 mux port: SEMC_DATA12 of
                      instance: SEMC */
        ,
    _1_flexpwm3_PWMB2 = 1 /*!< Select mux mode: ALT1 mux port: FLEXPWM3_PWM2_B
                             of instance: FLEXPWM3 */
        ,
    _5_gpio_mux2_IO2 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO02 of
                            instance: GPIO_MUX2 */
        ,
    _10_gpio8_IO2 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO02 of
                          instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_0_semc_DATA12:
        result = "_0_semc_DATA12";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_1_flexpwm3_PWMB2:
        result = "_1_flexpwm3_PWMB2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_5_gpio_mux2_IO2:
        result = "_5_gpio_mux2_IO2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_10_gpio8_IO2:
        result = "_10_gpio8_IO2";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA12", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_0_semc_DATA12;
    }
    else if ((result = !strncmp(data, "_1_flexpwm3_PWMB2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_1_flexpwm3_PWMB2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_5_gpio_mux2_IO2;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO2", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34_MUX_MODE::_10_gpio8_IO2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
