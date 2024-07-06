/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE : uint8_t
{
    _0_semc_DM3 /*!< Select mux mode: ALT0 mux port: SEMC_DM03 of instance:
                   SEMC */
        ,
    _1_XBAR1_INOUT15 = 1 /*!< Select mux mode: ALT1 mux port: XBAR1_INOUT15 of
                            instance: XBAR1 */
        ,
    _2_enet_1g_RX_EN = 2 /*!< Select mux mode: ALT2 mux port: ENET_1G_RX_EN of
                            instance: ENET_1G */
        ,
    _3_sai3_MCLK =
        3 /*!< Select mux mode: ALT3 mux port: SAI3_MCLK of instance: SAI3 */,
    _4_flexspi2_A_DATA4 = 4 /*!< Select mux mode: ALT4 mux port:
                               FLEXSPI2_A_DATA04 of instance: FLEXSPI2 */
        ,
    _5_gpio_mux2_IO27 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO27
                             of instance: GPIO_MUX2 */
        ,
    _8_WDOG1_ANY =
        8 /*!< Select mux mode: ALT8 mux port: WDOG1_ANY of instance: WDOG1 */,
    _9_qtimer3_TIMER0 =
        9 /*!< Select mux mode: ALT9 mux port: TMR3_TIMER0 of instance: TMR3 */
        ,
    _10_gpio8_IO27 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO27 of
                           instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_0_semc_DM3:
        result = "_0_semc_DM3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_1_XBAR1_INOUT15:
        result = "_1_XBAR1_INOUT15";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_2_enet_1g_RX_EN:
        result = "_2_enet_1g_RX_EN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_3_sai3_MCLK:
        result = "_3_sai3_MCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_4_flexspi2_A_DATA4:
        result = "_4_flexspi2_A_DATA4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_5_gpio_mux2_IO27:
        result = "_5_gpio_mux2_IO27";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_8_WDOG1_ANY:
        result = "_8_WDOG1_ANY";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_9_qtimer3_TIMER0:
        result = "_9_qtimer3_TIMER0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_10_gpio8_IO27:
        result = "_10_gpio8_IO27";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DM3", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_0_semc_DM3;
    }
    else if ((result = !strncmp(data, "_1_XBAR1_INOUT15", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_1_XBAR1_INOUT15;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_RX_EN", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_2_enet_1g_RX_EN;
    }
    else if ((result = !strncmp(data, "_3_sai3_MCLK", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_3_sai3_MCLK;
    }
    else if ((result = !strncmp(data, "_4_flexspi2_A_DATA4", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_4_flexspi2_A_DATA4;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO27", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_5_gpio_mux2_IO27;
    }
    else if ((result = !strncmp(data, "_8_WDOG1_ANY", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_8_WDOG1_ANY;
    }
    else if ((result = !strncmp(data, "_9_qtimer3_TIMER0", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_9_qtimer3_TIMER0;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO27", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17_MUX_MODE::_10_gpio8_IO27;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
