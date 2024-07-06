/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/LMEM_PCCLCR_LCMD.h"
#include "../enums/LMEM_PSCLCR_LCMD.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * LMEM
 */
struct [[gnu::packed]] lmem
{
    /* Constant attributes. */
    static constexpr std::size_t size = 2064; /*!< lmem's size in bytes. */

    /* Fields. */
    uint32_t PCCCR;  /*!< (read-write) PC bus Cache control register */
    uint32_t PCCLCR; /*!< (read-write) PC bus Cache line control register */
    uint32_t PCCSAR; /*!< (read-write) PC bus Cache search address register */
    uint32_t
        PCCCVR; /*!< (read-write) PC bus Cache read/write value register */
    static constexpr std::size_t reserved_padding0_length = 508;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t PSCCR;  /*!< (read-write) PS bus Cache control register */
    uint32_t PSCLCR; /*!< (read-write) PS bus Cache line control register */
    uint32_t PSCSAR; /*!< (read-write) PS bus Cache search address register */
    uint32_t
        PSCCVR; /*!< (read-write) PS bus Cache read/write value register */

    /* Methods. */

    /**
     * Get PCCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline bool get_PCCCR_GO() volatile
    {
        return PCCCR & (1u << 31u);
    }

    /**
     * Set PCCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline void set_PCCCR_GO() volatile
    {
        PCCCR |= 1u << 31u;
    }

    /**
     * Clear PCCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline void clear_PCCCR_GO() volatile
    {
        PCCCR &= ~(1u << 31u);
    }

    /**
     * Toggle PCCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline void toggle_PCCCR_GO() volatile
    {
        PCCCR ^= 1u << 31u;
    }

    /**
     * Get PCCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline bool get_PCCCR_PUSHW1() volatile
    {
        return PCCCR & (1u << 27u);
    }

    /**
     * Set PCCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline void set_PCCCR_PUSHW1() volatile
    {
        PCCCR |= 1u << 27u;
    }

    /**
     * Clear PCCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline void clear_PCCCR_PUSHW1() volatile
    {
        PCCCR &= ~(1u << 27u);
    }

    /**
     * Toggle PCCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline void toggle_PCCCR_PUSHW1() volatile
    {
        PCCCR ^= 1u << 27u;
    }

    /**
     * Get PCCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline bool get_PCCCR_INVW1() volatile
    {
        return PCCCR & (1u << 26u);
    }

    /**
     * Set PCCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline void set_PCCCR_INVW1() volatile
    {
        PCCCR |= 1u << 26u;
    }

    /**
     * Clear PCCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline void clear_PCCCR_INVW1() volatile
    {
        PCCCR &= ~(1u << 26u);
    }

    /**
     * Toggle PCCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline void toggle_PCCCR_INVW1() volatile
    {
        PCCCR ^= 1u << 26u;
    }

    /**
     * Get PCCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline bool get_PCCCR_PUSHW0() volatile
    {
        return PCCCR & (1u << 25u);
    }

    /**
     * Set PCCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline void set_PCCCR_PUSHW0() volatile
    {
        PCCCR |= 1u << 25u;
    }

    /**
     * Clear PCCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline void clear_PCCCR_PUSHW0() volatile
    {
        PCCCR &= ~(1u << 25u);
    }

    /**
     * Toggle PCCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline void toggle_PCCCR_PUSHW0() volatile
    {
        PCCCR ^= 1u << 25u;
    }

    /**
     * Get PCCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline bool get_PCCCR_INVW0() volatile
    {
        return PCCCR & (1u << 24u);
    }

    /**
     * Set PCCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline void set_PCCCR_INVW0() volatile
    {
        PCCCR |= 1u << 24u;
    }

    /**
     * Clear PCCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline void clear_PCCCR_INVW0() volatile
    {
        PCCCR &= ~(1u << 24u);
    }

    /**
     * Toggle PCCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline void toggle_PCCCR_INVW0() volatile
    {
        PCCCR ^= 1u << 24u;
    }

    /**
     * Get PCCCR's PCCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline bool get_PCCCR_PCCR3() volatile
    {
        return PCCCR & (1u << 3u);
    }

    /**
     * Set PCCCR's PCCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline void set_PCCCR_PCCR3() volatile
    {
        PCCCR |= 1u << 3u;
    }

    /**
     * Clear PCCCR's PCCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline void clear_PCCCR_PCCR3() volatile
    {
        PCCCR &= ~(1u << 3u);
    }

    /**
     * Toggle PCCCR's PCCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline void toggle_PCCCR_PCCR3() volatile
    {
        PCCCR ^= 1u << 3u;
    }

    /**
     * Get PCCCR's PCCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline bool get_PCCCR_PCCR2() volatile
    {
        return PCCCR & (1u << 2u);
    }

    /**
     * Set PCCCR's PCCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline void set_PCCCR_PCCR2() volatile
    {
        PCCCR |= 1u << 2u;
    }

    /**
     * Clear PCCCR's PCCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline void clear_PCCCR_PCCR2() volatile
    {
        PCCCR &= ~(1u << 2u);
    }

    /**
     * Toggle PCCCR's PCCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline void toggle_PCCCR_PCCR2() volatile
    {
        PCCCR ^= 1u << 2u;
    }

    /**
     * Get PCCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline bool get_PCCCR_ENWRBUF() volatile
    {
        return PCCCR & (1u << 1u);
    }

    /**
     * Set PCCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline void set_PCCCR_ENWRBUF() volatile
    {
        PCCCR |= 1u << 1u;
    }

    /**
     * Clear PCCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline void clear_PCCCR_ENWRBUF() volatile
    {
        PCCCR &= ~(1u << 1u);
    }

    /**
     * Toggle PCCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline void toggle_PCCCR_ENWRBUF() volatile
    {
        PCCCR ^= 1u << 1u;
    }

    /**
     * Get PCCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline bool get_PCCCR_ENCACHE() volatile
    {
        return PCCCR & (1u << 0u);
    }

    /**
     * Set PCCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline void set_PCCCR_ENCACHE() volatile
    {
        PCCCR |= 1u << 0u;
    }

    /**
     * Clear PCCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline void clear_PCCCR_ENCACHE() volatile
    {
        PCCCR &= ~(1u << 0u);
    }

    /**
     * Toggle PCCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline void toggle_PCCCR_ENCACHE() volatile
    {
        PCCCR ^= 1u << 0u;
    }

    /**
     * Get all of PCCCR's bit fields.
     *
     * (read-write) PC bus Cache control register
     */
    inline void get_PCCCR(bool &GO, bool &PUSHW1, bool &INVW1, bool &PUSHW0,
                          bool &INVW0, bool &PCCR3, bool &PCCR2, bool &ENWRBUF,
                          bool &ENCACHE) volatile
    {
        uint32_t curr = PCCCR;

        GO = curr & (1u << 31u);
        PUSHW1 = curr & (1u << 27u);
        INVW1 = curr & (1u << 26u);
        PUSHW0 = curr & (1u << 25u);
        INVW0 = curr & (1u << 24u);
        PCCR3 = curr & (1u << 3u);
        PCCR2 = curr & (1u << 2u);
        ENWRBUF = curr & (1u << 1u);
        ENCACHE = curr & (1u << 0u);
    }

