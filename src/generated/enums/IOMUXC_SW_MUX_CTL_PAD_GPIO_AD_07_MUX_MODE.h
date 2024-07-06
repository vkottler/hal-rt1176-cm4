/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE : uint8_t
{
    _0_usb_OTG2_PWR /*!< Select mux mode: ALT0 mux port: USB_OTG2_PWR of
                       instance: USB */
        ,
    _1_can1_RX = 1 /*!< Select mux mode: ALT1 mux port: FLEXCAN1_RX of
                      instance: FLEXCAN1 */
        ,
    _2_EMVSIM2_CLK = 2 /*!< Select mux mode: ALT2 mux port: EMVSIM2_CLK of
                          instance: EMVSIM2 */
        ,
    _3_gpt3_CAPTURE2 = 3 /*!< Select mux mode: ALT3 mux port: GPT3_CAPTURE2 of
                            instance: GPT3 */
        ,
    _4_video_mux_CSI_DATA14 =
        4 /*!< Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA14 of
             instance: VIDEO_MUX */
        ,
    _5_gpio_mux3_IO6 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO06 of
                            instance: GPIO_MUX3 */
        ,
    _6_enet_1588_EVENT1_OUT = 6 /*!< Select mux mode: ALT6 mux port:
                                   ENET_1588_EVENT1_OUT of instance: ENET */
        ,
    _8_flexio2_FLEXIO7 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D07 of
                              instance: FLEXIO2 */
        ,
    _9_qtimer4_TIMER3 =
        9 /*!< Select mux mode: ALT9 mux port: TMR4_TIMER3 of instance: TMR4 */
        ,
    _10_gpio9_IO6 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO06 of
                          instance: GPIO9 */
        ,
    _11_flexpwm1_PWMX1 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM1_PWM1_X of instance: FLEXPWM1 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_0_usb_OTG2_PWR:
        result = "_0_usb_OTG2_PWR";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_1_can1_RX:
        result = "_1_can1_RX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_2_EMVSIM2_CLK:
        result = "_2_EMVSIM2_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_3_gpt3_CAPTURE2:
        result = "_3_gpt3_CAPTURE2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_4_video_mux_CSI_DATA14:
        result = "_4_video_mux_CSI_DATA14";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_5_gpio_mux3_IO6:
        result = "_5_gpio_mux3_IO6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_6_enet_1588_EVENT1_OUT:
        result = "_6_enet_1588_EVENT1_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_8_flexio2_FLEXIO7:
        result = "_8_flexio2_FLEXIO7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_9_qtimer4_TIMER3:
        result = "_9_qtimer4_TIMER3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_10_gpio9_IO6:
        result = "_10_gpio9_IO6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_11_flexpwm1_PWMX1:
        result = "_11_flexpwm1_PWMX1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_usb_OTG2_PWR", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_0_usb_OTG2_PWR;
    }
    else if ((result = !strncmp(data, "_1_can1_RX", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_1_can1_RX;
    }
    else if ((result = !strncmp(data, "_2_EMVSIM2_CLK", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_2_EMVSIM2_CLK;
    }
    else if ((result = !strncmp(data, "_3_gpt3_CAPTURE2", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_3_gpt3_CAPTURE2;
    }
    else if ((result = !strncmp(data, "_4_video_mux_CSI_DATA14", 23)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_4_video_mux_CSI_DATA14;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO6", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_5_gpio_mux3_IO6;
    }
    else if ((result = !strncmp(data, "_6_enet_1588_EVENT1_OUT", 23)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_6_enet_1588_EVENT1_OUT;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO7", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_8_flexio2_FLEXIO7;
    }
    else if ((result = !strncmp(data, "_9_qtimer4_TIMER3", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_9_qtimer4_TIMER3;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO6", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_10_gpio9_IO6;
    }
    else if ((result = !strncmp(data, "_11_flexpwm1_PWMX1", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_07_MUX_MODE::_11_flexpwm1_PWMX1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4