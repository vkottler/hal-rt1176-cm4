/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE : uint8_t
{
    _0_video_mux_LCDIF_DATA4 /*!< Select mux mode: ALT0 mux port:
                                VIDEO_MUX_LCDIF_DATA04 of instance: VIDEO_MUX
                              */
        ,
    _1_ENET_1G_TX_DATA1 = 1 /*!< Select mux mode: ALT1 mux port:
                               ENET_1G_TX_DATA01 of instance: ENET_1G */
        ,
    _2_usdhc1_CD_B = 2 /*!< Select mux mode: ALT2 mux port: USDHC1_CD_B of
                          instance: USDHC1 */
        ,
    _3_qtimer3_TIMER2 =
        3 /*!< Select mux mode: ALT3 mux port: TMR3_TIMER2 of instance: TMR3 */
        ,
    _4_XBAR1_INOUT34 = 4 /*!< Select mux mode: ALT4 mux port: XBAR1_INOUT34 of
                            instance: XBAR1 */
        ,
    _5_gpio_mux4_IO29 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX4_IO29
                             of instance: GPIO_MUX4 */
        ,
    _6_src_BT_CFG2 =
        6 /*!< Select mux mode: ALT6 mux port: SRC_BT_CFG02 of instance: SRC */
        ,
    _8_ENET_QOS_TX_DATA1 = 8 /*!< Select mux mode: ALT8 mux port:
                                ENET_QOS_TX_DATA01 of instance: ENET_QOS */
        ,
    _9_lpspi3_PCS1 = 9 /*!< Select mux mode: ALT9 mux port: LPSPI3_PCS1 of
                          instance: LPSPI3 */
        ,
    _10_gpio10_IO29 = 10 /*!< Select mux mode: ALT10 mux port: GPIO10_IO29 of
                            instance: GPIO10 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::
        _0_video_mux_LCDIF_DATA4:
        result = "_0_video_mux_LCDIF_DATA4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_1_ENET_1G_TX_DATA1:
        result = "_1_ENET_1G_TX_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_2_usdhc1_CD_B:
        result = "_2_usdhc1_CD_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_3_qtimer3_TIMER2:
        result = "_3_qtimer3_TIMER2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_4_XBAR1_INOUT34:
        result = "_4_XBAR1_INOUT34";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_5_gpio_mux4_IO29:
        result = "_5_gpio_mux4_IO29";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_6_src_BT_CFG2:
        result = "_6_src_BT_CFG2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_8_ENET_QOS_TX_DATA1:
        result = "_8_ENET_QOS_TX_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_9_lpspi3_PCS1:
        result = "_9_lpspi3_PCS1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_10_gpio10_IO29:
        result = "_10_gpio10_IO29";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_video_mux_LCDIF_DATA4", 24)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::
            _0_video_mux_LCDIF_DATA4;
    }
    else if ((result = !strncmp(data, "_1_ENET_1G_TX_DATA1", 19)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::
            _1_ENET_1G_TX_DATA1;
    }
    else if ((result = !strncmp(data, "_2_usdhc1_CD_B", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_2_usdhc1_CD_B;
    }
    else if ((result = !strncmp(data, "_3_qtimer3_TIMER2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_3_qtimer3_TIMER2;
    }
    else if ((result = !strncmp(data, "_4_XBAR1_INOUT34", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_4_XBAR1_INOUT34;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux4_IO29", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_5_gpio_mux4_IO29;
    }
    else if ((result = !strncmp(data, "_6_src_BT_CFG2", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_6_src_BT_CFG2;
    }
    else if ((result = !strncmp(data, "_8_ENET_QOS_TX_DATA1", 20)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::
            _8_ENET_QOS_TX_DATA1;
    }
    else if ((result = !strncmp(data, "_9_lpspi3_PCS1", 14)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_9_lpspi3_PCS1;
    }
    else if ((result = !strncmp(data, "_10_gpio10_IO29", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_08_MUX_MODE::_10_gpio10_IO29;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
