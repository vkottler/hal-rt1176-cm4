/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE : uint8_t
{
    _0_semc_RDY /*!< Select mux mode: ALT0 mux port: SEMC_RDY of instance: SEMC
                 */
        ,
    _1_XBAR1_INOUT12 = 1 /*!< Select mux mode: ALT1 mux port: XBAR1_INOUT12 of
                            instance: XBAR1 */
        ,
    _2_mqs_RIGHT =
        2 /*!< Select mux mode: ALT2 mux port: MQS_RIGHT of instance: MQS */,
    _3_lpuart6_TX = 3 /*!< Select mux mode: ALT3 mux port: LPUART6_TXD of
                         instance: LPUART6 */
        ,
    _5_gpio_mux2_IO8 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO08 of
                            instance: GPIO_MUX2 */
        ,
    _7_enet_1g_MDC = 7 /*!< Select mux mode: ALT7 mux port: ENET_1G_MDC of
                          instance: ENET_1G */
        ,
    _9_CCM_CLKO1 =
        9 /*!< Select mux mode: ALT9 mux port: CCM_CLKO1 of instance: CCM */,
    _10_gpio8_IO8 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO08 of
                          instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_0_semc_RDY:
        result = "_0_semc_RDY";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_1_XBAR1_INOUT12:
        result = "_1_XBAR1_INOUT12";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_2_mqs_RIGHT:
        result = "_2_mqs_RIGHT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_3_lpuart6_TX:
        result = "_3_lpuart6_TX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_5_gpio_mux2_IO8:
        result = "_5_gpio_mux2_IO8";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_7_enet_1g_MDC:
        result = "_7_enet_1g_MDC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_9_CCM_CLKO1:
        result = "_9_CCM_CLKO1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_10_gpio8_IO8:
        result = "_10_gpio8_IO8";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_RDY", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_0_semc_RDY;
    }
    else if ((result = !strncmp(data, "_1_XBAR1_INOUT12", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_1_XBAR1_INOUT12;
    }
    else if ((result = !strncmp(data, "_2_mqs_RIGHT", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_2_mqs_RIGHT;
    }
    else if ((result = !strncmp(data, "_3_lpuart6_TX", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_3_lpuart6_TX;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO8", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_5_gpio_mux2_IO8;
    }
    else if ((result = !strncmp(data, "_7_enet_1g_MDC", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_7_enet_1g_MDC;
    }
    else if ((result = !strncmp(data, "_9_CCM_CLKO1", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_9_CCM_CLKO1;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO8", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40_MUX_MODE::_10_gpio8_IO8;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
