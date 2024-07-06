/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE : uint8_t
{
    _0_semc_CS0 /*!< Select mux mode: ALT0 mux port: SEMC_CS0 of instance: SEMC
                 */
        ,
    _1_flexpwm3_PWMA0 = 1 /*!< Select mux mode: ALT1 mux port: FLEXPWM3_PWM0_A
                             of instance: FLEXPWM3 */
        ,
    _5_gpio_mux1_IO29 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX1_IO29
                             of instance: GPIO_MUX1 */
        ,
    _8_flexio1_FLEXIO29 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO1_D29 of
                               instance: FLEXIO1 */
        ,
    _10_gpio7_IO29 = 10 /*!< Select mux mode: ALT10 mux port: GPIO7_IO29 of
                           instance: GPIO7 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_0_semc_CS0:
        result = "_0_semc_CS0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_1_flexpwm3_PWMA0:
        result = "_1_flexpwm3_PWMA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_5_gpio_mux1_IO29:
        result = "_5_gpio_mux1_IO29";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_8_flexio1_FLEXIO29:
        result = "_8_flexio1_FLEXIO29";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_10_gpio7_IO29:
        result = "_10_gpio7_IO29";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_CS0", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_0_semc_CS0;
    }
    else if ((result = !strncmp(data, "_1_flexpwm3_PWMA0", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_1_flexpwm3_PWMA0;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux1_IO29", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_5_gpio_mux1_IO29;
    }
    else if ((result = !strncmp(data, "_8_flexio1_FLEXIO29", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_8_flexio1_FLEXIO29;
    }
    else if ((result = !strncmp(data, "_10_gpio7_IO29", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_29_MUX_MODE::_10_gpio7_IO29;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
