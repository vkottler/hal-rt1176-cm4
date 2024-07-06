/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE : uint8_t
{
    _0_sai1_TX_DATA0 /*!< Select mux mode: ALT0 mux port: SAI1_TX_DATA00 of
                        instance: SAI1 */
        ,
    _2_lpspi2_PCS1 = 2 /*!< Select mux mode: ALT2 mux port: LPSPI2_PCS1 of
                          instance: LPSPI2 */
        ,
    _3_flexspi1_A_DATA1 = 3 /*!< Select mux mode: ALT3 mux port:
                               FLEXSPI1_A_DATA01 of instance: FLEXSPI1 */
        ,
    _4_video_mux_CSI_DATA4 =
        4 /*!< Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA04 of
             instance: VIDEO_MUX */
        ,
    _5_gpio_mux3_IO20 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO20
                             of instance: GPIO_MUX3 */
        ,
    _6_kpp_COL7 =
        6 /*!< Select mux mode: ALT6 mux port: KPP_COL07 of instance: KPP */,
    _8_flexio2_FLEXIO21 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D21 of
                               instance: FLEXIO2 */
        ,
    _9_enet_qos_1588_EVENT2_IN =
        9 /*!< Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT2_IN of
             instance: ENET_QOS */
        ,
    _10_gpio9_IO20 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO20 of
                           instance: GPIO9 */
        ,
    _11_flexpwm4_PWMX3 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM4_PWM3_X of instance: FLEXPWM4 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_0_sai1_TX_DATA0:
        result = "_0_sai1_TX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_2_lpspi2_PCS1:
        result = "_2_lpspi2_PCS1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_3_flexspi1_A_DATA1:
        result = "_3_flexspi1_A_DATA1";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_4_video_mux_CSI_DATA4:
        result = "_4_video_mux_CSI_DATA4";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_5_gpio_mux3_IO20:
        result = "_5_gpio_mux3_IO20";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_6_kpp_COL7:
        result = "_6_kpp_COL7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_8_flexio2_FLEXIO21:
        result = "_8_flexio2_FLEXIO21";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_9_enet_qos_1588_EVENT2_IN:
        result = "_9_enet_qos_1588_EVENT2_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_10_gpio9_IO20:
        result = "_10_gpio9_IO20";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_11_flexpwm4_PWMX3:
        result = "_11_flexpwm4_PWMX3";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_sai1_TX_DATA0", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_0_sai1_TX_DATA0;
    }
    else if ((result = !strncmp(data, "_2_lpspi2_PCS1", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_2_lpspi2_PCS1;
    }
    else if ((result = !strncmp(data, "_3_flexspi1_A_DATA1", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_3_flexspi1_A_DATA1;
    }
    else if ((result = !strncmp(data, "_4_video_mux_CSI_DATA4", 22)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_4_video_mux_CSI_DATA4;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO20", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_5_gpio_mux3_IO20;
    }
    else if ((result = !strncmp(data, "_6_kpp_COL7", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_6_kpp_COL7;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO21", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_8_flexio2_FLEXIO21;
    }
    else if ((result = !strncmp(data, "_9_enet_qos_1588_EVENT2_IN", 26)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::
            _9_enet_qos_1588_EVENT2_IN;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO20", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_10_gpio9_IO20;
    }
    else if ((result = !strncmp(data, "_11_flexpwm4_PWMX3", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21_MUX_MODE::_11_flexpwm4_PWMX3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