    /**
     * Set all of PCCCR's bit fields.
     *
     * (read-write) PC bus Cache control register
     */
    inline void set_PCCCR(bool GO, bool PUSHW1, bool INVW1, bool PUSHW0,
                          bool INVW0, bool PCCR3, bool PCCR2, bool ENWRBUF,
                          bool ENCACHE) volatile
    {
        uint32_t curr = PCCCR;

        curr &= ~(0b1u << 31u);
        curr |= (GO & 0b1u) << 31u;
        curr &= ~(0b1u << 27u);
        curr |= (PUSHW1 & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (INVW1 & 0b1u) << 26u;
        curr &= ~(0b1u << 25u);
        curr |= (PUSHW0 & 0b1u) << 25u;
        curr &= ~(0b1u << 24u);
        curr |= (INVW0 & 0b1u) << 24u;
        curr &= ~(0b1u << 3u);
        curr |= (PCCR3 & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (PCCR2 & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (ENWRBUF & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (ENCACHE & 0b1u) << 0u;

        PCCCR = curr;
    }

    /**
     * Get PCCLCR's LACC bit.
     *
     * Line access type
     */
    inline bool get_PCCLCR_LACC() volatile
    {
        return PCCLCR & (1u << 27u);
    }

    /**
     * Set PCCLCR's LACC bit.
     *
     * Line access type
     */
    inline void set_PCCLCR_LACC() volatile
    {
        PCCLCR |= 1u << 27u;
    }

    /**
     * Clear PCCLCR's LACC bit.
     *
     * Line access type
     */
    inline void clear_PCCLCR_LACC() volatile
    {
        PCCLCR &= ~(1u << 27u);
    }

    /**
     * Toggle PCCLCR's LACC bit.
     *
     * Line access type
     */
    inline void toggle_PCCLCR_LACC() volatile
    {
        PCCLCR ^= 1u << 27u;
    }

    /**
     * Get PCCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline bool get_PCCLCR_LADSEL() volatile
    {
        return PCCLCR & (1u << 26u);
    }

    /**
     * Set PCCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline void set_PCCLCR_LADSEL() volatile
    {
        PCCLCR |= 1u << 26u;
    }

    /**
     * Clear PCCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline void clear_PCCLCR_LADSEL() volatile
    {
        PCCLCR &= ~(1u << 26u);
    }

    /**
     * Toggle PCCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline void toggle_PCCLCR_LADSEL() volatile
    {
        PCCLCR ^= 1u << 26u;
    }

    /**
     * Get PCCLCR's LCMD field.
     *
     * Line Command
     */
    inline LMEM_PCCLCR_LCMD get_PCCLCR_LCMD() volatile
    {
        return LMEM_PCCLCR_LCMD((PCCLCR >> 24u) & 0b11u);
    }

    /**
     * Set PCCLCR's LCMD field.
     *
     * Line Command
     */
    inline void set_PCCLCR_LCMD(LMEM_PCCLCR_LCMD value) volatile
    {
        uint32_t curr = PCCLCR;

        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(value) & 0b11u) << 24u;

        PCCLCR = curr;
    }

    /**
     * Get PCCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline bool get_PCCLCR_LCWAY() volatile
    {
        return PCCLCR & (1u << 22u);
    }

    /**
     * Set PCCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline void set_PCCLCR_LCWAY() volatile
    {
        PCCLCR |= 1u << 22u;
    }

    /**
     * Clear PCCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline void clear_PCCLCR_LCWAY() volatile
    {
        PCCLCR &= ~(1u << 22u);
    }

    /**
     * Toggle PCCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline void toggle_PCCLCR_LCWAY() volatile
    {
        PCCLCR ^= 1u << 22u;
    }

    /**
     * Get PCCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline bool get_PCCLCR_LCIMB() volatile
    {
        return PCCLCR & (1u << 21u);
    }

    /**
     * Set PCCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline void set_PCCLCR_LCIMB() volatile
    {
        PCCLCR |= 1u << 21u;
    }

    /**
     * Clear PCCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline void clear_PCCLCR_LCIMB() volatile
    {
        PCCLCR &= ~(1u << 21u);
    }

    /**
     * Toggle PCCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline void toggle_PCCLCR_LCIMB() volatile
    {
        PCCLCR ^= 1u << 21u;
    }

    /**
     * Get PCCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline bool get_PCCLCR_LCIVB() volatile
    {
        return PCCLCR & (1u << 20u);
    }

    /**
     * Set PCCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline void set_PCCLCR_LCIVB() volatile
    {
        PCCLCR |= 1u << 20u;
    }

    /**
     * Clear PCCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline void clear_PCCLCR_LCIVB() volatile
    {
        PCCLCR &= ~(1u << 20u);
    }

    /**
     * Toggle PCCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline void toggle_PCCLCR_LCIVB() volatile
    {
        PCCLCR ^= 1u << 20u;
    }

    /**
     * Get PCCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline bool get_PCCLCR_TDSEL() volatile
    {
        return PCCLCR & (1u << 16u);
    }

    /**
     * Set PCCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline void set_PCCLCR_TDSEL() volatile
    {
        PCCLCR |= 1u << 16u;
    }

    /**
     * Clear PCCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline void clear_PCCLCR_TDSEL() volatile
    {
        PCCLCR &= ~(1u << 16u);
    }

    /**
     * Toggle PCCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline void toggle_PCCLCR_TDSEL() volatile
    {
        PCCLCR ^= 1u << 16u;
    }

    /**
     * Get PCCLCR's WSEL bit.
     *
     * Way select
     */
    inline bool get_PCCLCR_WSEL() volatile
    {
        return PCCLCR & (1u << 14u);
    }

    /**
     * Set PCCLCR's WSEL bit.
     *
     * Way select
     */
    inline void set_PCCLCR_WSEL() volatile
    {
        PCCLCR |= 1u << 14u;
    }

    /**
     * Clear PCCLCR's WSEL bit.
     *
     * Way select
     */
    inline void clear_PCCLCR_WSEL() volatile
    {
        PCCLCR &= ~(1u << 14u);
    }

    /**
     * Toggle PCCLCR's WSEL bit.
     *
     * Way select
     */
    inline void toggle_PCCLCR_WSEL() volatile
    {
        PCCLCR ^= 1u << 14u;
    }

    /**
     * Get PCCLCR's CACHEADDR field.
     *
     * Cache address
     */
    inline uint16_t get_PCCLCR_CACHEADDR() volatile
    {
        return (PCCLCR >> 2u) & 0b111111111111u;
    }

    /**
     * Set PCCLCR's CACHEADDR field.
     *
     * Cache address
     */
    inline void set_PCCLCR_CACHEADDR(uint16_t value) volatile
    {
        uint32_t curr = PCCLCR;

        curr &= ~(0b111111111111u << 2u);
        curr |= (value & 0b111111111111u) << 2u;

        PCCLCR = curr;
    }

    /**
     * Get PCCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline bool get_PCCLCR_LGO() volatile
    {
        return PCCLCR & (1u << 0u);
    }

    /**
     * Set PCCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void set_PCCLCR_LGO() volatile
    {
        PCCLCR |= 1u << 0u;
    }

    /**
     * Clear PCCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void clear_PCCLCR_LGO() volatile
    {
        PCCLCR &= ~(1u << 0u);
    }

    /**
     * Toggle PCCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void toggle_PCCLCR_LGO() volatile
    {
        PCCLCR ^= 1u << 0u;
    }

    /**
     * Get all of PCCLCR's bit fields.
     *
     * (read-write) PC bus Cache line control register
     */
    inline void get_PCCLCR(bool &LACC, bool &LADSEL, LMEM_PCCLCR_LCMD &LCMD,
                           bool &LCWAY, bool &LCIMB, bool &LCIVB, bool &TDSEL,
                           bool &WSEL, uint16_t &CACHEADDR, bool &LGO) volatile
    {
        uint32_t curr = PCCLCR;

        LACC = curr & (1u << 27u);
        LADSEL = curr & (1u << 26u);
        LCMD = LMEM_PCCLCR_LCMD((curr >> 24u) & 0b11u);
        LCWAY = curr & (1u << 22u);
        LCIMB = curr & (1u << 21u);
        LCIVB = curr & (1u << 20u);
        TDSEL = curr & (1u << 16u);
        WSEL = curr & (1u << 14u);
        CACHEADDR = (curr >> 2u) & 0b111111111111u;
        LGO = curr & (1u << 0u);
    }

    /**
     * Set all of PCCLCR's bit fields.
     *
     * (read-write) PC bus Cache line control register
     */
    inline void set_PCCLCR(bool LACC, bool LADSEL, LMEM_PCCLCR_LCMD LCMD,
                           bool LCWAY, bool LCIMB, bool LCIVB, bool TDSEL,
                           bool WSEL, uint16_t CACHEADDR, bool LGO) volatile
    {
        uint32_t curr = PCCLCR;

        curr &= ~(0b1u << 27u);
        curr |= (LACC & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (LADSEL & 0b1u) << 26u;
        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(LCMD) & 0b11u) << 24u;
        curr &= ~(0b1u << 22u);
        curr |= (LCWAY & 0b1u) << 22u;
        curr &= ~(0b1u << 21u);
        curr |= (LCIMB & 0b1u) << 21u;
        curr &= ~(0b1u << 20u);
        curr |= (LCIVB & 0b1u) << 20u;
        curr &= ~(0b1u << 16u);
        curr |= (TDSEL & 0b1u) << 16u;
        curr &= ~(0b1u << 14u);
        curr |= (WSEL & 0b1u) << 14u;
        curr &= ~(0b111111111111u << 2u);
        curr |= (CACHEADDR & 0b111111111111u) << 2u;
        curr &= ~(0b1u << 0u);
        curr |= (LGO & 0b1u) << 0u;

        PCCLCR = curr;
    }

    /**
     * Get PCCSAR's PHYADDR field.
     *
     * Physical Address
     */
    inline uint32_t get_PCCSAR_PHYADDR() volatile
    {
        return (PCCSAR >> 1u) & 0b1111111111111111111111111111111u;
    }

    /**
     * Set PCCSAR's PHYADDR field.
     *
     * Physical Address
     */
    inline void set_PCCSAR_PHYADDR(uint32_t value) volatile
    {
        uint32_t curr = PCCSAR;

        curr &= ~(0b1111111111111111111111111111111u << 1u);
        curr |= (value & 0b1111111111111111111111111111111u) << 1u;

        PCCSAR = curr;
    }

    /**
     * Get PCCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline bool get_PCCSAR_LGO() volatile
    {
        return PCCSAR & (1u << 0u);
    }

    /**
     * Set PCCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void set_PCCSAR_LGO() volatile
    {
        PCCSAR |= 1u << 0u;
    }

    /**
     * Clear PCCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void clear_PCCSAR_LGO() volatile
    {
        PCCSAR &= ~(1u << 0u);
    }

    /**
     * Toggle PCCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void toggle_PCCSAR_LGO() volatile
    {
        PCCSAR ^= 1u << 0u;
    }

    /**
     * Get all of PCCSAR's bit fields.
     *
     * (read-write) PC bus Cache search address register
     */
    inline void get_PCCSAR(uint32_t &PHYADDR, bool &LGO) volatile
    {
        uint32_t curr = PCCSAR;

        PHYADDR = (curr >> 1u) & 0b1111111111111111111111111111111u;
        LGO = curr & (1u << 0u);
    }

    /**
     * Set all of PCCSAR's bit fields.
     *
     * (read-write) PC bus Cache search address register
     */
    inline void set_PCCSAR(uint32_t PHYADDR, bool LGO) volatile
    {
        uint32_t curr = PCCSAR;

        curr &= ~(0b1111111111111111111111111111111u << 1u);
        curr |= (PHYADDR & 0b1111111111111111111111111111111u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LGO & 0b1u) << 0u;

        PCCSAR = curr;
    }

    /**
     * Get PCCCVR's DATA field.
     *
     * Cache read/write Data
     */
    inline uint32_t get_PCCCVR_DATA() volatile
    {
        return (PCCCVR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set PCCCVR's DATA field.
     *
     * Cache read/write Data
     */
    inline void set_PCCCVR_DATA(uint32_t value) volatile
    {
        uint32_t curr = PCCCVR;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        PCCCVR = curr;
    }

    /**
     * Get PSCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline bool get_PSCCR_GO() volatile
    {
        return PSCCR & (1u << 31u);
    }

    /**
     * Set PSCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline void set_PSCCR_GO() volatile
    {
        PSCCR |= 1u << 31u;
    }

    /**
     * Clear PSCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline void clear_PSCCR_GO() volatile
    {
        PSCCR &= ~(1u << 31u);
    }

    /**
     * Toggle PSCCR's GO bit.
     *
     * Initiate Cache Command
     */
    inline void toggle_PSCCR_GO() volatile
    {
        PSCCR ^= 1u << 31u;
    }

    /**
     * Get PSCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline bool get_PSCCR_PUSHW1() volatile
    {
        return PSCCR & (1u << 27u);
    }

    /**
     * Set PSCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline void set_PSCCR_PUSHW1() volatile
    {
        PSCCR |= 1u << 27u;
    }

    /**
     * Clear PSCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline void clear_PSCCR_PUSHW1() volatile
    {
        PSCCR &= ~(1u << 27u);
    }

    /**
     * Toggle PSCCR's PUSHW1 bit.
     *
     * Push Way 1
     */
    inline void toggle_PSCCR_PUSHW1() volatile
    {
        PSCCR ^= 1u << 27u;
    }

    /**
     * Get PSCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline bool get_PSCCR_INVW1() volatile
    {
        return PSCCR & (1u << 26u);
    }

    /**
     * Set PSCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline void set_PSCCR_INVW1() volatile
    {
        PSCCR |= 1u << 26u;
    }

    /**
     * Clear PSCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline void clear_PSCCR_INVW1() volatile
    {
        PSCCR &= ~(1u << 26u);
    }

    /**
     * Toggle PSCCR's INVW1 bit.
     *
     * Invalidate Way 1
     */
    inline void toggle_PSCCR_INVW1() volatile
    {
        PSCCR ^= 1u << 26u;
    }

    /**
     * Get PSCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline bool get_PSCCR_PUSHW0() volatile
    {
        return PSCCR & (1u << 25u);
    }

    /**
     * Set PSCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline void set_PSCCR_PUSHW0() volatile
    {
        PSCCR |= 1u << 25u;
    }

    /**
     * Clear PSCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline void clear_PSCCR_PUSHW0() volatile
    {
        PSCCR &= ~(1u << 25u);
    }

    /**
     * Toggle PSCCR's PUSHW0 bit.
     *
     * Push Way 0
     */
    inline void toggle_PSCCR_PUSHW0() volatile
    {
        PSCCR ^= 1u << 25u;
    }

    /**
     * Get PSCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline bool get_PSCCR_INVW0() volatile
    {
        return PSCCR & (1u << 24u);
    }

    /**
     * Set PSCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline void set_PSCCR_INVW0() volatile
    {
        PSCCR |= 1u << 24u;
    }

    /**
     * Clear PSCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline void clear_PSCCR_INVW0() volatile
    {
        PSCCR &= ~(1u << 24u);
    }

    /**
     * Toggle PSCCR's INVW0 bit.
     *
     * Invalidate Way 0
     */
    inline void toggle_PSCCR_INVW0() volatile
    {
        PSCCR ^= 1u << 24u;
    }

    /**
     * Get PSCCR's PSCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline bool get_PSCCR_PSCR3() volatile
    {
        return PSCCR & (1u << 3u);
    }

    /**
     * Set PSCCR's PSCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline void set_PSCCR_PSCR3() volatile
    {
        PSCCR |= 1u << 3u;
    }

    /**
     * Clear PSCCR's PSCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline void clear_PSCCR_PSCR3() volatile
    {
        PSCCR &= ~(1u << 3u);
    }

    /**
     * Toggle PSCCR's PSCR3 bit.
     *
     * Forces no allocation on cache misses
     */
    inline void toggle_PSCCR_PSCR3() volatile
    {
        PSCCR ^= 1u << 3u;
    }

    /**
     * Get PSCCR's PSCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline bool get_PSCCR_PSCR2() volatile
    {
        return PSCCR & (1u << 2u);
    }

    /**
     * Set PSCCR's PSCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline void set_PSCCR_PSCR2() volatile
    {
        PSCCR |= 1u << 2u;
    }

    /**
     * Clear PSCCR's PSCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline void clear_PSCCR_PSCR2() volatile
    {
        PSCCR &= ~(1u << 2u);
    }

    /**
     * Toggle PSCCR's PSCR2 bit.
     *
     * Forces all cacheable spaces to write through
     */
    inline void toggle_PSCCR_PSCR2() volatile
    {
        PSCCR ^= 1u << 2u;
    }

    /**
     * Get PSCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline bool get_PSCCR_ENWRBUF() volatile
    {
        return PSCCR & (1u << 1u);
    }

    /**
     * Set PSCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline void set_PSCCR_ENWRBUF() volatile
    {
        PSCCR |= 1u << 1u;
    }

    /**
     * Clear PSCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline void clear_PSCCR_ENWRBUF() volatile
    {
        PSCCR &= ~(1u << 1u);
    }

    /**
     * Toggle PSCCR's ENWRBUF bit.
     *
     * Enable Write Buffer
     */
    inline void toggle_PSCCR_ENWRBUF() volatile
    {
        PSCCR ^= 1u << 1u;
    }

    /**
     * Get PSCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline bool get_PSCCR_ENCACHE() volatile
    {
        return PSCCR & (1u << 0u);
    }

    /**
     * Set PSCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline void set_PSCCR_ENCACHE() volatile
    {
        PSCCR |= 1u << 0u;
    }

    /**
     * Clear PSCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline void clear_PSCCR_ENCACHE() volatile
    {
        PSCCR &= ~(1u << 0u);
    }

    /**
     * Toggle PSCCR's ENCACHE bit.
     *
     * Cache enable
     */
    inline void toggle_PSCCR_ENCACHE() volatile
    {
        PSCCR ^= 1u << 0u;
    }

    /**
     * Get all of PSCCR's bit fields.
     *
     * (read-write) PS bus Cache control register
     */
    inline void get_PSCCR(bool &GO, bool &PUSHW1, bool &INVW1, bool &PUSHW0,
                          bool &INVW0, bool &PSCR3, bool &PSCR2, bool &ENWRBUF,
                          bool &ENCACHE) volatile
    {
        uint32_t curr = PSCCR;

        GO = curr & (1u << 31u);
        PUSHW1 = curr & (1u << 27u);
        INVW1 = curr & (1u << 26u);
        PUSHW0 = curr & (1u << 25u);
        INVW0 = curr & (1u << 24u);
        PSCR3 = curr & (1u << 3u);
        PSCR2 = curr & (1u << 2u);
        ENWRBUF = curr & (1u << 1u);
        ENCACHE = curr & (1u << 0u);
    }

    /**
     * Set all of PSCCR's bit fields.
     *
     * (read-write) PS bus Cache control register
     */
    inline void set_PSCCR(bool GO, bool PUSHW1, bool INVW1, bool PUSHW0,
                          bool INVW0, bool PSCR3, bool PSCR2, bool ENWRBUF,
                          bool ENCACHE) volatile
    {
        uint32_t curr = PSCCR;

        curr &= ~(0b1u << 31u);
        curr |= (GO & 0b1u) << 31u;
        curr &= ~(0b1u << 27u);
        curr |= (PUSHW1 & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (INVW1 & 0b1u) << 26u;
        curr &= ~(0b1u << 25u);
        curr |= (PUSHW0 & 0b1u) << 25u;
        curr &= ~(0b1u << 24u);
        curr |= (INVW0 & 0b1u) << 24u;
        curr &= ~(0b1u << 3u);
        curr |= (PSCR3 & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (PSCR2 & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (ENWRBUF & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (ENCACHE & 0b1u) << 0u;

        PSCCR = curr;
    }

    /**
     * Get PSCLCR's LACC bit.
     *
     * Line access type
     */
    inline bool get_PSCLCR_LACC() volatile
    {
        return PSCLCR & (1u << 27u);
    }

    /**
     * Set PSCLCR's LACC bit.
     *
     * Line access type
     */
    inline void set_PSCLCR_LACC() volatile
    {
        PSCLCR |= 1u << 27u;
    }

    /**
     * Clear PSCLCR's LACC bit.
     *
     * Line access type
     */
    inline void clear_PSCLCR_LACC() volatile
    {
        PSCLCR &= ~(1u << 27u);
    }

    /**
     * Toggle PSCLCR's LACC bit.
     *
     * Line access type
     */
    inline void toggle_PSCLCR_LACC() volatile
    {
        PSCLCR ^= 1u << 27u;
    }

    /**
     * Get PSCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline bool get_PSCLCR_LADSEL() volatile
    {
        return PSCLCR & (1u << 26u);
    }

    /**
     * Set PSCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline void set_PSCLCR_LADSEL() volatile
    {
        PSCLCR |= 1u << 26u;
    }

    /**
     * Clear PSCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline void clear_PSCLCR_LADSEL() volatile
    {
        PSCLCR &= ~(1u << 26u);
    }

    /**
     * Toggle PSCLCR's LADSEL bit.
     *
     * Line Address Select
     */
    inline void toggle_PSCLCR_LADSEL() volatile
    {
        PSCLCR ^= 1u << 26u;
    }

    /**
     * Get PSCLCR's LCMD field.
     *
     * Line Command
     */
    inline LMEM_PSCLCR_LCMD get_PSCLCR_LCMD() volatile
    {
        return LMEM_PSCLCR_LCMD((PSCLCR >> 24u) & 0b11u);
    }

    /**
     * Set PSCLCR's LCMD field.
     *
     * Line Command
     */
    inline void set_PSCLCR_LCMD(LMEM_PSCLCR_LCMD value) volatile
    {
        uint32_t curr = PSCLCR;

        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(value) & 0b11u) << 24u;

        PSCLCR = curr;
    }

    /**
     * Get PSCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline bool get_PSCLCR_LCWAY() volatile
    {
        return PSCLCR & (1u << 22u);
    }

    /**
     * Set PSCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline void set_PSCLCR_LCWAY() volatile
    {
        PSCLCR |= 1u << 22u;
    }

    /**
     * Clear PSCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline void clear_PSCLCR_LCWAY() volatile
    {
        PSCLCR &= ~(1u << 22u);
    }

    /**
     * Toggle PSCLCR's LCWAY bit.
     *
     * Line Command Way
     */
    inline void toggle_PSCLCR_LCWAY() volatile
    {
        PSCLCR ^= 1u << 22u;
    }

    /**
     * Get PSCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline bool get_PSCLCR_LCIMB() volatile
    {
        return PSCLCR & (1u << 21u);
    }

    /**
     * Set PSCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline void set_PSCLCR_LCIMB() volatile
    {
        PSCLCR |= 1u << 21u;
    }

    /**
     * Clear PSCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline void clear_PSCLCR_LCIMB() volatile
    {
        PSCLCR &= ~(1u << 21u);
    }

    /**
     * Toggle PSCLCR's LCIMB bit.
     *
     * Line Command Initial Modified Bit
     */
    inline void toggle_PSCLCR_LCIMB() volatile
    {
        PSCLCR ^= 1u << 21u;
    }

    /**
     * Get PSCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline bool get_PSCLCR_LCIVB() volatile
    {
        return PSCLCR & (1u << 20u);
    }

    /**
     * Set PSCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline void set_PSCLCR_LCIVB() volatile
    {
        PSCLCR |= 1u << 20u;
    }

    /**
     * Clear PSCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline void clear_PSCLCR_LCIVB() volatile
    {
        PSCLCR &= ~(1u << 20u);
    }

    /**
     * Toggle PSCLCR's LCIVB bit.
     *
     * Line Command Initial Valid Bit
     */
    inline void toggle_PSCLCR_LCIVB() volatile
    {
        PSCLCR ^= 1u << 20u;
    }

    /**
     * Get PSCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline bool get_PSCLCR_TDSEL() volatile
    {
        return PSCLCR & (1u << 16u);
    }

    /**
     * Set PSCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline void set_PSCLCR_TDSEL() volatile
    {
        PSCLCR |= 1u << 16u;
    }

    /**
     * Clear PSCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline void clear_PSCLCR_TDSEL() volatile
    {
        PSCLCR &= ~(1u << 16u);
    }

    /**
     * Toggle PSCLCR's TDSEL bit.
     *
     * Tag/Data Select
     */
    inline void toggle_PSCLCR_TDSEL() volatile
    {
        PSCLCR ^= 1u << 16u;
    }

    /**
     * Get PSCLCR's WSEL bit.
     *
     * Way select
     */
    inline bool get_PSCLCR_WSEL() volatile
    {
        return PSCLCR & (1u << 14u);
    }

    /**
     * Set PSCLCR's WSEL bit.
     *
     * Way select
     */
    inline void set_PSCLCR_WSEL() volatile
    {
        PSCLCR |= 1u << 14u;
    }

    /**
     * Clear PSCLCR's WSEL bit.
     *
     * Way select
     */
    inline void clear_PSCLCR_WSEL() volatile
    {
        PSCLCR &= ~(1u << 14u);
    }

    /**
     * Toggle PSCLCR's WSEL bit.
     *
     * Way select
     */
    inline void toggle_PSCLCR_WSEL() volatile
    {
        PSCLCR ^= 1u << 14u;
    }

    /**
     * Get PSCLCR's CACHEADDR field.
     *
     * Cache address
     */
    inline uint16_t get_PSCLCR_CACHEADDR() volatile
    {
        return (PSCLCR >> 2u) & 0b111111111111u;
    }

    /**
     * Set PSCLCR's CACHEADDR field.
     *
     * Cache address
     */
    inline void set_PSCLCR_CACHEADDR(uint16_t value) volatile
    {
        uint32_t curr = PSCLCR;

        curr &= ~(0b111111111111u << 2u);
        curr |= (value & 0b111111111111u) << 2u;

        PSCLCR = curr;
    }

    /**
     * Get PSCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline bool get_PSCLCR_LGO() volatile
    {
        return PSCLCR & (1u << 0u);
    }

    /**
     * Set PSCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void set_PSCLCR_LGO() volatile
    {
        PSCLCR |= 1u << 0u;
    }

    /**
     * Clear PSCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void clear_PSCLCR_LGO() volatile
    {
        PSCLCR &= ~(1u << 0u);
    }

    /**
     * Toggle PSCLCR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void toggle_PSCLCR_LGO() volatile
    {
        PSCLCR ^= 1u << 0u;
    }

    /**
     * Get all of PSCLCR's bit fields.
     *
     * (read-write) PS bus Cache line control register
     */
    inline void get_PSCLCR(bool &LACC, bool &LADSEL, LMEM_PSCLCR_LCMD &LCMD,
                           bool &LCWAY, bool &LCIMB, bool &LCIVB, bool &TDSEL,
                           bool &WSEL, uint16_t &CACHEADDR, bool &LGO) volatile
    {
        uint32_t curr = PSCLCR;

        LACC = curr & (1u << 27u);
        LADSEL = curr & (1u << 26u);
        LCMD = LMEM_PSCLCR_LCMD((curr >> 24u) & 0b11u);
        LCWAY = curr & (1u << 22u);
        LCIMB = curr & (1u << 21u);
        LCIVB = curr & (1u << 20u);
        TDSEL = curr & (1u << 16u);
        WSEL = curr & (1u << 14u);
        CACHEADDR = (curr >> 2u) & 0b111111111111u;
        LGO = curr & (1u << 0u);
    }

    /**
     * Set all of PSCLCR's bit fields.
     *
     * (read-write) PS bus Cache line control register
     */
    inline void set_PSCLCR(bool LACC, bool LADSEL, LMEM_PSCLCR_LCMD LCMD,
                           bool LCWAY, bool LCIMB, bool LCIVB, bool TDSEL,
                           bool WSEL, uint16_t CACHEADDR, bool LGO) volatile
    {
        uint32_t curr = PSCLCR;

        curr &= ~(0b1u << 27u);
        curr |= (LACC & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (LADSEL & 0b1u) << 26u;
        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(LCMD) & 0b11u) << 24u;
        curr &= ~(0b1u << 22u);
        curr |= (LCWAY & 0b1u) << 22u;
        curr &= ~(0b1u << 21u);
        curr |= (LCIMB & 0b1u) << 21u;
        curr &= ~(0b1u << 20u);
        curr |= (LCIVB & 0b1u) << 20u;
        curr &= ~(0b1u << 16u);
        curr |= (TDSEL & 0b1u) << 16u;
        curr &= ~(0b1u << 14u);
        curr |= (WSEL & 0b1u) << 14u;
        curr &= ~(0b111111111111u << 2u);
        curr |= (CACHEADDR & 0b111111111111u) << 2u;
        curr &= ~(0b1u << 0u);
        curr |= (LGO & 0b1u) << 0u;

        PSCLCR = curr;
    }

    /**
     * Get PSCSAR's PHYADDR field.
     *
     * Physical Address
     */
    inline uint32_t get_PSCSAR_PHYADDR() volatile
    {
        return (PSCSAR >> 1u) & 0b1111111111111111111111111111111u;
    }

    /**
     * Set PSCSAR's PHYADDR field.
     *
     * Physical Address
     */
    inline void set_PSCSAR_PHYADDR(uint32_t value) volatile
    {
        uint32_t curr = PSCSAR;

        curr &= ~(0b1111111111111111111111111111111u << 1u);
        curr |= (value & 0b1111111111111111111111111111111u) << 1u;

        PSCSAR = curr;
    }

    /**
     * Get PSCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline bool get_PSCSAR_LGO() volatile
    {
        return PSCSAR & (1u << 0u);
    }

    /**
     * Set PSCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void set_PSCSAR_LGO() volatile
    {
        PSCSAR |= 1u << 0u;
    }

    /**
     * Clear PSCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void clear_PSCSAR_LGO() volatile
    {
        PSCSAR &= ~(1u << 0u);
    }

    /**
     * Toggle PSCSAR's LGO bit.
     *
     * Initiate Cache Line Command
     */
    inline void toggle_PSCSAR_LGO() volatile
    {
        PSCSAR ^= 1u << 0u;
    }

    /**
     * Get all of PSCSAR's bit fields.
     *
     * (read-write) PS bus Cache search address register
     */
    inline void get_PSCSAR(uint32_t &PHYADDR, bool &LGO) volatile
    {
        uint32_t curr = PSCSAR;

        PHYADDR = (curr >> 1u) & 0b1111111111111111111111111111111u;
        LGO = curr & (1u << 0u);
    }

    /**
     * Set all of PSCSAR's bit fields.
     *
     * (read-write) PS bus Cache search address register
     */
    inline void set_PSCSAR(uint32_t PHYADDR, bool LGO) volatile
    {
        uint32_t curr = PSCSAR;

        curr &= ~(0b1111111111111111111111111111111u << 1u);
        curr |= (PHYADDR & 0b1111111111111111111111111111111u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LGO & 0b1u) << 0u;

        PSCSAR = curr;
    }

    /**
     * Get PSCCVR's DATA field.
     *
     * Cache read/write Data
     */
    inline uint32_t get_PSCCVR_DATA() volatile
    {
        return (PSCCVR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set PSCCVR's DATA field.
     *
     * Cache read/write Data
     */
    inline void set_PSCCVR_DATA(uint32_t value) volatile
    {
        uint32_t curr = PSCCVR;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        PSCCVR = curr;
    }
};

static_assert(sizeof(lmem) == lmem::size);

static volatile lmem *const LMEM = reinterpret_cast<lmem *>(0xE0082000);

}; // namespace MIMXRT1176::CM4