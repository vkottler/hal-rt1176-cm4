/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/PHY_LDO_CTRL0_LINREG_OUTPUT_TRG.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * no description available
 */
struct [[gnu::packed]] phy_ldo
{
    /* Constant attributes. */
    static constexpr std::size_t size = 96; /*!< phy_ldo's size in bytes. */

    /* Fields. */
    uint32_t CTRL0;     /*!< (read-write) Analog Control Register CTRL0 */
    uint32_t CTRL0_SET; /*!< (read-write) Analog Control Register CTRL0 */
    uint32_t CTRL0_CLR; /*!< (read-write) Analog Control Register CTRL0 */
    uint32_t CTRL0_TOG; /*!< (read-write) Analog Control Register CTRL0 */
    static constexpr std::size_t reserved_padding0_length = 16;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t STAT0;     /*!< (read-write) Analog Status Register STAT0 */
    uint32_t STAT0_SET; /*!< (read-write) Analog Status Register STAT0 */
    uint32_t STAT0_CLR; /*!< (read-write) Analog Status Register STAT0 */
    uint32_t STAT0_TOG; /*!< (read-write) Analog Status Register STAT0 */

    /* Methods. */

    /**
     * Get CTRL0's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline bool get_CTRL0_LINREG_PHY_ISO_B() volatile
    {
        return CTRL0 & (1u << 15u);
    }

    /**
     * Set CTRL0's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void set_CTRL0_LINREG_PHY_ISO_B() volatile
    {
        CTRL0 |= 1u << 15u;
    }

    /**
     * Clear CTRL0's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void clear_CTRL0_LINREG_PHY_ISO_B() volatile
    {
        CTRL0 &= ~(1u << 15u);
    }

    /**
     * Toggle CTRL0's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void toggle_CTRL0_LINREG_PHY_ISO_B() volatile
    {
        CTRL0 ^= 1u << 15u;
    }

    /**
     * Get CTRL0's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline PHY_LDO_CTRL0_LINREG_OUTPUT_TRG
    get_CTRL0_LINREG_OUTPUT_TRG() volatile
    {
        return PHY_LDO_CTRL0_LINREG_OUTPUT_TRG((CTRL0 >> 4u) & 0b11111u);
    }

    /**
     * Set CTRL0's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline void set_CTRL0_LINREG_OUTPUT_TRG(
        PHY_LDO_CTRL0_LINREG_OUTPUT_TRG value) volatile
    {
        uint32_t curr = CTRL0;

        curr &= ~(0b11111u << 4u);
        curr |= (std::to_underlying(value) & 0b11111u) << 4u;

        CTRL0 = curr;
    }

    /**
     * Get CTRL0's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline bool get_CTRL0_LINREG_ILIMIT_EN() volatile
    {
        return CTRL0 & (1u << 2u);
    }

    /**
     * Set CTRL0's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void set_CTRL0_LINREG_ILIMIT_EN() volatile
    {
        CTRL0 |= 1u << 2u;
    }

    /**
     * Clear CTRL0's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void clear_CTRL0_LINREG_ILIMIT_EN() volatile
    {
        CTRL0 &= ~(1u << 2u);
    }

    /**
     * Toggle CTRL0's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void toggle_CTRL0_LINREG_ILIMIT_EN() volatile
    {
        CTRL0 ^= 1u << 2u;
    }

    /**
     * Get CTRL0's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline bool get_CTRL0_LINREG_PWRUPLOAD_DIS() volatile
    {
        return CTRL0 & (1u << 1u);
    }

    /**
     * Set CTRL0's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void set_CTRL0_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0 |= 1u << 1u;
    }

    /**
     * Clear CTRL0's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void clear_CTRL0_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0 &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL0's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void toggle_CTRL0_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0 ^= 1u << 1u;
    }

    /**
     * Get CTRL0's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline bool get_CTRL0_LINREG_EN() volatile
    {
        return CTRL0 & (1u << 0u);
    }

    /**
     * Set CTRL0's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void set_CTRL0_LINREG_EN() volatile
    {
        CTRL0 |= 1u << 0u;
    }

    /**
     * Clear CTRL0's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void clear_CTRL0_LINREG_EN() volatile
    {
        CTRL0 &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL0's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void toggle_CTRL0_LINREG_EN() volatile
    {
        CTRL0 ^= 1u << 0u;
    }

    /**
     * Get all of CTRL0's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void get_CTRL0(bool &LINREG_PHY_ISO_B,
                          PHY_LDO_CTRL0_LINREG_OUTPUT_TRG &LINREG_OUTPUT_TRG,
                          bool &LINREG_ILIMIT_EN, bool &LINREG_PWRUPLOAD_DIS,
                          bool &LINREG_EN) volatile
    {
        uint32_t curr = CTRL0;

        LINREG_PHY_ISO_B = curr & (1u << 15u);
        LINREG_OUTPUT_TRG =
            PHY_LDO_CTRL0_LINREG_OUTPUT_TRG((curr >> 4u) & 0b11111u);
        LINREG_ILIMIT_EN = curr & (1u << 2u);
        LINREG_PWRUPLOAD_DIS = curr & (1u << 1u);
        LINREG_EN = curr & (1u << 0u);
    }

    /**
     * Set all of CTRL0's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void set_CTRL0(bool LINREG_PHY_ISO_B,
                          PHY_LDO_CTRL0_LINREG_OUTPUT_TRG LINREG_OUTPUT_TRG,
                          bool LINREG_ILIMIT_EN, bool LINREG_PWRUPLOAD_DIS,
                          bool LINREG_EN) volatile
    {
        uint32_t curr = CTRL0;

        curr &= ~(0b1u << 15u);
        curr |= (LINREG_PHY_ISO_B & 0b1u) << 15u;
        curr &= ~(0b11111u << 4u);
        curr |= (std::to_underlying(LINREG_OUTPUT_TRG) & 0b11111u) << 4u;
        curr &= ~(0b1u << 2u);
        curr |= (LINREG_ILIMIT_EN & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (LINREG_PWRUPLOAD_DIS & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LINREG_EN & 0b1u) << 0u;

        CTRL0 = curr;
    }

    /**
     * Get CTRL0_SET's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline bool get_CTRL0_SET_LINREG_PHY_ISO_B() volatile
    {
        return CTRL0_SET & (1u << 15u);
    }

    /**
     * Set CTRL0_SET's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void set_CTRL0_SET_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_SET |= 1u << 15u;
    }

    /**
     * Clear CTRL0_SET's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void clear_CTRL0_SET_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_SET &= ~(1u << 15u);
    }

    /**
     * Toggle CTRL0_SET's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void toggle_CTRL0_SET_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_SET ^= 1u << 15u;
    }

    /**
     * Get CTRL0_SET's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline uint8_t get_CTRL0_SET_LINREG_OUTPUT_TRG() volatile
    {
        return (CTRL0_SET >> 4u) & 0b11111u;
    }

    /**
     * Set CTRL0_SET's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline void set_CTRL0_SET_LINREG_OUTPUT_TRG(uint8_t value) volatile
    {
        uint32_t curr = CTRL0_SET;

        curr &= ~(0b11111u << 4u);
        curr |= (value & 0b11111u) << 4u;

        CTRL0_SET = curr;
    }

    /**
     * Get CTRL0_SET's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline bool get_CTRL0_SET_LINREG_ILIMIT_EN() volatile
    {
        return CTRL0_SET & (1u << 2u);
    }

    /**
     * Set CTRL0_SET's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void set_CTRL0_SET_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_SET |= 1u << 2u;
    }

    /**
     * Clear CTRL0_SET's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void clear_CTRL0_SET_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_SET &= ~(1u << 2u);
    }

    /**
     * Toggle CTRL0_SET's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void toggle_CTRL0_SET_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_SET ^= 1u << 2u;
    }

    /**
     * Get CTRL0_SET's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline bool get_CTRL0_SET_LINREG_PWRUPLOAD_DIS() volatile
    {
        return CTRL0_SET & (1u << 1u);
    }

    /**
     * Set CTRL0_SET's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void set_CTRL0_SET_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_SET |= 1u << 1u;
    }

    /**
     * Clear CTRL0_SET's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void clear_CTRL0_SET_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_SET &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL0_SET's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void toggle_CTRL0_SET_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_SET ^= 1u << 1u;
    }

    /**
     * Get CTRL0_SET's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline bool get_CTRL0_SET_LINREG_EN() volatile
    {
        return CTRL0_SET & (1u << 0u);
    }

    /**
     * Set CTRL0_SET's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void set_CTRL0_SET_LINREG_EN() volatile
    {
        CTRL0_SET |= 1u << 0u;
    }

    /**
     * Clear CTRL0_SET's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void clear_CTRL0_SET_LINREG_EN() volatile
    {
        CTRL0_SET &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL0_SET's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void toggle_CTRL0_SET_LINREG_EN() volatile
    {
        CTRL0_SET ^= 1u << 0u;
    }

    /**
     * Get all of CTRL0_SET's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void get_CTRL0_SET(bool &LINREG_PHY_ISO_B,
                              uint8_t &LINREG_OUTPUT_TRG,
                              bool &LINREG_ILIMIT_EN,
                              bool &LINREG_PWRUPLOAD_DIS,
                              bool &LINREG_EN) volatile
    {
        uint32_t curr = CTRL0_SET;

        LINREG_PHY_ISO_B = curr & (1u << 15u);
        LINREG_OUTPUT_TRG = (curr >> 4u) & 0b11111u;
        LINREG_ILIMIT_EN = curr & (1u << 2u);
        LINREG_PWRUPLOAD_DIS = curr & (1u << 1u);
        LINREG_EN = curr & (1u << 0u);
    }

    /**
     * Set all of CTRL0_SET's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void set_CTRL0_SET(bool LINREG_PHY_ISO_B, uint8_t LINREG_OUTPUT_TRG,
                              bool LINREG_ILIMIT_EN, bool LINREG_PWRUPLOAD_DIS,
                              bool LINREG_EN) volatile
    {
        uint32_t curr = CTRL0_SET;

        curr &= ~(0b1u << 15u);
        curr |= (LINREG_PHY_ISO_B & 0b1u) << 15u;
        curr &= ~(0b11111u << 4u);
        curr |= (LINREG_OUTPUT_TRG & 0b11111u) << 4u;
        curr &= ~(0b1u << 2u);
        curr |= (LINREG_ILIMIT_EN & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (LINREG_PWRUPLOAD_DIS & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LINREG_EN & 0b1u) << 0u;

        CTRL0_SET = curr;
    }

    /**
     * Get CTRL0_CLR's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline bool get_CTRL0_CLR_LINREG_PHY_ISO_B() volatile
    {
        return CTRL0_CLR & (1u << 15u);
    }

    /**
     * Set CTRL0_CLR's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void set_CTRL0_CLR_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_CLR |= 1u << 15u;
    }

    /**
     * Clear CTRL0_CLR's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void clear_CTRL0_CLR_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_CLR &= ~(1u << 15u);
    }

    /**
     * Toggle CTRL0_CLR's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void toggle_CTRL0_CLR_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_CLR ^= 1u << 15u;
    }

    /**
     * Get CTRL0_CLR's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline uint8_t get_CTRL0_CLR_LINREG_OUTPUT_TRG() volatile
    {
        return (CTRL0_CLR >> 4u) & 0b11111u;
    }

    /**
     * Set CTRL0_CLR's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline void set_CTRL0_CLR_LINREG_OUTPUT_TRG(uint8_t value) volatile
    {
        uint32_t curr = CTRL0_CLR;

        curr &= ~(0b11111u << 4u);
        curr |= (value & 0b11111u) << 4u;

        CTRL0_CLR = curr;
    }

    /**
     * Get CTRL0_CLR's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline bool get_CTRL0_CLR_LINREG_ILIMIT_EN() volatile
    {
        return CTRL0_CLR & (1u << 2u);
    }

    /**
     * Set CTRL0_CLR's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void set_CTRL0_CLR_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_CLR |= 1u << 2u;
    }

    /**
     * Clear CTRL0_CLR's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void clear_CTRL0_CLR_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_CLR &= ~(1u << 2u);
    }

    /**
     * Toggle CTRL0_CLR's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void toggle_CTRL0_CLR_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_CLR ^= 1u << 2u;
    }

    /**
     * Get CTRL0_CLR's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline bool get_CTRL0_CLR_LINREG_PWRUPLOAD_DIS() volatile
    {
        return CTRL0_CLR & (1u << 1u);
    }

    /**
     * Set CTRL0_CLR's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void set_CTRL0_CLR_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_CLR |= 1u << 1u;
    }

    /**
     * Clear CTRL0_CLR's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void clear_CTRL0_CLR_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_CLR &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL0_CLR's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void toggle_CTRL0_CLR_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_CLR ^= 1u << 1u;
    }

    /**
     * Get CTRL0_CLR's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline bool get_CTRL0_CLR_LINREG_EN() volatile
    {
        return CTRL0_CLR & (1u << 0u);
    }

    /**
     * Set CTRL0_CLR's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void set_CTRL0_CLR_LINREG_EN() volatile
    {
        CTRL0_CLR |= 1u << 0u;
    }

    /**
     * Clear CTRL0_CLR's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void clear_CTRL0_CLR_LINREG_EN() volatile
    {
        CTRL0_CLR &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL0_CLR's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void toggle_CTRL0_CLR_LINREG_EN() volatile
    {
        CTRL0_CLR ^= 1u << 0u;
    }

    /**
     * Get all of CTRL0_CLR's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void get_CTRL0_CLR(bool &LINREG_PHY_ISO_B,
                              uint8_t &LINREG_OUTPUT_TRG,
                              bool &LINREG_ILIMIT_EN,
                              bool &LINREG_PWRUPLOAD_DIS,
                              bool &LINREG_EN) volatile
    {
        uint32_t curr = CTRL0_CLR;

        LINREG_PHY_ISO_B = curr & (1u << 15u);
        LINREG_OUTPUT_TRG = (curr >> 4u) & 0b11111u;
        LINREG_ILIMIT_EN = curr & (1u << 2u);
        LINREG_PWRUPLOAD_DIS = curr & (1u << 1u);
        LINREG_EN = curr & (1u << 0u);
    }

    /**
     * Set all of CTRL0_CLR's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void set_CTRL0_CLR(bool LINREG_PHY_ISO_B, uint8_t LINREG_OUTPUT_TRG,
                              bool LINREG_ILIMIT_EN, bool LINREG_PWRUPLOAD_DIS,
                              bool LINREG_EN) volatile
    {
        uint32_t curr = CTRL0_CLR;

        curr &= ~(0b1u << 15u);
        curr |= (LINREG_PHY_ISO_B & 0b1u) << 15u;
        curr &= ~(0b11111u << 4u);
        curr |= (LINREG_OUTPUT_TRG & 0b11111u) << 4u;
        curr &= ~(0b1u << 2u);
        curr |= (LINREG_ILIMIT_EN & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (LINREG_PWRUPLOAD_DIS & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LINREG_EN & 0b1u) << 0u;

        CTRL0_CLR = curr;
    }

    /**
     * Get CTRL0_TOG's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline bool get_CTRL0_TOG_LINREG_PHY_ISO_B() volatile
    {
        return CTRL0_TOG & (1u << 15u);
    }

    /**
     * Set CTRL0_TOG's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void set_CTRL0_TOG_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_TOG |= 1u << 15u;
    }

    /**
     * Clear CTRL0_TOG's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void clear_CTRL0_TOG_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_TOG &= ~(1u << 15u);
    }

    /**
     * Toggle CTRL0_TOG's LINREG_PHY_ISO_B bit.
     *
     * Isolation control for attached PHY load
     */
    inline void toggle_CTRL0_TOG_LINREG_PHY_ISO_B() volatile
    {
        CTRL0_TOG ^= 1u << 15u;
    }

