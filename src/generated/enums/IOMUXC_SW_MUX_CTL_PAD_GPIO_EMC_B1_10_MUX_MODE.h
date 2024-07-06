/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE : uint8_t
{
    _0_semc_ADDR1 /*!< Select mux mode: ALT0 mux port: SEMC_ADDR01 of instance:
                     SEMC */
        ,
    _1_flexpwm2_PWMA2 = 1 /*!< Select mux mode: ALT1 mux port: FLEXPWM2_PWM2_A
                             of instance: FLEXPWM2 */
        ,
    _2_gpt5_CAPTURE2 = 2 /*!< Select mux mode: ALT2 mux port: GPT5_CAPTURE2 of
                            instance: GPT5 */
        ,
    _5_gpio_mux1_IO10 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX1_IO10
                             of instance: GPIO_MUX1 */
        ,
    _8_flexio1_FLEXIO10 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO1_D10 of
                               instance: FLEXIO1 */
        ,
    _10_gpio7_IO10 = 10 /*!< Select mux mode: ALT10 mux port: GPIO7_IO10 of
                           instance: GPIO7 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_0_semc_ADDR1:
        result = "_0_semc_ADDR1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_1_flexpwm2_PWMA2:
        result = "_1_flexpwm2_PWMA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_2_gpt5_CAPTURE2:
        result = "_2_gpt5_CAPTURE2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_5_gpio_mux1_IO10:
        result = "_5_gpio_mux1_IO10";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_8_flexio1_FLEXIO10:
        result = "_8_flexio1_FLEXIO10";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_10_gpio7_IO10:
        result = "_10_gpio7_IO10";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_ADDR1", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_0_semc_ADDR1;
    }
    else if ((result = !strncmp(data, "_1_flexpwm2_PWMA2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_1_flexpwm2_PWMA2;
    }
    else if ((result = !strncmp(data, "_2_gpt5_CAPTURE2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_2_gpt5_CAPTURE2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux1_IO10", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_5_gpio_mux1_IO10;
    }
    else if ((result = !strncmp(data, "_8_flexio1_FLEXIO10", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_8_flexio1_FLEXIO10;
    }
    else if ((result = !strncmp(data, "_10_gpio7_IO10", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10_MUX_MODE::_10_gpio7_IO10;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
