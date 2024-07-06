/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE : uint8_t
{
    _0_semc_DATA20 /*!< Select mux mode: ALT0 mux port: SEMC_DATA20 of
                      instance: SEMC */
        ,
    _1_usdhc2_RESET_B = 1 /*!< Select mux mode: ALT1 mux port: USDHC2_RESET_B
                             of instance: USDHC2 */
        ,
    _2_sai2_MCLK =
        2 /*!< Select mux mode: ALT2 mux port: SAI2_MCLK of instance: SAI2 */,
    _3_video_mux_CSI_DATA21 =
        3 /*!< Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA21 of
             instance: VIDEO_MUX */
        ,
    _4_flexspi2_B_DATA2 = 4 /*!< Select mux mode: ALT4 mux port:
                               FLEXSPI2_B_DATA02 of instance: FLEXSPI2 */
        ,
    _5_gpio_mux2_IO14 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO14
                             of instance: GPIO_MUX2 */
        ,
    _6_XBAR1_INOUT24 = 6 /*!< Select mux mode: ALT6 mux port: XBAR1_INOUT24 of
                            instance: XBAR1 */
        ,
    _7_ENET_1G_TX_DATA2 = 7 /*!< Select mux mode: ALT7 mux port:
                               ENET_1G_TX_DATA02 of instance: ENET_1G */
        ,
    _8_lpspi3_SCK = 8 /*!< Select mux mode: ALT8 mux port: LPSPI3_SCK of
                         instance: LPSPI3 */
        ,
    _10_gpio8_IO14 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO14 of
                           instance: GPIO8 */
        ,
    _11_flexpwm3_PWMA2 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM3_PWM2_A of instance: FLEXPWM3 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_0_semc_DATA20:
        result = "_0_semc_DATA20";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_1_usdhc2_RESET_B:
        result = "_1_usdhc2_RESET_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_2_sai2_MCLK:
        result = "_2_sai2_MCLK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::
        _3_video_mux_CSI_DATA21:
        result = "_3_video_mux_CSI_DATA21";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_4_flexspi2_B_DATA2:
        result = "_4_flexspi2_B_DATA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_5_gpio_mux2_IO14:
        result = "_5_gpio_mux2_IO14";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_6_XBAR1_INOUT24:
        result = "_6_XBAR1_INOUT24";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_7_ENET_1G_TX_DATA2:
        result = "_7_ENET_1G_TX_DATA2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_8_lpspi3_SCK:
        result = "_8_lpspi3_SCK";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_10_gpio8_IO14:
        result = "_10_gpio8_IO14";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_11_flexpwm3_PWMA2:
        result = "_11_flexpwm3_PWMA2";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA20", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_0_semc_DATA20;
    }
    else if ((result = !strncmp(data, "_1_usdhc2_RESET_B", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_1_usdhc2_RESET_B;
    }
    else if ((result = !strncmp(data, "_2_sai2_MCLK", 12)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_2_sai2_MCLK;
    }
    else if ((result = !strncmp(data, "_3_video_mux_CSI_DATA21", 23)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::
            _3_video_mux_CSI_DATA21;
    }
    else if ((result = !strncmp(data, "_4_flexspi2_B_DATA2", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_4_flexspi2_B_DATA2;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO14", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_5_gpio_mux2_IO14;
    }
    else if ((result = !strncmp(data, "_6_XBAR1_INOUT24", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_6_XBAR1_INOUT24;
    }
    else if ((result = !strncmp(data, "_7_ENET_1G_TX_DATA2", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_7_ENET_1G_TX_DATA2;
    }
    else if ((result = !strncmp(data, "_8_lpspi3_SCK", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_8_lpspi3_SCK;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO14", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_10_gpio8_IO14;
    }
    else if ((result = !strncmp(data, "_11_flexpwm3_PWMA2", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04_MUX_MODE::_11_flexpwm3_PWMA2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4