    /**
     * Get CTRL0_TOG's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline uint8_t get_CTRL0_TOG_LINREG_OUTPUT_TRG() volatile
    {
        return (CTRL0_TOG >> 4u) & 0b11111u;
    }

    /**
     * Set CTRL0_TOG's LINREG_OUTPUT_TRG field.
     *
     * LinReg output voltage target setting
     */
    inline void set_CTRL0_TOG_LINREG_OUTPUT_TRG(uint8_t value) volatile
    {
        uint32_t curr = CTRL0_TOG;

        curr &= ~(0b11111u << 4u);
        curr |= (value & 0b11111u) << 4u;

        CTRL0_TOG = curr;
    }

    /**
     * Get CTRL0_TOG's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline bool get_CTRL0_TOG_LINREG_ILIMIT_EN() volatile
    {
        return CTRL0_TOG & (1u << 2u);
    }

    /**
     * Set CTRL0_TOG's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void set_CTRL0_TOG_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_TOG |= 1u << 2u;
    }

    /**
     * Clear CTRL0_TOG's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void clear_CTRL0_TOG_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_TOG &= ~(1u << 2u);
    }

    /**
     * Toggle CTRL0_TOG's LINREG_ILIMIT_EN bit.
     *
     * LinReg current-limit enable
     */
    inline void toggle_CTRL0_TOG_LINREG_ILIMIT_EN() volatile
    {
        CTRL0_TOG ^= 1u << 2u;
    }

