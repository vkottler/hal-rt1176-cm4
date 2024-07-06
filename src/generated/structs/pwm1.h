/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/PWM1_DTSRCSEL_SM0SEL23.h"
#include "../enums/PWM1_DTSRCSEL_SM0SEL45.h"
#include "../enums/PWM1_DTSRCSEL_SM1SEL23.h"
#include "../enums/PWM1_DTSRCSEL_SM1SEL45.h"
#include "../enums/PWM1_DTSRCSEL_SM2SEL23.h"
#include "../enums/PWM1_DTSRCSEL_SM2SEL45.h"
#include "../enums/PWM1_DTSRCSEL_SM3SEL23.h"
#include "../enums/PWM1_DTSRCSEL_SM3SEL45.h"
#include "../enums/PWM1_FCTRL0_FAUTO.h"
#include "../enums/PWM1_FCTRL0_FIE.h"
#include "../enums/PWM1_FCTRL0_FLVL.h"
#include "../enums/PWM1_FCTRL0_FSAFE.h"
#include "../enums/PWM1_FCTRL20_NOCOMB.h"
#include "../enums/PWM1_FSTS0_FFLAG.h"
#include "../enums/PWM1_FSTS0_FFULL.h"
#include "../enums/PWM1_FSTS0_FHALF.h"
#include "../enums/PWM1_MASK_MASKA.h"
#include "../enums/PWM1_MASK_MASKB.h"
#include "../enums/PWM1_MASK_MASKX.h"
#include "../enums/PWM1_MCTRL2_MONPLL.h"
#include "../enums/PWM1_MCTRL_IPOL.h"
#include "../enums/PWM1_MCTRL_LDOK.h"
#include "../enums/PWM1_MCTRL_RUN.h"
#include "../enums/PWM1_OUTEN_PWMA_EN.h"
#include "../enums/PWM1_OUTEN_PWMB_EN.h"
#include "../enums/PWM1_OUTEN_PWMX_EN.h"
#include "../ifgen/common.h"
#include "SM_instance.h"

namespace MIMXRT1176::CM4
{

/**
 * PWM
 */
struct [[gnu::packed]] pwm1
{
    /* Constant attributes. */
    static constexpr std::size_t size = 406; /*!< pwm1's size in bytes. */

    /* Fields. */
    static constexpr std::size_t SM_length = 4;
    SM_instance SM[SM_length]; /*!< no description available */
    static constexpr std::size_t reserved_padding0_length = 8;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint16_t OUTEN;    /*!< (read-write) Output Enable Register */
    uint16_t MASK;     /*!< (read-write) Mask Register */
    uint16_t SWCOUT;   /*!< (read-write) Software Controlled Output Register */
    uint16_t DTSRCSEL; /*!< (read-write) PWM Source Select Register */
    uint16_t MCTRL;    /*!< (read-write) Master Control Register */
    uint16_t MCTRL2;   /*!< (read-write) Master Control 2 Register */
    uint16_t FCTRL0;   /*!< (read-write) Fault Control Register */
    uint16_t FSTS0;    /*!< (read-write) Fault Status Register */
    uint16_t FFILT0;   /*!< (read-write) Fault Filter Register */
    uint16_t FTST0;    /*!< (read-write) Fault Test Register */
    uint16_t FCTRL20;  /*!< (read-write) Fault Control 2 Register */

    /* Methods. */

    /**
     * Get OUTEN's PWMA_EN field.
     *
     * PWM_A Output Enables
     */
    inline PWM1_OUTEN_PWMA_EN get_OUTEN_PWMA_EN() volatile
    {
        return PWM1_OUTEN_PWMA_EN((OUTEN >> 8u) & 0b1111u);
    }

    /**
     * Set OUTEN's PWMA_EN field.
     *
     * PWM_A Output Enables
     */
    inline void set_OUTEN_PWMA_EN(PWM1_OUTEN_PWMA_EN value) volatile
    {
        uint16_t curr = OUTEN;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(value) & 0b1111u) << 8u;

        OUTEN = curr;
    }

    /**
     * Get OUTEN's PWMB_EN field.
     *
     * PWM_B Output Enables
     */
    inline PWM1_OUTEN_PWMB_EN get_OUTEN_PWMB_EN() volatile
    {
        return PWM1_OUTEN_PWMB_EN((OUTEN >> 4u) & 0b1111u);
    }

    /**
     * Set OUTEN's PWMB_EN field.
     *
     * PWM_B Output Enables
     */
    inline void set_OUTEN_PWMB_EN(PWM1_OUTEN_PWMB_EN value) volatile
    {
        uint16_t curr = OUTEN;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        OUTEN = curr;
    }

    /**
     * Get OUTEN's PWMX_EN field.
     *
     * PWM_X Output Enables
     */
    inline PWM1_OUTEN_PWMX_EN get_OUTEN_PWMX_EN() volatile
    {
        return PWM1_OUTEN_PWMX_EN((OUTEN >> 0u) & 0b1111u);
    }

    /**
     * Set OUTEN's PWMX_EN field.
     *
     * PWM_X Output Enables
     */
    inline void set_OUTEN_PWMX_EN(PWM1_OUTEN_PWMX_EN value) volatile
    {
        uint16_t curr = OUTEN;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        OUTEN = curr;
    }

