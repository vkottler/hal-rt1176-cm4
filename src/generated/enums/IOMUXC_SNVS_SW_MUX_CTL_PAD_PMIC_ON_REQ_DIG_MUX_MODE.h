/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE : uint8_t
{
    _0_snvs_lp_PMIC_ON_REQ /*!< Select mux mode: ALT0 mux port:
                              SNVS_LP_PMIC_ON_REQ of instance: SNVS_LP */
        ,
    _5_gpio13_IO1 = 5 /*!< Select mux mode: ALT5 mux port: GPIO13_IO01 of
                         instance: GPIO13 */
};
static_assert(sizeof(IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE) ==
              1);

/**
 * Converts IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE::
        _0_snvs_lp_PMIC_ON_REQ:
        result = "_0_snvs_lp_PMIC_ON_REQ";
        break;
    case IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE::_5_gpio13_IO1:
        result = "_5_gpio13_IO1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_snvs_lp_PMIC_ON_REQ", 22)))
    {
        output = IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE::
            _0_snvs_lp_PMIC_ON_REQ;
    }
    else if ((result = !strncmp(data, "_5_gpio13_IO1", 13)))
    {
        output =
            IOMUXC_SNVS_SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG_MUX_MODE::_5_gpio13_IO1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
