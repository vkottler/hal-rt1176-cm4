/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE : uint8_t
{
    _0_sai1_RX_DATA0 /*!< Select mux mode: ALT0 mux port: SAI1_RX_DATA00 of
                        instance: SAI1 */
        ,
    _1_ACMP4_OUT =
        1 /*!< Select mux mode: ALT1 mux port: ACMP4_OUT of instance: ACMP4 */,
    _2_lpspi1_PCS3 = 2 /*!< Select mux mode: ALT2 mux port: LPSPI1_PCS3 of
                          instance: LPSPI1 */
        ,
    _3_flexspi1_A_DATA0 = 3 /*!< Select mux mode: ALT3 mux port:
                               FLEXSPI1_A_DATA00 of instance: FLEXSPI1 */
        ,
    _4_video_mux_CSI_DATA5 =
        4 /*!< Select mux mode: ALT4 mux port: VIDEO_MUX_CSI_DATA05 of
             instance: VIDEO_MUX */
        ,
    _5_gpio_mux3_IO19 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX3_IO19
                             of instance: GPIO_MUX3 */
        ,
    _6_kpp_ROW7 =
        6 /*!< Select mux mode: ALT6 mux port: KPP_ROW07 of instance: KPP */,
    _8_flexio2_FLEXIO20 = 8 /*!< Select mux mode: ALT8 mux port: FLEXIO2_D20 of
                               instance: FLEXIO2 */
        ,
    _9_enet_qos_1588_EVENT2_OUT =
        9 /*!< Select mux mode: ALT9 mux port: ENET_QOS_1588_EVENT2_OUT of
             instance: ENET_QOS */
        ,
    _10_gpio9_IO19 = 10 /*!< Select mux mode: ALT10 mux port: GPIO9_IO19 of
                           instance: GPIO9 */
        ,
    _11_flexpwm4_PWMX2 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM4_PWM2_X of instance: FLEXPWM4 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE instance)
{
    const char *result = "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_0_sai1_RX_DATA0:
        result = "_0_sai1_RX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_1_ACMP4_OUT:
        result = "_1_ACMP4_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_2_lpspi1_PCS3:
        result = "_2_lpspi1_PCS3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_3_flexspi1_A_DATA0:
        result = "_3_flexspi1_A_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_4_video_mux_CSI_DATA5:
        result = "_4_video_mux_CSI_DATA5";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_5_gpio_mux3_IO19:
        result = "_5_gpio_mux3_IO19";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_6_kpp_ROW7:
        result = "_6_kpp_ROW7";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_8_flexio2_FLEXIO20:
        result = "_8_flexio2_FLEXIO20";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::
        _9_enet_qos_1588_EVENT2_OUT:
        result = "_9_enet_qos_1588_EVENT2_OUT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_10_gpio9_IO19:
        result = "_10_gpio9_IO19";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_11_flexpwm4_PWMX2:
        result = "_11_flexpwm4_PWMX2";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_sai1_RX_DATA0", 16)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_0_sai1_RX_DATA0;
    }
    else if ((result = !strncmp(data, "_1_ACMP4_OUT", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_1_ACMP4_OUT;
    }
    else if ((result = !strncmp(data, "_2_lpspi1_PCS3", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_2_lpspi1_PCS3;
    }
    else if ((result = !strncmp(data, "_3_flexspi1_A_DATA0", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_3_flexspi1_A_DATA0;
    }
    else if ((result = !strncmp(data, "_4_video_mux_CSI_DATA5", 22)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_4_video_mux_CSI_DATA5;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux3_IO19", 17)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_5_gpio_mux3_IO19;
    }
    else if ((result = !strncmp(data, "_6_kpp_ROW7", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_6_kpp_ROW7;
    }
    else if ((result = !strncmp(data, "_8_flexio2_FLEXIO20", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_8_flexio2_FLEXIO20;
    }
    else if ((result = !strncmp(data, "_9_enet_qos_1588_EVENT2_OUT", 27)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::
            _9_enet_qos_1588_EVENT2_OUT;
    }
    else if ((result = !strncmp(data, "_10_gpio9_IO19", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_10_gpio9_IO19;
    }
    else if ((result = !strncmp(data, "_11_flexpwm4_PWMX2", 18)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20_MUX_MODE::_11_flexpwm4_PWMX2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