    /**
     * Get all of OUTEN's bit fields.
     *
     * (read-write) Output Enable Register
     */
    inline void get_OUTEN(PWM1_OUTEN_PWMA_EN &PWMA_EN,
                          PWM1_OUTEN_PWMB_EN &PWMB_EN,
                          PWM1_OUTEN_PWMX_EN &PWMX_EN) volatile
    {
        uint16_t curr = OUTEN;

        PWMA_EN = PWM1_OUTEN_PWMA_EN((curr >> 8u) & 0b1111u);
        PWMB_EN = PWM1_OUTEN_PWMB_EN((curr >> 4u) & 0b1111u);
        PWMX_EN = PWM1_OUTEN_PWMX_EN((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of OUTEN's bit fields.
     *
     * (read-write) Output Enable Register
     */
    inline void set_OUTEN(PWM1_OUTEN_PWMA_EN PWMA_EN,
                          PWM1_OUTEN_PWMB_EN PWMB_EN,
                          PWM1_OUTEN_PWMX_EN PWMX_EN) volatile
    {
        uint16_t curr = OUTEN;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(PWMA_EN) & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(PWMB_EN) & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(PWMX_EN) & 0b1111u) << 0u;

        OUTEN = curr;
    }

    /**
     * Get MASK's MASKA field.
     *
     * PWM_A Masks
     */
    inline PWM1_MASK_MASKA get_MASK_MASKA() volatile
    {
        return PWM1_MASK_MASKA((MASK >> 8u) & 0b1111u);
    }

    /**
     * Set MASK's MASKA field.
     *
     * PWM_A Masks
     */
    inline void set_MASK_MASKA(PWM1_MASK_MASKA value) volatile
    {
        uint16_t curr = MASK;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(value) & 0b1111u) << 8u;

        MASK = curr;
    }

    /**
     * Get MASK's MASKB field.
     *
     * PWM_B Masks
     */
    inline PWM1_MASK_MASKB get_MASK_MASKB() volatile
    {
        return PWM1_MASK_MASKB((MASK >> 4u) & 0b1111u);
    }

    /**
     * Set MASK's MASKB field.
     *
     * PWM_B Masks
     */
    inline void set_MASK_MASKB(PWM1_MASK_MASKB value) volatile
    {
        uint16_t curr = MASK;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        MASK = curr;
    }

    /**
     * Get MASK's MASKX field.
     *
     * PWM_X Masks
     */
    inline PWM1_MASK_MASKX get_MASK_MASKX() volatile
    {
        return PWM1_MASK_MASKX((MASK >> 0u) & 0b1111u);
    }

    /**
     * Set MASK's MASKX field.
     *
     * PWM_X Masks
     */
    inline void set_MASK_MASKX(PWM1_MASK_MASKX value) volatile
    {
        uint16_t curr = MASK;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        MASK = curr;
    }

    /**
     * Get all of MASK's bit fields.
     *
     * (read-write) Mask Register
     */
    inline void get_MASK(PWM1_MASK_MASKA &MASKA, PWM1_MASK_MASKB &MASKB,
                         PWM1_MASK_MASKX &MASKX) volatile
    {
        uint16_t curr = MASK;

        MASKA = PWM1_MASK_MASKA((curr >> 8u) & 0b1111u);
        MASKB = PWM1_MASK_MASKB((curr >> 4u) & 0b1111u);
        MASKX = PWM1_MASK_MASKX((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of MASK's bit fields.
     *
     * (read-write) Mask Register
     */
    inline void set_MASK(PWM1_MASK_MASKA MASKA, PWM1_MASK_MASKB MASKB,
                         PWM1_MASK_MASKX MASKX) volatile
    {
        uint16_t curr = MASK;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(MASKA) & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(MASKB) & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(MASKX) & 0b1111u) << 0u;

        MASK = curr;
    }

    /**
     * Get SWCOUT's SM3OUT23 bit.
     *
     * Submodule 3 Software Controlled Output 23
     */
    inline bool get_SWCOUT_SM3OUT23() volatile
    {
        return SWCOUT & (1u << 7u);
    }

    /**
     * Set SWCOUT's SM3OUT23 bit.
     *
     * Submodule 3 Software Controlled Output 23
     */
    inline void set_SWCOUT_SM3OUT23() volatile
    {
        SWCOUT |= 1u << 7u;
    }

    /**
     * Clear SWCOUT's SM3OUT23 bit.
     *
     * Submodule 3 Software Controlled Output 23
     */
    inline void clear_SWCOUT_SM3OUT23() volatile
    {
        SWCOUT &= ~(1u << 7u);
    }

    /**
     * Toggle SWCOUT's SM3OUT23 bit.
     *
     * Submodule 3 Software Controlled Output 23
     */
    inline void toggle_SWCOUT_SM3OUT23() volatile
    {
        SWCOUT ^= 1u << 7u;
    }

    /**
     * Get SWCOUT's SM3OUT45 bit.
     *
     * Submodule 3 Software Controlled Output 45
     */
    inline bool get_SWCOUT_SM3OUT45() volatile
    {
        return SWCOUT & (1u << 6u);
    }

    /**
     * Set SWCOUT's SM3OUT45 bit.
     *
     * Submodule 3 Software Controlled Output 45
     */
    inline void set_SWCOUT_SM3OUT45() volatile
    {
        SWCOUT |= 1u << 6u;
    }

    /**
     * Clear SWCOUT's SM3OUT45 bit.
     *
     * Submodule 3 Software Controlled Output 45
     */
    inline void clear_SWCOUT_SM3OUT45() volatile
    {
        SWCOUT &= ~(1u << 6u);
    }

    /**
     * Toggle SWCOUT's SM3OUT45 bit.
     *
     * Submodule 3 Software Controlled Output 45
     */
    inline void toggle_SWCOUT_SM3OUT45() volatile
    {
        SWCOUT ^= 1u << 6u;
    }

    /**
     * Get SWCOUT's SM2OUT23 bit.
     *
     * Submodule 2 Software Controlled Output 23
     */
    inline bool get_SWCOUT_SM2OUT23() volatile
    {
        return SWCOUT & (1u << 5u);
    }

    /**
     * Set SWCOUT's SM2OUT23 bit.
     *
     * Submodule 2 Software Controlled Output 23
     */
    inline void set_SWCOUT_SM2OUT23() volatile
    {
        SWCOUT |= 1u << 5u;
    }

    /**
     * Clear SWCOUT's SM2OUT23 bit.
     *
     * Submodule 2 Software Controlled Output 23
     */
    inline void clear_SWCOUT_SM2OUT23() volatile
    {
        SWCOUT &= ~(1u << 5u);
    }

    /**
     * Toggle SWCOUT's SM2OUT23 bit.
     *
     * Submodule 2 Software Controlled Output 23
     */
    inline void toggle_SWCOUT_SM2OUT23() volatile
    {
        SWCOUT ^= 1u << 5u;
    }

    /**
     * Get SWCOUT's SM2OUT45 bit.
     *
     * Submodule 2 Software Controlled Output 45
     */
    inline bool get_SWCOUT_SM2OUT45() volatile
    {
        return SWCOUT & (1u << 4u);
    }

    /**
     * Set SWCOUT's SM2OUT45 bit.
     *
     * Submodule 2 Software Controlled Output 45
     */
    inline void set_SWCOUT_SM2OUT45() volatile
    {
        SWCOUT |= 1u << 4u;
    }

    /**
     * Clear SWCOUT's SM2OUT45 bit.
     *
     * Submodule 2 Software Controlled Output 45
     */
    inline void clear_SWCOUT_SM2OUT45() volatile
    {
        SWCOUT &= ~(1u << 4u);
    }

    /**
     * Toggle SWCOUT's SM2OUT45 bit.
     *
     * Submodule 2 Software Controlled Output 45
     */
    inline void toggle_SWCOUT_SM2OUT45() volatile
    {
        SWCOUT ^= 1u << 4u;
    }

    /**
     * Get SWCOUT's SM1OUT23 bit.
     *
     * Submodule 1 Software Controlled Output 23
     */
    inline bool get_SWCOUT_SM1OUT23() volatile
    {
        return SWCOUT & (1u << 3u);
    }

    /**
     * Set SWCOUT's SM1OUT23 bit.
     *
     * Submodule 1 Software Controlled Output 23
     */
    inline void set_SWCOUT_SM1OUT23() volatile
    {
        SWCOUT |= 1u << 3u;
    }

    /**
     * Clear SWCOUT's SM1OUT23 bit.
     *
     * Submodule 1 Software Controlled Output 23
     */
    inline void clear_SWCOUT_SM1OUT23() volatile
    {
        SWCOUT &= ~(1u << 3u);
    }

    /**
     * Toggle SWCOUT's SM1OUT23 bit.
     *
     * Submodule 1 Software Controlled Output 23
     */
    inline void toggle_SWCOUT_SM1OUT23() volatile
    {
        SWCOUT ^= 1u << 3u;
    }

    /**
     * Get SWCOUT's SM1OUT45 bit.
     *
     * Submodule 1 Software Controlled Output 45
     */
    inline bool get_SWCOUT_SM1OUT45() volatile
    {
        return SWCOUT & (1u << 2u);
    }

    /**
     * Set SWCOUT's SM1OUT45 bit.
     *
     * Submodule 1 Software Controlled Output 45
     */
    inline void set_SWCOUT_SM1OUT45() volatile
    {
        SWCOUT |= 1u << 2u;
    }

    /**
     * Clear SWCOUT's SM1OUT45 bit.
     *
     * Submodule 1 Software Controlled Output 45
     */
    inline void clear_SWCOUT_SM1OUT45() volatile
    {
        SWCOUT &= ~(1u << 2u);
    }

    /**
     * Toggle SWCOUT's SM1OUT45 bit.
     *
     * Submodule 1 Software Controlled Output 45
     */
    inline void toggle_SWCOUT_SM1OUT45() volatile
    {
        SWCOUT ^= 1u << 2u;
    }

    /**
     * Get SWCOUT's SM0OUT23 bit.
     *
     * Submodule 0 Software Controlled Output 23
     */
    inline bool get_SWCOUT_SM0OUT23() volatile
    {
        return SWCOUT & (1u << 1u);
    }

    /**
     * Set SWCOUT's SM0OUT23 bit.
     *
     * Submodule 0 Software Controlled Output 23
     */
    inline void set_SWCOUT_SM0OUT23() volatile
    {
        SWCOUT |= 1u << 1u;
    }

    /**
     * Clear SWCOUT's SM0OUT23 bit.
     *
     * Submodule 0 Software Controlled Output 23
     */
    inline void clear_SWCOUT_SM0OUT23() volatile
    {
        SWCOUT &= ~(1u << 1u);
    }

    /**
     * Toggle SWCOUT's SM0OUT23 bit.
     *
     * Submodule 0 Software Controlled Output 23
     */
    inline void toggle_SWCOUT_SM0OUT23() volatile
    {
        SWCOUT ^= 1u << 1u;
    }

    /**
     * Get SWCOUT's SM0OUT45 bit.
     *
     * Submodule 0 Software Controlled Output 45
     */
    inline bool get_SWCOUT_SM0OUT45() volatile
    {
        return SWCOUT & (1u << 0u);
    }

    /**
     * Set SWCOUT's SM0OUT45 bit.
     *
     * Submodule 0 Software Controlled Output 45
     */
    inline void set_SWCOUT_SM0OUT45() volatile
    {
        SWCOUT |= 1u << 0u;
    }

    /**
     * Clear SWCOUT's SM0OUT45 bit.
     *
     * Submodule 0 Software Controlled Output 45
     */
    inline void clear_SWCOUT_SM0OUT45() volatile
    {
        SWCOUT &= ~(1u << 0u);
    }

    /**
     * Toggle SWCOUT's SM0OUT45 bit.
     *
     * Submodule 0 Software Controlled Output 45
     */
    inline void toggle_SWCOUT_SM0OUT45() volatile
    {
        SWCOUT ^= 1u << 0u;
    }

    /**
     * Get all of SWCOUT's bit fields.
     *
     * (read-write) Software Controlled Output Register
     */
    inline void get_SWCOUT(bool &SM3OUT23, bool &SM3OUT45, bool &SM2OUT23,
                           bool &SM2OUT45, bool &SM1OUT23, bool &SM1OUT45,
                           bool &SM0OUT23, bool &SM0OUT45) volatile
    {
        uint16_t curr = SWCOUT;

        SM3OUT23 = curr & (1u << 7u);
        SM3OUT45 = curr & (1u << 6u);
        SM2OUT23 = curr & (1u << 5u);
        SM2OUT45 = curr & (1u << 4u);
        SM1OUT23 = curr & (1u << 3u);
        SM1OUT45 = curr & (1u << 2u);
        SM0OUT23 = curr & (1u << 1u);
        SM0OUT45 = curr & (1u << 0u);
    }

    /**
     * Set all of SWCOUT's bit fields.
     *
     * (read-write) Software Controlled Output Register
     */
    inline void set_SWCOUT(bool SM3OUT23, bool SM3OUT45, bool SM2OUT23,
                           bool SM2OUT45, bool SM1OUT23, bool SM1OUT45,
                           bool SM0OUT23, bool SM0OUT45) volatile
    {
        uint16_t curr = SWCOUT;

        curr &= ~(0b1u << 7u);
        curr |= (SM3OUT23 & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (SM3OUT45 & 0b1u) << 6u;
        curr &= ~(0b1u << 5u);
        curr |= (SM2OUT23 & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (SM2OUT45 & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (SM1OUT23 & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (SM1OUT45 & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (SM0OUT23 & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (SM0OUT45 & 0b1u) << 0u;

        SWCOUT = curr;
    }

    /**
     * Get DTSRCSEL's SM3SEL23 field.
     *
     * Submodule 3 PWM23 Control Select
     */
    inline PWM1_DTSRCSEL_SM3SEL23 get_DTSRCSEL_SM3SEL23() volatile
    {
        return PWM1_DTSRCSEL_SM3SEL23((DTSRCSEL >> 14u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM3SEL23 field.
     *
     * Submodule 3 PWM23 Control Select
     */
    inline void set_DTSRCSEL_SM3SEL23(PWM1_DTSRCSEL_SM3SEL23 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(value) & 0b11u) << 14u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM3SEL45 field.
     *
     * Submodule 3 PWM45 Control Select
     */
    inline PWM1_DTSRCSEL_SM3SEL45 get_DTSRCSEL_SM3SEL45() volatile
    {
        return PWM1_DTSRCSEL_SM3SEL45((DTSRCSEL >> 12u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM3SEL45 field.
     *
     * Submodule 3 PWM45 Control Select
     */
    inline void set_DTSRCSEL_SM3SEL45(PWM1_DTSRCSEL_SM3SEL45 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 12u);
        curr |= (std::to_underlying(value) & 0b11u) << 12u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM2SEL23 field.
     *
     * Submodule 2 PWM23 Control Select
     */
    inline PWM1_DTSRCSEL_SM2SEL23 get_DTSRCSEL_SM2SEL23() volatile
    {
        return PWM1_DTSRCSEL_SM2SEL23((DTSRCSEL >> 10u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM2SEL23 field.
     *
     * Submodule 2 PWM23 Control Select
     */
    inline void set_DTSRCSEL_SM2SEL23(PWM1_DTSRCSEL_SM2SEL23 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(value) & 0b11u) << 10u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM2SEL45 field.
     *
     * Submodule 2 PWM45 Control Select
     */
    inline PWM1_DTSRCSEL_SM2SEL45 get_DTSRCSEL_SM2SEL45() volatile
    {
        return PWM1_DTSRCSEL_SM2SEL45((DTSRCSEL >> 8u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM2SEL45 field.
     *
     * Submodule 2 PWM45 Control Select
     */
    inline void set_DTSRCSEL_SM2SEL45(PWM1_DTSRCSEL_SM2SEL45 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM1SEL23 field.
     *
     * Submodule 1 PWM23 Control Select
     */
    inline PWM1_DTSRCSEL_SM1SEL23 get_DTSRCSEL_SM1SEL23() volatile
    {
        return PWM1_DTSRCSEL_SM1SEL23((DTSRCSEL >> 6u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM1SEL23 field.
     *
     * Submodule 1 PWM23 Control Select
     */
    inline void set_DTSRCSEL_SM1SEL23(PWM1_DTSRCSEL_SM1SEL23 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 6u);
        curr |= (std::to_underlying(value) & 0b11u) << 6u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM1SEL45 field.
     *
     * Submodule 1 PWM45 Control Select
     */
    inline PWM1_DTSRCSEL_SM1SEL45 get_DTSRCSEL_SM1SEL45() volatile
    {
        return PWM1_DTSRCSEL_SM1SEL45((DTSRCSEL >> 4u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM1SEL45 field.
     *
     * Submodule 1 PWM45 Control Select
     */
    inline void set_DTSRCSEL_SM1SEL45(PWM1_DTSRCSEL_SM1SEL45 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM0SEL23 field.
     *
     * Submodule 0 PWM23 Control Select
     */
    inline PWM1_DTSRCSEL_SM0SEL23 get_DTSRCSEL_SM0SEL23() volatile
    {
        return PWM1_DTSRCSEL_SM0SEL23((DTSRCSEL >> 2u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM0SEL23 field.
     *
     * Submodule 0 PWM23 Control Select
     */
    inline void set_DTSRCSEL_SM0SEL23(PWM1_DTSRCSEL_SM0SEL23 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 2u);
        curr |= (std::to_underlying(value) & 0b11u) << 2u;

        DTSRCSEL = curr;
    }

    /**
     * Get DTSRCSEL's SM0SEL45 field.
     *
     * Submodule 0 PWM45 Control Select
     */
    inline PWM1_DTSRCSEL_SM0SEL45 get_DTSRCSEL_SM0SEL45() volatile
    {
        return PWM1_DTSRCSEL_SM0SEL45((DTSRCSEL >> 0u) & 0b11u);
    }

    /**
     * Set DTSRCSEL's SM0SEL45 field.
     *
     * Submodule 0 PWM45 Control Select
     */
    inline void set_DTSRCSEL_SM0SEL45(PWM1_DTSRCSEL_SM0SEL45 value) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        DTSRCSEL = curr;
    }

    /**
     * Get all of DTSRCSEL's bit fields.
     *
     * (read-write) PWM Source Select Register
     */
    inline void get_DTSRCSEL(PWM1_DTSRCSEL_SM3SEL23 &SM3SEL23,
                             PWM1_DTSRCSEL_SM3SEL45 &SM3SEL45,
                             PWM1_DTSRCSEL_SM2SEL23 &SM2SEL23,
                             PWM1_DTSRCSEL_SM2SEL45 &SM2SEL45,
                             PWM1_DTSRCSEL_SM1SEL23 &SM1SEL23,
                             PWM1_DTSRCSEL_SM1SEL45 &SM1SEL45,
                             PWM1_DTSRCSEL_SM0SEL23 &SM0SEL23,
                             PWM1_DTSRCSEL_SM0SEL45 &SM0SEL45) volatile
    {
        uint16_t curr = DTSRCSEL;

        SM3SEL23 = PWM1_DTSRCSEL_SM3SEL23((curr >> 14u) & 0b11u);
        SM3SEL45 = PWM1_DTSRCSEL_SM3SEL45((curr >> 12u) & 0b11u);
        SM2SEL23 = PWM1_DTSRCSEL_SM2SEL23((curr >> 10u) & 0b11u);
        SM2SEL45 = PWM1_DTSRCSEL_SM2SEL45((curr >> 8u) & 0b11u);
        SM1SEL23 = PWM1_DTSRCSEL_SM1SEL23((curr >> 6u) & 0b11u);
        SM1SEL45 = PWM1_DTSRCSEL_SM1SEL45((curr >> 4u) & 0b11u);
        SM0SEL23 = PWM1_DTSRCSEL_SM0SEL23((curr >> 2u) & 0b11u);
        SM0SEL45 = PWM1_DTSRCSEL_SM0SEL45((curr >> 0u) & 0b11u);
    }

    /**
     * Set all of DTSRCSEL's bit fields.
     *
     * (read-write) PWM Source Select Register
     */
    inline void set_DTSRCSEL(PWM1_DTSRCSEL_SM3SEL23 SM3SEL23,
                             PWM1_DTSRCSEL_SM3SEL45 SM3SEL45,
                             PWM1_DTSRCSEL_SM2SEL23 SM2SEL23,
                             PWM1_DTSRCSEL_SM2SEL45 SM2SEL45,
                             PWM1_DTSRCSEL_SM1SEL23 SM1SEL23,
                             PWM1_DTSRCSEL_SM1SEL45 SM1SEL45,
                             PWM1_DTSRCSEL_SM0SEL23 SM0SEL23,
                             PWM1_DTSRCSEL_SM0SEL45 SM0SEL45) volatile
    {
        uint16_t curr = DTSRCSEL;

        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(SM3SEL23) & 0b11u) << 14u;
        curr &= ~(0b11u << 12u);
        curr |= (std::to_underlying(SM3SEL45) & 0b11u) << 12u;
        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(SM2SEL23) & 0b11u) << 10u;
        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(SM2SEL45) & 0b11u) << 8u;
        curr &= ~(0b11u << 6u);
        curr |= (std::to_underlying(SM1SEL23) & 0b11u) << 6u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(SM1SEL45) & 0b11u) << 4u;
        curr &= ~(0b11u << 2u);
        curr |= (std::to_underlying(SM0SEL23) & 0b11u) << 2u;
        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(SM0SEL45) & 0b11u) << 0u;

        DTSRCSEL = curr;
    }

    /**
     * Get MCTRL's IPOL field.
     *
     * Current Polarity
     */
    inline PWM1_MCTRL_IPOL get_MCTRL_IPOL() volatile
    {
        return PWM1_MCTRL_IPOL((MCTRL >> 12u) & 0b1111u);
    }

    /**
     * Set MCTRL's IPOL field.
     *
     * Current Polarity
     */
    inline void set_MCTRL_IPOL(PWM1_MCTRL_IPOL value) volatile
    {
        uint16_t curr = MCTRL;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(value) & 0b1111u) << 12u;

        MCTRL = curr;
    }

    /**
     * Get MCTRL's RUN field.
     *
     * Run
     */
    inline PWM1_MCTRL_RUN get_MCTRL_RUN() volatile
    {
        return PWM1_MCTRL_RUN((MCTRL >> 8u) & 0b1111u);
    }

    /**
     * Set MCTRL's RUN field.
     *
     * Run
     */
    inline void set_MCTRL_RUN(PWM1_MCTRL_RUN value) volatile
    {
        uint16_t curr = MCTRL;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(value) & 0b1111u) << 8u;

        MCTRL = curr;
    }

    /**
     * Get MCTRL's CLDOK field.
     *
     * Clear Load Okay
     */
    inline uint8_t get_MCTRL_CLDOK() volatile
    {
        return (MCTRL >> 4u) & 0b1111u;
    }

    /**
     * Set MCTRL's CLDOK field.
     *
     * Clear Load Okay
     */
    inline void set_MCTRL_CLDOK(uint8_t value) volatile
    {
        uint16_t curr = MCTRL;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        MCTRL = curr;
    }

    /**
     * Get MCTRL's LDOK field.
     *
     * Load Okay
     */
    inline PWM1_MCTRL_LDOK get_MCTRL_LDOK() volatile
    {
        return PWM1_MCTRL_LDOK((MCTRL >> 0u) & 0b1111u);
    }

    /**
     * Set MCTRL's LDOK field.
     *
     * Load Okay
     */
    inline void set_MCTRL_LDOK(PWM1_MCTRL_LDOK value) volatile
    {
        uint16_t curr = MCTRL;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        MCTRL = curr;
    }

    /**
     * Get all of MCTRL's bit fields.
     *
     * (read-write) Master Control Register
     */
    inline void get_MCTRL(PWM1_MCTRL_IPOL &IPOL, PWM1_MCTRL_RUN &RUN,
                          uint8_t &CLDOK, PWM1_MCTRL_LDOK &LDOK) volatile
    {
        uint16_t curr = MCTRL;

        IPOL = PWM1_MCTRL_IPOL((curr >> 12u) & 0b1111u);
        RUN = PWM1_MCTRL_RUN((curr >> 8u) & 0b1111u);
        CLDOK = (curr >> 4u) & 0b1111u;
        LDOK = PWM1_MCTRL_LDOK((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of MCTRL's bit fields.
     *
     * (read-write) Master Control Register
     */
    inline void set_MCTRL(PWM1_MCTRL_IPOL IPOL, PWM1_MCTRL_RUN RUN,
                          uint8_t CLDOK, PWM1_MCTRL_LDOK LDOK) volatile
    {
        uint16_t curr = MCTRL;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(IPOL) & 0b1111u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(RUN) & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (CLDOK & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(LDOK) & 0b1111u) << 0u;

        MCTRL = curr;
    }

    /**
     * Get MCTRL2's MONPLL field.
     *
     * Monitor PLL State
     */
    inline PWM1_MCTRL2_MONPLL get_MCTRL2_MONPLL() volatile
    {
        return PWM1_MCTRL2_MONPLL((MCTRL2 >> 0u) & 0b11u);
    }

    /**
     * Set MCTRL2's MONPLL field.
     *
     * Monitor PLL State
     */
    inline void set_MCTRL2_MONPLL(PWM1_MCTRL2_MONPLL value) volatile
    {
        uint16_t curr = MCTRL2;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        MCTRL2 = curr;
    }

    /**
     * Get FCTRL0's FLVL field.
     *
     * Fault Level
     */
    inline PWM1_FCTRL0_FLVL get_FCTRL0_FLVL() volatile
    {
        return PWM1_FCTRL0_FLVL((FCTRL0 >> 12u) & 0b1111u);
    }

    /**
     * Set FCTRL0's FLVL field.
     *
     * Fault Level
     */
    inline void set_FCTRL0_FLVL(PWM1_FCTRL0_FLVL value) volatile
    {
        uint16_t curr = FCTRL0;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(value) & 0b1111u) << 12u;

        FCTRL0 = curr;
    }

    /**
     * Get FCTRL0's FAUTO field.
     *
     * Automatic Fault Clearing
     */
    inline PWM1_FCTRL0_FAUTO get_FCTRL0_FAUTO() volatile
    {
        return PWM1_FCTRL0_FAUTO((FCTRL0 >> 8u) & 0b1111u);
    }

    /**
     * Set FCTRL0's FAUTO field.
     *
     * Automatic Fault Clearing
     */
    inline void set_FCTRL0_FAUTO(PWM1_FCTRL0_FAUTO value) volatile
    {
        uint16_t curr = FCTRL0;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(value) & 0b1111u) << 8u;

        FCTRL0 = curr;
    }

    /**
     * Get FCTRL0's FSAFE field.
     *
     * Fault Safety Mode
     */
    inline PWM1_FCTRL0_FSAFE get_FCTRL0_FSAFE() volatile
    {
        return PWM1_FCTRL0_FSAFE((FCTRL0 >> 4u) & 0b1111u);
    }

    /**
     * Set FCTRL0's FSAFE field.
     *
     * Fault Safety Mode
     */
    inline void set_FCTRL0_FSAFE(PWM1_FCTRL0_FSAFE value) volatile
    {
        uint16_t curr = FCTRL0;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        FCTRL0 = curr;
    }

    /**
     * Get FCTRL0's FIE field.
     *
     * Fault Interrupt Enables
     */
    inline PWM1_FCTRL0_FIE get_FCTRL0_FIE() volatile
    {
        return PWM1_FCTRL0_FIE((FCTRL0 >> 0u) & 0b1111u);
    }

    /**
     * Set FCTRL0's FIE field.
     *
     * Fault Interrupt Enables
     */
    inline void set_FCTRL0_FIE(PWM1_FCTRL0_FIE value) volatile
    {
        uint16_t curr = FCTRL0;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        FCTRL0 = curr;
    }

    /**
     * Get all of FCTRL0's bit fields.
     *
     * (read-write) Fault Control Register
     */
    inline void get_FCTRL0(PWM1_FCTRL0_FLVL &FLVL, PWM1_FCTRL0_FAUTO &FAUTO,
                           PWM1_FCTRL0_FSAFE &FSAFE,
                           PWM1_FCTRL0_FIE &FIE) volatile
    {
        uint16_t curr = FCTRL0;

        FLVL = PWM1_FCTRL0_FLVL((curr >> 12u) & 0b1111u);
        FAUTO = PWM1_FCTRL0_FAUTO((curr >> 8u) & 0b1111u);
        FSAFE = PWM1_FCTRL0_FSAFE((curr >> 4u) & 0b1111u);
        FIE = PWM1_FCTRL0_FIE((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of FCTRL0's bit fields.
     *
     * (read-write) Fault Control Register
     */
    inline void set_FCTRL0(PWM1_FCTRL0_FLVL FLVL, PWM1_FCTRL0_FAUTO FAUTO,
                           PWM1_FCTRL0_FSAFE FSAFE,
                           PWM1_FCTRL0_FIE FIE) volatile
    {
        uint16_t curr = FCTRL0;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(FLVL) & 0b1111u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(FAUTO) & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(FSAFE) & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(FIE) & 0b1111u) << 0u;

        FCTRL0 = curr;
    }

    /**
     * Get FSTS0's FHALF field.
     *
     * Half Cycle Fault Recovery
     */
    inline PWM1_FSTS0_FHALF get_FSTS0_FHALF() volatile
    {
        return PWM1_FSTS0_FHALF((FSTS0 >> 12u) & 0b1111u);
    }

    /**
     * Set FSTS0's FHALF field.
     *
     * Half Cycle Fault Recovery
     */
    inline void set_FSTS0_FHALF(PWM1_FSTS0_FHALF value) volatile
    {
        uint16_t curr = FSTS0;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(value) & 0b1111u) << 12u;

        FSTS0 = curr;
    }

    /**
     * Get FSTS0's FFPIN field.
     *
     * Filtered Fault Pins
     */
    inline uint8_t get_FSTS0_FFPIN() volatile
    {
        return (FSTS0 >> 8u) & 0b1111u;
    }

    /**
     * Get FSTS0's FFULL field.
     *
     * Full Cycle
     */
    inline PWM1_FSTS0_FFULL get_FSTS0_FFULL() volatile
    {
        return PWM1_FSTS0_FFULL((FSTS0 >> 4u) & 0b1111u);
    }

    /**
     * Set FSTS0's FFULL field.
     *
     * Full Cycle
     */
    inline void set_FSTS0_FFULL(PWM1_FSTS0_FFULL value) volatile
    {
        uint16_t curr = FSTS0;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        FSTS0 = curr;
    }

    /**
     * Get FSTS0's FFLAG field.
     *
     * Fault Flags
     */
    inline PWM1_FSTS0_FFLAG get_FSTS0_FFLAG() volatile
    {
        return PWM1_FSTS0_FFLAG((FSTS0 >> 0u) & 0b1111u);
    }

    /**
     * Set FSTS0's FFLAG field.
     *
     * Fault Flags
     */
    inline void set_FSTS0_FFLAG(PWM1_FSTS0_FFLAG value) volatile
    {
        uint16_t curr = FSTS0;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        FSTS0 = curr;
    }

    /**
     * Get all of FSTS0's bit fields.
     *
     * (read-write) Fault Status Register
     */
    inline void get_FSTS0(PWM1_FSTS0_FHALF &FHALF, uint8_t &FFPIN,
                          PWM1_FSTS0_FFULL &FFULL,
                          PWM1_FSTS0_FFLAG &FFLAG) volatile
    {
        uint16_t curr = FSTS0;

        FHALF = PWM1_FSTS0_FHALF((curr >> 12u) & 0b1111u);
        FFPIN = (curr >> 8u) & 0b1111u;
        FFULL = PWM1_FSTS0_FFULL((curr >> 4u) & 0b1111u);
        FFLAG = PWM1_FSTS0_FFLAG((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of FSTS0's bit fields.
     *
     * (read-write) Fault Status Register
     */
    inline void set_FSTS0(PWM1_FSTS0_FHALF FHALF, PWM1_FSTS0_FFULL FFULL,
                          PWM1_FSTS0_FFLAG FFLAG) volatile
    {
        uint16_t curr = FSTS0;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(FHALF) & 0b1111u) << 12u;
        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(FFULL) & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(FFLAG) & 0b1111u) << 0u;

        FSTS0 = curr;
    }

    /**
     * Get FFILT0's GSTR bit.
     *
     * Fault Glitch Stretch Enable
     */
    inline bool get_FFILT0_GSTR() volatile
    {
        return FFILT0 & (1u << 15u);
    }

    /**
     * Set FFILT0's GSTR bit.
     *
     * Fault Glitch Stretch Enable
     */
    inline void set_FFILT0_GSTR() volatile
    {
        FFILT0 |= 1u << 15u;
    }

    /**
     * Clear FFILT0's GSTR bit.
     *
     * Fault Glitch Stretch Enable
     */
    inline void clear_FFILT0_GSTR() volatile
    {
        FFILT0 &= ~(1u << 15u);
    }

    /**
     * Toggle FFILT0's GSTR bit.
     *
     * Fault Glitch Stretch Enable
     */
    inline void toggle_FFILT0_GSTR() volatile
    {
        FFILT0 ^= 1u << 15u;
    }

    /**
     * Get FFILT0's FILT_CNT field.
     *
     * Fault Filter Count
     */
    inline uint8_t get_FFILT0_FILT_CNT() volatile
    {
        return (FFILT0 >> 8u) & 0b111u;
    }

    /**
     * Set FFILT0's FILT_CNT field.
     *
     * Fault Filter Count
     */
    inline void set_FFILT0_FILT_CNT(uint8_t value) volatile
    {
        uint16_t curr = FFILT0;

        curr &= ~(0b111u << 8u);
        curr |= (value & 0b111u) << 8u;

        FFILT0 = curr;
    }

    /**
     * Get FFILT0's FILT_PER field.
     *
     * Fault Filter Period
     */
    inline uint8_t get_FFILT0_FILT_PER() volatile
    {
        return (FFILT0 >> 0u) & 0b11111111u;
    }

    /**
     * Set FFILT0's FILT_PER field.
     *
     * Fault Filter Period
     */
    inline void set_FFILT0_FILT_PER(uint8_t value) volatile
    {
        uint16_t curr = FFILT0;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        FFILT0 = curr;
    }

    /**
     * Get all of FFILT0's bit fields.
     *
     * (read-write) Fault Filter Register
     */
    inline void get_FFILT0(bool &GSTR, uint8_t &FILT_CNT,
                           uint8_t &FILT_PER) volatile
    {
        uint16_t curr = FFILT0;

        GSTR = curr & (1u << 15u);
        FILT_CNT = (curr >> 8u) & 0b111u;
        FILT_PER = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of FFILT0's bit fields.
     *
     * (read-write) Fault Filter Register
     */
    inline void set_FFILT0(bool GSTR, uint8_t FILT_CNT,
                           uint8_t FILT_PER) volatile
    {
        uint16_t curr = FFILT0;

        curr &= ~(0b1u << 15u);
        curr |= (GSTR & 0b1u) << 15u;
        curr &= ~(0b111u << 8u);
        curr |= (FILT_CNT & 0b111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (FILT_PER & 0b11111111u) << 0u;

        FFILT0 = curr;
    }

    /**
     * Get FTST0's FTEST bit.
     *
     * Fault Test
     */
    inline bool get_FTST0_FTEST() volatile
    {
        return FTST0 & (1u << 0u);
    }

    /**
     * Set FTST0's FTEST bit.
     *
     * Fault Test
     */
    inline void set_FTST0_FTEST() volatile
    {
        FTST0 |= 1u << 0u;
    }

    /**
     * Clear FTST0's FTEST bit.
     *
     * Fault Test
     */
    inline void clear_FTST0_FTEST() volatile
    {
        FTST0 &= ~(1u << 0u);
    }

    /**
     * Toggle FTST0's FTEST bit.
     *
     * Fault Test
     */
    inline void toggle_FTST0_FTEST() volatile
    {
        FTST0 ^= 1u << 0u;
    }

    /**
     * Get FCTRL20's NOCOMB field.
     *
     * No Combinational Path From Fault Input To PWM Output
     */
    inline PWM1_FCTRL20_NOCOMB get_FCTRL20_NOCOMB() volatile
    {
        return PWM1_FCTRL20_NOCOMB((FCTRL20 >> 0u) & 0b1111u);
    }

    /**
     * Set FCTRL20's NOCOMB field.
     *
     * No Combinational Path From Fault Input To PWM Output
     */
    inline void set_FCTRL20_NOCOMB(PWM1_FCTRL20_NOCOMB value) volatile
    {
        uint16_t curr = FCTRL20;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        FCTRL20 = curr;
    }
};

static_assert(sizeof(pwm1) == pwm1::size);

static volatile pwm1 *const PWM1 = reinterpret_cast<pwm1 *>(0x4018C000);

static volatile pwm1 *const PWM2 = reinterpret_cast<pwm1 *>(0x40190000);

static volatile pwm1 *const PWM3 = reinterpret_cast<pwm1 *>(0x40194000);

static volatile pwm1 *const PWM4 = reinterpret_cast<pwm1 *>(0x40198000);

}; // namespace MIMXRT1176::CM4