/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA23 /*!< Select mux mode: ALT0 mux port:
                                 VIDEO_MUX_LCDIF_DATA23 of instance: VIDEO_MUX
                               */
        ,
    _1_EMVSIM2_POWER_FAIL = 1 /*!< Select mux mode: ALT1 mux port:
                                 EMVSIM2_POWER_FAIL of instance: EMVSIM2 */
        ,
    _2_WDOG1_B =
        2 /*!< Select mux mode: ALT2 mux port: WDOG1_B of instance: WDOG1 */,
    _3_video_mux_EXT_DCIC2 = 3 /*!< Select mux mode: ALT3 mux port:
                                  VIDEO_MUX_EXT_DCIC2 of instance: VIDEO_MUX */
        ,
    _4_pit1_TRIGGER0 = 4 /*!< Select mux mode: ALT4 mux port: PIT1_TRIGGER0 of
                            instance: PIT1 */
        ,
    _5_gpio_mux5_IO16 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO16
                             of instance: GPIO_MUX5 */
        ,
    _6_can1_RX = 6 /*!< Select mux mode: ALT6 mux port: FLEXCAN1_RX of
                      instance: FLEXCAN1 */
        ,
    _8_enet_qos_1588_EVENT0_AUX_IN =
        8 /*!< Select mux mode: ALT8 mux port: ENET_QOS_1588_EVENT0_AUX_IN of
             instance: ENET_QOS */
        ,
    _9_lpspi4_PCS0 = 9 /*!< Select mux mode: ALT9 mux port: LPSPI4_PCS0 of
                          instance: LPSPI4 */
        ,
    _10_gpio11_IO16 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO16 of
                            instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
        _0_video_mux_LCDIF_DATA23:
        result = "_0_video_mux_LCDIF_DATA23";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_1_EMVSIM2_POWER_FAIL:
        result = "_1_EMVSIM2_POWER_FAIL";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_2_WDOG1_B:
        result = "_2_WDOG1_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
        _3_video_mux_EXT_DCIC2:
        result = "_3_video_mux_EXT_DCIC2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_4_pit1_TRIGGER0:
        result = "_4_pit1_TRIGGER0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_5_gpio_mux5_IO16:
        result = "_5_gpio_mux5_IO16";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_6_can1_RX:
        result = "_6_can1_RX";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
        _8_enet_qos_1588_EVENT0_AUX_IN:
        result = "_8_enet_qos_1588_EVENT0_AUX_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_9_lpspi4_PCS0:
        result = "_9_lpspi4_PCS0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_10_gpio11_IO16:
        result = "_10_gpio11_IO16";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA23", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
            _0_video_mux_LCDIF_DATA23;
    }
    else if ((result = !strncmp(data, "_1_EMVSIM2_POWER_FAIL", 21)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
            _1_EMVSIM2_POWER_FAIL;
    }
    else if ((result = !strncmp(data, "_2_WDOG1_B", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_2_WDOG1_B;
    }
    else if ((result = !strncmp(data, "_3_video_mux_EXT_DCIC2", 22)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
            _3_video_mux_EXT_DCIC2;
    }
    else if ((result = !strncmp(data, "_4_pit1_TRIGGER0", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_4_pit1_TRIGGER0;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO16", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_5_gpio_mux5_IO16;
    }
    else if ((result = !strncmp(data, "_6_can1_RX", 10)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_6_can1_RX;
    }
    else if ((result = !strncmp(data, "_8_enet_qos_1588_EVENT0_AUX_IN", 30)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::
            _8_enet_qos_1588_EVENT0_AUX_IN;
    }
    else if ((result = !strncmp(data, "_9_lpspi4_PCS0", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_9_lpspi4_PCS0;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO16", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15_MUX_MODE::_10_gpio11_IO16;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4