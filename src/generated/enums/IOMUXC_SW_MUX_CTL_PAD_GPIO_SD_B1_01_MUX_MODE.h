/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE : uint8_t
{
    _0_usdhc1_CLK /*!< Select mux mode: ALT0 mux port: USDHC1_CLK of instance:
                     USDHC1 */
        ,
    _2_XBAR1_INOUT21 = 2 /*!< Select mux mode: ALT2 mux port: XBAR1_INOUT21 of
                            instance: XBAR1 */
        ,
    _3_gpt4_CAPTURE2 = 3 /*!< Select mux mode: ALT3 mux port: GPT4_CAPTURE2 of
                            instance: GPT4 */
        ,
    _5_gpio_mux4_IO4 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO04 of
                            instance: GPIO_MUX4 */
        ,
    _6_flexspi2_A_SCLK = 6 /*!< Select mux mode: ALT6 mux port: FLEXSPI2_A_SCLK
                              of instance: FLEXSPI2 */
        ,
    _8_kpp_COL7 =
        8 /*!< Select mux mode: ALT8 mux port: KPP_COL07 of instance: KPP */,
    _10_gpio10_IO4 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO04 of
                           instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_0_usdhc1_CLK:
        result = "_0_usdhc1_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_2_XBAR1_INOUT21:
        result = "_2_XBAR1_INOUT21";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_3_gpt4_CAPTURE2:
        result = "_3_gpt4_CAPTURE2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_5_gpio_mux4_IO4:
        result = "_5_gpio_mux4_IO4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_6_flexspi2_A_SCLK:
        result = "_6_flexspi2_A_SCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_8_kpp_COL7:
        result = "_8_kpp_COL7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_10_gpio10_IO4:
        result = "_10_gpio10_IO4";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usdhc1_CLK", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_0_usdhc1_CLK;
    }
    else if ((result = !strncmp(data, "_2_XBAR1_INOUT21", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_2_XBAR1_INOUT21;
    }
    else if ((result = !strncmp(data, "_3_gpt4_CAPTURE2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_3_gpt4_CAPTURE2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO4", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_5_gpio_mux4_IO4;
    }
    else if ((result = !strncmp(data, "_6_flexspi2_A_SCLK", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_6_flexspi2_A_SCLK;
    }
    else if ((result = !strncmp(data, "_8_kpp_COL7", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_8_kpp_COL7;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO4", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01_MUX_MODE::_10_gpio10_IO4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4