    /**
     * Get CTRL0_TOG's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline bool get_CTRL0_TOG_LINREG_PWRUPLOAD_DIS() volatile
    {
        return CTRL0_TOG & (1u << 1u);
    }

    /**
     * Set CTRL0_TOG's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void set_CTRL0_TOG_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_TOG |= 1u << 1u;
    }

    /**
     * Clear CTRL0_TOG's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void clear_CTRL0_TOG_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_TOG &= ~(1u << 1u);
    }

    /**
     * Toggle CTRL0_TOG's LINREG_PWRUPLOAD_DIS bit.
     *
     * LinReg power-up load disable
     */
    inline void toggle_CTRL0_TOG_LINREG_PWRUPLOAD_DIS() volatile
    {
        CTRL0_TOG ^= 1u << 1u;
    }

    /**
     * Get CTRL0_TOG's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline bool get_CTRL0_TOG_LINREG_EN() volatile
    {
        return CTRL0_TOG & (1u << 0u);
    }

    /**
     * Set CTRL0_TOG's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void set_CTRL0_TOG_LINREG_EN() volatile
    {
        CTRL0_TOG |= 1u << 0u;
    }

    /**
     * Clear CTRL0_TOG's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void clear_CTRL0_TOG_LINREG_EN() volatile
    {
        CTRL0_TOG &= ~(1u << 0u);
    }

    /**
     * Toggle CTRL0_TOG's LINREG_EN bit.
     *
     * LinrReg master enable
     */
    inline void toggle_CTRL0_TOG_LINREG_EN() volatile
    {
        CTRL0_TOG ^= 1u << 0u;
    }

