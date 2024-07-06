/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/KPP_KDDR_KCDD.h"
#include "../enums/KPP_KDDR_KRDD.h"
#include "../enums/KPP_KPCR_KCO.h"
#include "../enums/KPP_KPCR_KRE.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * KPP
 */
struct [[gnu::packed]] kpp
{
    /* Constant attributes. */
    static constexpr std::size_t size = 8; /*!< kpp's size in bytes. */

    /* Fields. */
    uint16_t KPCR; /*!< (read-write) Keypad Control Register */
    uint16_t KPSR; /*!< (read-write) Keypad Status Register */
    uint16_t KDDR; /*!< (read-write) Keypad Data Direction Register */
    uint16_t KPDR; /*!< (read-write) Keypad Data Register */

    /* Methods. */

    /**
     * Get KPCR's KCO field.
     *
     * KCO
     */
    inline KPP_KPCR_KCO get_KPCR_KCO() volatile
    {
        return KPP_KPCR_KCO((KPCR >> 8u) & 0b11111111u);
    }

    /**
     * Set KPCR's KCO field.
     *
     * KCO
     */
    inline void set_KPCR_KCO(KPP_KPCR_KCO value) volatile
    {
        uint16_t curr = KPCR;

        curr &= ~(0b11111111u << 8u);
        curr |= (std::to_underlying(value) & 0b11111111u) << 8u;

        KPCR = curr;
    }

    /**
     * Get KPCR's KRE field.
     *
     * KRE
     */
    inline KPP_KPCR_KRE get_KPCR_KRE() volatile
    {
        return KPP_KPCR_KRE((KPCR >> 0u) & 0b11111111u);
    }

    /**
     * Set KPCR's KRE field.
     *
     * KRE
     */
    inline void set_KPCR_KRE(KPP_KPCR_KRE value) volatile
    {
        uint16_t curr = KPCR;

        curr &= ~(0b11111111u << 0u);
        curr |= (std::to_underlying(value) & 0b11111111u) << 0u;

        KPCR = curr;
    }

    /**
     * Get all of KPCR's bit fields.
     *
     * (read-write) Keypad Control Register
     */
    inline void get_KPCR(KPP_KPCR_KCO &KCO, KPP_KPCR_KRE &KRE) volatile
    {
        uint16_t curr = KPCR;

        KCO = KPP_KPCR_KCO((curr >> 8u) & 0b11111111u);
        KRE = KPP_KPCR_KRE((curr >> 0u) & 0b11111111u);
    }

