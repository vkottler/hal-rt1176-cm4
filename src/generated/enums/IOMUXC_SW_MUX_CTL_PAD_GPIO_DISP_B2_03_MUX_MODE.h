/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA11 /*!< Select mux mode: ALT0 mux port:
                                 VIDEO_MUX_LCDIF_DATA11 of instance: VIDEO_MUX
                               */
        ,
    _1_ENET_TX_DATA1 = 1 /*!< Select mux mode: ALT1 mux port: ENET_TX_DATA01 of
                            instance: ENET */
        ,
    _2_pit1_TRIGGER2 = 2 /*!< Select mux mode: ALT2 mux port: PIT1_TRIGGER2 of
                            instance: PIT1 */
        ,
    _3_ARM_TRACE1 =
        3 /*!< Select mux mode: ALT3 mux port: ARM_TRACE01 of instance: ARM */,
    _4_sai1_MCLK =
        4 /*!< Select mux mode: ALT4 mux port: SAI1_MCLK of instance: SAI1 */,
    _5_gpio_mux5_IO4 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX5_IO04 of
                            instance: GPIO_MUX5 */
        ,
    _6_src_BT_CFG9 =
        6 /*!< Select mux mode: ALT6 mux port: SRC_BT_CFG09 of instance: SRC */
        ,
    _8_ENET_QOS_TX_DATA1 = 8 /*!< Select mux mode: ALT8 mux port:
                                ENET_QOS_TX_DATA01 of instance: ENET_QOS */
        ,
    _10_gpio11_IO4 = 10 /*!< Select mux mode: ALT10 mux port: GPIO11_IO04 of
                           instance: GPIO11 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::
        _0_video_mux_LCDIF_DATA11:
        result = "_0_video_mux_LCDIF_DATA11";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_1_ENET_TX_DATA1:
        result = "_1_ENET_TX_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_2_pit1_TRIGGER2:
        result = "_2_pit1_TRIGGER2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_3_ARM_TRACE1:
        result = "_3_ARM_TRACE1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_4_sai1_MCLK:
        result = "_4_sai1_MCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_5_gpio_mux5_IO4:
        result = "_5_gpio_mux5_IO4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_6_src_BT_CFG9:
        result = "_6_src_BT_CFG9";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_8_ENET_QOS_TX_DATA1:
        result = "_8_ENET_QOS_TX_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_10_gpio11_IO4:
        result = "_10_gpio11_IO4";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA11", 25)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::
            _0_video_mux_LCDIF_DATA11;
    }
    else if ((result = !strncmp(data, "_1_ENET_TX_DATA1", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_1_ENET_TX_DATA1;
    }
    else if ((result = !strncmp(data, "_2_pit1_TRIGGER2", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_2_pit1_TRIGGER2;
    }
    else if ((result = !strncmp(data, "_3_ARM_TRACE1", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_3_ARM_TRACE1;
    }
    else if ((result = !strncmp(data, "_4_sai1_MCLK", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_4_sai1_MCLK;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux5_IO4", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_5_gpio_mux5_IO4;
    }
    else if ((result = !strncmp(data, "_6_src_BT_CFG9", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_6_src_BT_CFG9;
    }
    else if ((result = !strncmp(data, "_8_ENET_QOS_TX_DATA1", 20)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::
            _8_ENET_QOS_TX_DATA1;
    }
    else if ((result = !strncmp(data, "_10_gpio11_IO4", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_03_MUX_MODE::_10_gpio11_IO4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
