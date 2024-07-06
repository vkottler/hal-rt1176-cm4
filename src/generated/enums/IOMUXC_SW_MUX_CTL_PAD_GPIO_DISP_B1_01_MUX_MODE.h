/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_ENABLE /*!< Select mux mode: ALT0 mux port:
                                 VIDEO_MUX_LCDIF_ENABLE of instance: VIDEO_MUX
                               */
        ,
    _1_enet_1g_RX_CLK = 1 /*!< Select mux mode: ALT1 mux port: ENET_1G_RX_CLK
                             of instance: ENET_1G */
        ,
    _2_enet_1g_RX_ER = 2 /*!< Select mux mode: ALT2 mux port: ENET_1G_RX_ER of
                            instance: ENET_1G */
        ,
    _3_qtimer1_TIMER1 =
        3 /*!< Select mux mode: ALT3 mux port: TMR1_TIMER1 of instance: TMR1 */
        ,
    _4_XBAR1_INOUT27 = 4 /*!< Select mux mode: ALT4 mux port: XBAR1_INOUT27 of
                            instance: XBAR1 */
        ,
    _5_gpio_mux4_IO22 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO22
                             of instance: GPIO_MUX4 */
        ,
    _8_CCM_enet_qos_clock_generate_RX_CLK =
        8 /*!< Select mux mode: ALT8 mux port: ENET_QOS_RX_CLK of instance:
             ENET_QOS */
        ,
    _9_enet_qos_RX_ER = 9 /*!< Select mux mode: ALT9 mux port: ENET_QOS_RX_ER
                             of instance: ENET_QOS */
        ,
    _10_gpio10_IO22 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO22 of
                            instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::
        _0_video_mux_LCDIF_ENABLE:
        result = "_0_video_mux_LCDIF_ENABLE";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_1_enet_1g_RX_CLK:
        result = "_1_enet_1g_RX_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_2_enet_1g_RX_ER:
        result = "_2_enet_1g_RX_ER";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_3_qtimer1_TIMER1:
        result = "_3_qtimer1_TIMER1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_4_XBAR1_INOUT27:
        result = "_4_XBAR1_INOUT27";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_5_gpio_mux4_IO22:
        result = "_5_gpio_mux4_IO22";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::
        _8_CCM_enet_qos_clock_generate_RX_CLK:
        result = "_8_CCM_enet_qos_clock_generate_RX_CLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_9_enet_qos_RX_ER:
        result = "_9_enet_qos_RX_ER";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_10_gpio10_IO22:
        result = "_10_gpio10_IO22";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_ENABLE", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::
            _0_video_mux_LCDIF_ENABLE;
    }
    else if ((result = !strncmp(data, "_1_enet_1g_RX_CLK", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_1_enet_1g_RX_CLK;
    }
    else if ((result = !strncmp(data, "_2_enet_1g_RX_ER", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_2_enet_1g_RX_ER;
    }
    else if ((result = !strncmp(data, "_3_qtimer1_TIMER1", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_3_qtimer1_TIMER1;
    }
    else if ((result = !strncmp(data, "_4_XBAR1_INOUT27", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_4_XBAR1_INOUT27;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO22", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_5_gpio_mux4_IO22;
    }
    else if ((result =
                  !strncmp(data, "_8_CCM_enet_qos_clock_generate_RX_CLK", 37)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::
            _8_CCM_enet_qos_clock_generate_RX_CLK;
    }
    else if ((result = !strncmp(data, "_9_enet_qos_RX_ER", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_9_enet_qos_RX_ER;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO22", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_01_MUX_MODE::_10_gpio10_IO22;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
