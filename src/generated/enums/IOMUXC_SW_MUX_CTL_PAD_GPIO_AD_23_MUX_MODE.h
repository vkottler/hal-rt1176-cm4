/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE : uint8_t
{
    _0_sai1_TX_SYNC /*!< Select mux mode: ALT0 mux port: SAI1_TX_SYNC of
                       instance: SAI1 */
        ,
    _2_lpspi2_PCS3 = 2 /*!< Select mux mode: ALT2 mux port: LPSPI2_PCS3 of
                          instance: LPSPI2 */
        ,
    _3_flexspi1_A_DATA3 = 3 /*!< Select mux mode: ALT3 mux port:
                               FLEXSPI1_A_DATA03 of instance: FLEXSPI1 */
        ,
    _4_video_mux_CSI_DATA2 =
        4 /*!< Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA02 of
             instance: VIDEO_MUX */
        ,
    _5_gpio_mux3_IO22 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO22
                             of instance: GPIO_MUX3 */
        ,
    _6_kpp_COL6 =
        6 /*!< Select mux mode: ALT6 mux port: KPP_COL06 of instance: KPP */,
    _8_flexio2_FLEXIO23 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D23 of
                               instance: FLEXIO2 */
        ,
    _9_enet_qos_1588_EVENT3_IN =
        9 /*!< Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT3_IN of
             instance: ENET_QOS */
        ,
    _10_gpio9_IO22 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO22 of
                           instance: GPIO9 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_0_sai1_TX_SYNC:
        result = "_0_sai1_TX_SYNC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_2_lpspi2_PCS3:
        result = "_2_lpspi2_PCS3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_3_flexspi1_A_DATA3:
        result = "_3_flexspi1_A_DATA3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_4_video_mux_CSI_DATA2:
        result = "_4_video_mux_CSI_DATA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_5_gpio_mux3_IO22:
        result = "_5_gpio_mux3_IO22";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_6_kpp_COL6:
        result = "_6_kpp_COL6";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_8_flexio2_FLEXIO23:
        result = "_8_flexio2_FLEXIO23";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_9_enet_qos_1588_EVENT3_IN:
        result = "_9_enet_qos_1588_EVENT3_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_10_gpio9_IO22:
        result = "_10_gpio9_IO22";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_sai1_TX_SYNC", 15)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_0_sai1_TX_SYNC;
    }
    else if ((result = !strncmp(data, "_2_lpspi2_PCS3", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_2_lpspi2_PCS3;
    }
    else if ((result = !strncmp(data, "_3_flexspi1_A_DATA3", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_3_flexspi1_A_DATA3;
    }
    else if ((result = !strncmp(data, "_4_video_mux_CSI_DATA2", 22)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_4_video_mux_CSI_DATA2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO22", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_5_gpio_mux3_IO22;
    }
    else if ((result = !strncmp(data, "_6_kpp_COL6", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_6_kpp_COL6;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO23", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_8_flexio2_FLEXIO23;
    }
    else if ((result = !strncmp(data, "_9_enet_qos_1588_EVENT3_IN", 26)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::
            _9_enet_qos_1588_EVENT3_IN;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO22", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23_MUX_MODE::_10_gpio9_IO22;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