    /**
     * Set all of KPCR's bit fields.
     *
     * (read-write) Keypad Control Register
     */
    inline void set_KPCR(KPP_KPCR_KCO KCO, KPP_KPCR_KRE KRE) volatile
    {
        uint16_t curr = KPCR;

        curr &= ~(0b11111111u << 8u);
        curr |= (std::to_underlying(KCO) & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (std::to_underlying(KRE) & 0b11111111u) << 0u;

        KPCR = curr;
    }

    /**
     * Get KPSR's KRIE bit.
     *
     * KRIE
     */
    inline bool get_KPSR_KRIE() volatile
    {
        return KPSR & (1u << 9u);
    }

    /**
     * Set KPSR's KRIE bit.
     *
     * KRIE
     */
    inline void set_KPSR_KRIE() volatile
    {
        KPSR |= 1u << 9u;
    }

    /**
     * Clear KPSR's KRIE bit.
     *
     * KRIE
     */
    inline void clear_KPSR_KRIE() volatile
    {
        KPSR &= ~(1u << 9u);
    }

    /**
     * Toggle KPSR's KRIE bit.
     *
     * KRIE
     */
    inline void toggle_KPSR_KRIE() volatile
    {
        KPSR ^= 1u << 9u;
    }

    /**
     * Get KPSR's KDIE bit.
     *
     * KDIE
     */
    inline bool get_KPSR_KDIE() volatile
    {
        return KPSR & (1u << 8u);
    }

    /**
     * Set KPSR's KDIE bit.
     *
     * KDIE
     */
    inline void set_KPSR_KDIE() volatile
    {
        KPSR |= 1u << 8u;
    }

    /**
     * Clear KPSR's KDIE bit.
     *
     * KDIE
     */
    inline void clear_KPSR_KDIE() volatile
    {
        KPSR &= ~(1u << 8u);
    }

    /**
     * Toggle KPSR's KDIE bit.
     *
     * KDIE
     */
    inline void toggle_KPSR_KDIE() volatile
    {
        KPSR ^= 1u << 8u;
    }

    /**
     * Get KPSR's KRSS bit.
     *
     * KRSS
     */
    inline bool get_KPSR_KRSS() volatile
    {
        return KPSR & (1u << 3u);
    }

    /**
     * Set KPSR's KRSS bit.
     *
     * KRSS
     */
    inline void set_KPSR_KRSS() volatile
    {
        KPSR |= 1u << 3u;
    }

    /**
     * Clear KPSR's KRSS bit.
     *
     * KRSS
     */
    inline void clear_KPSR_KRSS() volatile
    {
        KPSR &= ~(1u << 3u);
    }

    /**
     * Toggle KPSR's KRSS bit.
     *
     * KRSS
     */
    inline void toggle_KPSR_KRSS() volatile
    {
        KPSR ^= 1u << 3u;
    }

    /**
     * Get KPSR's KDSC bit.
     *
     * KDSC
     */
    inline bool get_KPSR_KDSC() volatile
    {
        return KPSR & (1u << 2u);
    }

    /**
     * Set KPSR's KDSC bit.
     *
     * KDSC
     */
    inline void set_KPSR_KDSC() volatile
    {
        KPSR |= 1u << 2u;
    }

    /**
     * Clear KPSR's KDSC bit.
     *
     * KDSC
     */
    inline void clear_KPSR_KDSC() volatile
    {
        KPSR &= ~(1u << 2u);
    }

    /**
     * Toggle KPSR's KDSC bit.
     *
     * KDSC
     */
    inline void toggle_KPSR_KDSC() volatile
    {
        KPSR ^= 1u << 2u;
    }

    /**
     * Get KPSR's KPKR bit.
     *
     * KPKR
     */
    inline bool get_KPSR_KPKR() volatile
    {
        return KPSR & (1u << 1u);
    }

    /**
     * Set KPSR's KPKR bit.
     *
     * KPKR
     */
    inline void set_KPSR_KPKR() volatile
    {
        KPSR |= 1u << 1u;
    }

    /**
     * Clear KPSR's KPKR bit.
     *
     * KPKR
     */
    inline void clear_KPSR_KPKR() volatile
    {
        KPSR &= ~(1u << 1u);
    }

    /**
     * Toggle KPSR's KPKR bit.
     *
     * KPKR
     */
    inline void toggle_KPSR_KPKR() volatile
    {
        KPSR ^= 1u << 1u;
    }

    /**
     * Get KPSR's KPKD bit.
     *
     * KPKD
     */
    inline bool get_KPSR_KPKD() volatile
    {
        return KPSR & (1u << 0u);
    }

    /**
     * Set KPSR's KPKD bit.
     *
     * KPKD
     */
    inline void set_KPSR_KPKD() volatile
    {
        KPSR |= 1u << 0u;
    }

    /**
     * Clear KPSR's KPKD bit.
     *
     * KPKD
     */
    inline void clear_KPSR_KPKD() volatile
    {
        KPSR &= ~(1u << 0u);
    }

    /**
     * Toggle KPSR's KPKD bit.
     *
     * KPKD
     */
    inline void toggle_KPSR_KPKD() volatile
    {
        KPSR ^= 1u << 0u;
    }

    /**
     * Get all of KPSR's bit fields.
     *
     * (read-write) Keypad Status Register
     */
    inline void get_KPSR(bool &KRIE, bool &KDIE, bool &KRSS, bool &KDSC,
                         bool &KPKR, bool &KPKD) volatile
    {
        uint16_t curr = KPSR;

        KRIE = curr & (1u << 9u);
        KDIE = curr & (1u << 8u);
        KRSS = curr & (1u << 3u);
        KDSC = curr & (1u << 2u);
        KPKR = curr & (1u << 1u);
        KPKD = curr & (1u << 0u);
    }

    /**
     * Set all of KPSR's bit fields.
     *
     * (read-write) Keypad Status Register
     */
    inline void set_KPSR(bool KRIE, bool KDIE, bool KRSS, bool KDSC, bool KPKR,
                         bool KPKD) volatile
    {
        uint16_t curr = KPSR;

        curr &= ~(0b1u << 9u);
        curr |= (KRIE & 0b1u) << 9u;
        curr &= ~(0b1u << 8u);
        curr |= (KDIE & 0b1u) << 8u;
        curr &= ~(0b1u << 3u);
        curr |= (KRSS & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (KDSC & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (KPKR & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (KPKD & 0b1u) << 0u;

        KPSR = curr;
    }

    /**
     * Get KDDR's KCDD field.
     *
     * KCDD
     */
    inline KPP_KDDR_KCDD get_KDDR_KCDD() volatile
    {
        return KPP_KDDR_KCDD((KDDR >> 8u) & 0b11111111u);
    }

    /**
     * Set KDDR's KCDD field.
     *
     * KCDD
     */
    inline void set_KDDR_KCDD(KPP_KDDR_KCDD value) volatile
    {
        uint16_t curr = KDDR;

        curr &= ~(0b11111111u << 8u);
        curr |= (std::to_underlying(value) & 0b11111111u) << 8u;

        KDDR = curr;
    }

    /**
     * Get KDDR's KRDD field.
     *
     * KRDD
     */
    inline KPP_KDDR_KRDD get_KDDR_KRDD() volatile
    {
        return KPP_KDDR_KRDD((KDDR >> 0u) & 0b11111111u);
    }

    /**
     * Set KDDR's KRDD field.
     *
     * KRDD
     */
    inline void set_KDDR_KRDD(KPP_KDDR_KRDD value) volatile
    {
        uint16_t curr = KDDR;

        curr &= ~(0b11111111u << 0u);
        curr |= (std::to_underlying(value) & 0b11111111u) << 0u;

        KDDR = curr;
    }

    /**
     * Get all of KDDR's bit fields.
     *
     * (read-write) Keypad Data Direction Register
     */
    inline void get_KDDR(KPP_KDDR_KCDD &KCDD, KPP_KDDR_KRDD &KRDD) volatile
    {
        uint16_t curr = KDDR;

        KCDD = KPP_KDDR_KCDD((curr >> 8u) & 0b11111111u);
        KRDD = KPP_KDDR_KRDD((curr >> 0u) & 0b11111111u);
    }

    /**
     * Set all of KDDR's bit fields.
     *
     * (read-write) Keypad Data Direction Register
     */
    inline void set_KDDR(KPP_KDDR_KCDD KCDD, KPP_KDDR_KRDD KRDD) volatile
    {
        uint16_t curr = KDDR;

        curr &= ~(0b11111111u << 8u);
        curr |= (std::to_underlying(KCDD) & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (std::to_underlying(KRDD) & 0b11111111u) << 0u;

        KDDR = curr;
    }

    /**
     * Get KPDR's KCD field.
     *
     * KCD
     */
    inline uint8_t get_KPDR_KCD() volatile
    {
        return (KPDR >> 8u) & 0b11111111u;
    }

    /**
     * Set KPDR's KCD field.
     *
     * KCD
     */
    inline void set_KPDR_KCD(uint8_t value) volatile
    {
        uint16_t curr = KPDR;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        KPDR = curr;
    }

    /**
     * Get KPDR's KRD field.
     *
     * KRD
     */
    inline uint8_t get_KPDR_KRD() volatile
    {
        return (KPDR >> 0u) & 0b11111111u;
    }

    /**
     * Set KPDR's KRD field.
     *
     * KRD
     */
    inline void set_KPDR_KRD(uint8_t value) volatile
    {
        uint16_t curr = KPDR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        KPDR = curr;
    }

    /**
     * Get all of KPDR's bit fields.
     *
     * (read-write) Keypad Data Register
     */
    inline void get_KPDR(uint8_t &KCD, uint8_t &KRD) volatile
    {
        uint16_t curr = KPDR;

        KCD = (curr >> 8u) & 0b11111111u;
        KRD = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of KPDR's bit fields.
     *
     * (read-write) Keypad Data Register
     */
    inline void set_KPDR(uint8_t KCD, uint8_t KRD) volatile
    {
        uint16_t curr = KPDR;

        curr &= ~(0b11111111u << 8u);
        curr |= (KCD & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (KRD & 0b11111111u) << 0u;

        KPDR = curr;
    }
};

static_assert(sizeof(kpp) == kpp::size);

static volatile kpp *const KPP = reinterpret_cast<kpp *>(0x400E0000);

}; // namespace MIMXRT1176::CM4