    /**
     * Get all of CTRL0_TOG's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void get_CTRL0_TOG(bool &LINREG_PHY_ISO_B,
                              uint8_t &LINREG_OUTPUT_TRG,
                              bool &LINREG_ILIMIT_EN,
                              bool &LINREG_PWRUPLOAD_DIS,
                              bool &LINREG_EN) volatile
    {
        uint32_t curr = CTRL0_TOG;

        LINREG_PHY_ISO_B = curr & (1u << 15u);
        LINREG_OUTPUT_TRG = (curr >> 4u) & 0b11111u;
        LINREG_ILIMIT_EN = curr & (1u << 2u);
        LINREG_PWRUPLOAD_DIS = curr & (1u << 1u);
        LINREG_EN = curr & (1u << 0u);
    }

    /**
     * Set all of CTRL0_TOG's bit fields.
     *
     * (read-write) Analog Control Register CTRL0
     */
    inline void set_CTRL0_TOG(bool LINREG_PHY_ISO_B, uint8_t LINREG_OUTPUT_TRG,
                              bool LINREG_ILIMIT_EN, bool LINREG_PWRUPLOAD_DIS,
                              bool LINREG_EN) volatile
    {
        uint32_t curr = CTRL0_TOG;

        curr &= ~(0b1u << 15u);
        curr |= (LINREG_PHY_ISO_B & 0b1u) << 15u;
        curr &= ~(0b11111u << 4u);
        curr |= (LINREG_OUTPUT_TRG & 0b11111u) << 4u;
        curr &= ~(0b1u << 2u);
        curr |= (LINREG_ILIMIT_EN & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (LINREG_PWRUPLOAD_DIS & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LINREG_EN & 0b1u) << 0u;

        CTRL0_TOG = curr;
    }

    /**
     * Get STAT0's LINREG_STAT field.
     *
     * LinReg Status Bits
     */
    inline uint8_t get_STAT0_LINREG_STAT() volatile
    {
        return (STAT0 >> 0u) & 0b1111u;
    }

    /**
     * Get STAT0_SET's LINREG_STAT field.
     *
     * LinReg Status Bits
     */
    inline uint8_t get_STAT0_SET_LINREG_STAT() volatile
    {
        return (STAT0_SET >> 0u) & 0b1111u;
    }

    /**
     * Get STAT0_CLR's LINREG_STAT field.
     *
     * LinReg Status Bits
     */
    inline uint8_t get_STAT0_CLR_LINREG_STAT() volatile
    {
        return (STAT0_CLR >> 0u) & 0b1111u;
    }

    /**
     * Get STAT0_TOG's LINREG_STAT field.
     *
     * LinReg Status Bits
     */
    inline uint8_t get_STAT0_TOG_LINREG_STAT() volatile
    {
        return (STAT0_TOG >> 0u) & 0b1111u;
    }
};

static_assert(sizeof(phy_ldo) == phy_ldo::size);

static volatile phy_ldo *const PHY_LDO = reinterpret_cast<phy_ldo *>(0);

}; // namespace MIMXRT1176::CM4