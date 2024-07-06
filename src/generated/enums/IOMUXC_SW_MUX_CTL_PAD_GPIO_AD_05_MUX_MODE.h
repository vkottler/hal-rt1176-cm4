/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE : uint8_t
{
    _0_EMVSIM1_POWER_FAIL /*!< Select mux mode: ALT0 mux port:
                             EMVSIM1_POWER_FAIL of instance: EMVSIM1 */
        ,
    _1_lpuart8_RTS_B = 1 /*!< Select mux mode: ALT1 mux port: LPUART8_RTS_B of
                            instance: LPUART8 */
        ,
    _2_enet_1g_1588_EVENT3_OUT =
        2 /*!< Select mux mode: ALT2 mux port: ENET_1G_1588_EVENT3_OUT of
             instance: ENET_1G */
        ,
    _3_gpt2_CLK =
        3 /*!< Select mux mode: ALT3 mux port: GPT2_CLK of instance: GPT2 */,
    _4_flexpwm1_PWMB2 = 4 /*!< Select mux mode: ALT4 mux port: FLEXPWM1_PWM2_B
                             of instance: FLEXPWM1 */
        ,
    _5_gpio_mux3_IO4 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO04 of
                            instance: GPIO_MUX3 */
        ,
    _6_WDOG2_B =
        6 /*!< Select mux mode: ALT6 mux port: WDOG2_B of instance: WDOG2 */,
    _8_flexio2_FLEXIO5 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D05 of
                              instance: FLEXIO2 */
        ,
    _9_qtimer4_TIMER1 =
        9 /*!< Select mux mode: ALT9 mux port: TMR4_TIMER1 of instance: TMR4 */
        ,
    _10_gpio9_IO4 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO04 of
                          instance: GPIO9 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_0_EMVSIM1_POWER_FAIL:
        result = "_0_EMVSIM1_POWER_FAIL";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_1_lpuart8_RTS_B:
        result = "_1_lpuart8_RTS_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_2_enet_1g_1588_EVENT3_OUT:
        result = "_2_enet_1g_1588_EVENT3_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_3_gpt2_CLK:
        result = "_3_gpt2_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_4_flexpwm1_PWMB2:
        result = "_4_flexpwm1_PWMB2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_5_gpio_mux3_IO4:
        result = "_5_gpio_mux3_IO4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_6_WDOG2_B:
        result = "_6_WDOG2_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_8_flexio2_FLEXIO5:
        result = "_8_flexio2_FLEXIO5";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_9_qtimer4_TIMER1:
        result = "_9_qtimer4_TIMER1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_10_gpio9_IO4:
        result = "_10_gpio9_IO4";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_EMVSIM1_POWER_FAIL", 21)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_0_EMVSIM1_POWER_FAIL;
    }
    else if ((result = !strncmp(data, "_1_lpuart8_RTS_B", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_1_lpuart8_RTS_B;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_1588_EVENT3_OUT", 26)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::
            _2_enet_1g_1588_EVENT3_OUT;
    }
    else if ((result = !strncmp(data, "_3_gpt2_CLK", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_3_gpt2_CLK;
    }
    else if ((result = !strncmp(data, "_4_flexpwm1_PWMB2", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_4_flexpwm1_PWMB2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO4", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_5_gpio_mux3_IO4;
    }
    else if ((result = !strncmp(data, "_6_WDOG2_B", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_6_WDOG2_B;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO5", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_8_flexio2_FLEXIO5;
    }
    else if ((result = !strncmp(data, "_9_qtimer4_TIMER1", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_9_qtimer4_TIMER1;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO4", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_05_MUX_MODE::_10_gpio9_IO4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4