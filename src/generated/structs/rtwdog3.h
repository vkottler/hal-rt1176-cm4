/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/RTWDOG3_CS_TST.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * WDOG
 */
struct [[gnu::packed]] rtwdog3
{
    /* Constant attributes. */
    static constexpr std::size_t size = 16; /*!< rtwdog3's size in bytes. */

    /* Fields. */
    uint32_t CS;    /*!< (read-write) Watchdog Control and Status Register */
    uint32_t CNT;   /*!< (read-write) Watchdog Counter Register */
    uint32_t TOVAL; /*!< (read-write) Watchdog Timeout Value Register */
    uint32_t WIN;   /*!< (read-write) Watchdog Window Register */

    /* Methods. */

    /**
     * Get CS's WIN bit.
     *
     * Watchdog Window
     */
    inline bool get_CS_WIN() volatile
    {
        return CS & (1u << 15u);
    }

    /**
     * Set CS's WIN bit.
     *
     * Watchdog Window
     */
    inline void set_CS_WIN() volatile
    {
        CS |= 1u << 15u;
    }

    /**
     * Clear CS's WIN bit.
     *
     * Watchdog Window
     */
    inline void clear_CS_WIN() volatile
    {
        CS &= ~(1u << 15u);
    }

    /**
     * Toggle CS's WIN bit.
     *
     * Watchdog Window
     */
    inline void toggle_CS_WIN() volatile
    {
        CS ^= 1u << 15u;
    }

    /**
     * Get CS's FLG bit.
     *
     * Watchdog Interrupt Flag
     */
    inline bool get_CS_FLG() volatile
    {
        return CS & (1u << 14u);
    }

    /**
     * Set CS's FLG bit.
     *
     * Watchdog Interrupt Flag
     */
    inline void set_CS_FLG() volatile
    {
        CS |= 1u << 14u;
    }

    /**
     * Clear CS's FLG bit.
     *
     * Watchdog Interrupt Flag
     */
    inline void clear_CS_FLG() volatile
    {
        CS &= ~(1u << 14u);
    }

    /**
     * Toggle CS's FLG bit.
     *
     * Watchdog Interrupt Flag
     */
    inline void toggle_CS_FLG() volatile
    {
        CS ^= 1u << 14u;
    }

    /**
     * Get CS's CMD32EN bit.
     *
     * Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit)
     * refresh/unlock command write words
     */
    inline bool get_CS_CMD32EN() volatile
    {
        return CS & (1u << 13u);
    }

    /**
     * Set CS's CMD32EN bit.
     *
     * Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit)
     * refresh/unlock command write words
     */
    inline void set_CS_CMD32EN() volatile
    {
        CS |= 1u << 13u;
    }

    /**
     * Clear CS's CMD32EN bit.
     *
     * Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit)
     * refresh/unlock command write words
     */
    inline void clear_CS_CMD32EN() volatile
    {
        CS &= ~(1u << 13u);
    }

    /**
     * Toggle CS's CMD32EN bit.
     *
     * Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit)
     * refresh/unlock command write words
     */
    inline void toggle_CS_CMD32EN() volatile
    {
        CS ^= 1u << 13u;
    }

    /**
     * Get CS's PRES bit.
     *
     * Watchdog prescaler
     */
    inline bool get_CS_PRES() volatile
    {
        return CS & (1u << 12u);
    }

    /**
     * Set CS's PRES bit.
     *
     * Watchdog prescaler
     */
    inline void set_CS_PRES() volatile
    {
        CS |= 1u << 12u;
    }

    /**
     * Clear CS's PRES bit.
     *
     * Watchdog prescaler
     */
    inline void clear_CS_PRES() volatile
    {
        CS &= ~(1u << 12u);
    }

    /**
     * Toggle CS's PRES bit.
     *
     * Watchdog prescaler
     */
    inline void toggle_CS_PRES() volatile
    {
        CS ^= 1u << 12u;
    }

    /**
     * Get CS's ULK bit.
     *
     * Unlock status
     */
    inline bool get_CS_ULK() volatile
    {
        return CS & (1u << 11u);
    }

    /**
     * Get CS's RCS bit.
     *
     * Reconfiguration Success
     */
    inline bool get_CS_RCS() volatile
    {
        return CS & (1u << 10u);
    }

    /**
     * Get CS's CLK field.
     *
     * Watchdog Clock
     */
    inline uint8_t get_CS_CLK() volatile
    {
        return (CS >> 8u) & 0b11u;
    }

    /**
     * Set CS's CLK field.
     *
     * Watchdog Clock
     */
    inline void set_CS_CLK(uint8_t value) volatile
    {
        uint32_t curr = CS;

        curr &= ~(0b11u << 8u);
        curr |= (value & 0b11u) << 8u;

        CS = curr;
    }

    /**
     * Get CS's EN bit.
     *
     * Watchdog Enable
     */
    inline bool get_CS_EN() volatile
    {
        return CS & (1u << 7u);
    }

    /**
     * Set CS's EN bit.
     *
     * Watchdog Enable
     */
    inline void set_CS_EN() volatile
    {
        CS |= 1u << 7u;
    }

    /**
     * Clear CS's EN bit.
     *
     * Watchdog Enable
     */
    inline void clear_CS_EN() volatile
    {
        CS &= ~(1u << 7u);
    }

    /**
     * Toggle CS's EN bit.
     *
     * Watchdog Enable
     */
    inline void toggle_CS_EN() volatile
    {
        CS ^= 1u << 7u;
    }

    /**
     * Get CS's INT bit.
     *
     * Watchdog Interrupt
     */
    inline bool get_CS_INT() volatile
    {
        return CS & (1u << 6u);
    }

    /**
     * Set CS's INT bit.
     *
     * Watchdog Interrupt
     */
    inline void set_CS_INT() volatile
    {
        CS |= 1u << 6u;
    }

    /**
     * Clear CS's INT bit.
     *
     * Watchdog Interrupt
     */
    inline void clear_CS_INT() volatile
    {
        CS &= ~(1u << 6u);
    }

    /**
     * Toggle CS's INT bit.
     *
     * Watchdog Interrupt
     */
    inline void toggle_CS_INT() volatile
    {
        CS ^= 1u << 6u;
    }

    /**
     * Get CS's UPDATE bit.
     *
     * Allow updates
     */
    inline bool get_CS_UPDATE() volatile
    {
        return CS & (1u << 5u);
    }

    /**
     * Set CS's UPDATE bit.
     *
     * Allow updates
     */
    inline void set_CS_UPDATE() volatile
    {
        CS |= 1u << 5u;
    }

    /**
     * Clear CS's UPDATE bit.
     *
     * Allow updates
     */
    inline void clear_CS_UPDATE() volatile
    {
        CS &= ~(1u << 5u);
    }

    /**
     * Toggle CS's UPDATE bit.
     *
     * Allow updates
     */
    inline void toggle_CS_UPDATE() volatile
    {
        CS ^= 1u << 5u;
    }

    /**
     * Get CS's TST field.
     *
     * Watchdog Test
     */
    inline RTWDOG3_CS_TST get_CS_TST() volatile
    {
        return RTWDOG3_CS_TST((CS >> 3u) & 0b11u);
    }

    /**
     * Set CS's TST field.
     *
     * Watchdog Test
     */
    inline void set_CS_TST(RTWDOG3_CS_TST value) volatile
    {
        uint32_t curr = CS;

        curr &= ~(0b11u << 3u);
        curr |= (std::to_underlying(value) & 0b11u) << 3u;

        CS = curr;
    }

    /**
     * Get CS's DBG bit.
     *
     * Debug Enable
     */
    inline bool get_CS_DBG() volatile
    {
        return CS & (1u << 2u);
    }

    /**
     * Set CS's DBG bit.
     *
     * Debug Enable
     */
    inline void set_CS_DBG() volatile
    {
        CS |= 1u << 2u;
    }

    /**
     * Clear CS's DBG bit.
     *
     * Debug Enable
     */
    inline void clear_CS_DBG() volatile
    {
        CS &= ~(1u << 2u);
    }

    /**
     * Toggle CS's DBG bit.
     *
     * Debug Enable
     */
    inline void toggle_CS_DBG() volatile
    {
        CS ^= 1u << 2u;
    }

    /**
     * Get CS's WAIT bit.
     *
     * Wait Enable
     */
    inline bool get_CS_WAIT() volatile
    {
        return CS & (1u << 1u);
    }

    /**
     * Set CS's WAIT bit.
     *
     * Wait Enable
     */
    inline void set_CS_WAIT() volatile
    {
        CS |= 1u << 1u;
    }

    /**
     * Clear CS's WAIT bit.
     *
     * Wait Enable
     */
    inline void clear_CS_WAIT() volatile
    {
        CS &= ~(1u << 1u);
    }

    /**
     * Toggle CS's WAIT bit.
     *
     * Wait Enable
     */
    inline void toggle_CS_WAIT() volatile
    {
        CS ^= 1u << 1u;
    }

    /**
     * Get CS's STOP bit.
     *
     * Stop Enable
     */
    inline bool get_CS_STOP() volatile
    {
        return CS & (1u << 0u);
    }

    /**
     * Set CS's STOP bit.
     *
     * Stop Enable
     */
    inline void set_CS_STOP() volatile
    {
        CS |= 1u << 0u;
    }

    /**
     * Clear CS's STOP bit.
     *
     * Stop Enable
     */
    inline void clear_CS_STOP() volatile
    {
        CS &= ~(1u << 0u);
    }

    /**
     * Toggle CS's STOP bit.
     *
     * Stop Enable
     */
    inline void toggle_CS_STOP() volatile
    {
        CS ^= 1u << 0u;
    }

    /**
     * Get all of CS's bit fields.
     *
     * (read-write) Watchdog Control and Status Register
     */
    inline void get_CS(bool &WIN, bool &FLG, bool &CMD32EN, bool &PRES,
                       bool &ULK, bool &RCS, uint8_t &CLK, bool &EN, bool &INT,
                       bool &UPDATE, RTWDOG3_CS_TST &TST, bool &DBG,
                       bool &WAIT, bool &STOP) volatile
    {
        uint32_t curr = CS;

        WIN = curr & (1u << 15u);
        FLG = curr & (1u << 14u);
        CMD32EN = curr & (1u << 13u);
        PRES = curr & (1u << 12u);
        ULK = curr & (1u << 11u);
        RCS = curr & (1u << 10u);
        CLK = (curr >> 8u) & 0b11u;
        EN = curr & (1u << 7u);
        INT = curr & (1u << 6u);
        UPDATE = curr & (1u << 5u);
        TST = RTWDOG3_CS_TST((curr >> 3u) & 0b11u);
        DBG = curr & (1u << 2u);
        WAIT = curr & (1u << 1u);
        STOP = curr & (1u << 0u);
    }

    /**
     * Set all of CS's bit fields.
     *
     * (read-write) Watchdog Control and Status Register
     */
    inline void set_CS(bool WIN, bool FLG, bool CMD32EN, bool PRES,
                       uint8_t CLK, bool EN, bool INT, bool UPDATE,
                       RTWDOG3_CS_TST TST, bool DBG, bool WAIT,
                       bool STOP) volatile
    {
        uint32_t curr = CS;

        curr &= ~(0b1u << 15u);
        curr |= (WIN & 0b1u) << 15u;
        curr &= ~(0b1u << 14u);
        curr |= (FLG & 0b1u) << 14u;
        curr &= ~(0b1u << 13u);
        curr |= (CMD32EN & 0b1u) << 13u;
        curr &= ~(0b1u << 12u);
        curr |= (PRES & 0b1u) << 12u;
        curr &= ~(0b11u << 8u);
        curr |= (CLK & 0b11u) << 8u;
        curr &= ~(0b1u << 7u);
        curr |= (EN & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (INT & 0b1u) << 6u;
        curr &= ~(0b1u << 5u);
        curr |= (UPDATE & 0b1u) << 5u;
        curr &= ~(0b11u << 3u);
        curr |= (std::to_underlying(TST) & 0b11u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (DBG & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (WAIT & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (STOP & 0b1u) << 0u;

        CS = curr;
    }

    /**
     * Get CNT's CNTHIGH field.
     *
     * High byte of the Watchdog Counter
     */
    inline uint8_t get_CNT_CNTHIGH() volatile
    {
        return (CNT >> 8u) & 0b11111111u;
    }

    /**
     * Set CNT's CNTHIGH field.
     *
     * High byte of the Watchdog Counter
     */
    inline void set_CNT_CNTHIGH(uint8_t value) volatile
    {
        uint32_t curr = CNT;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        CNT = curr;
    }

    /**
     * Get CNT's CNTLOW field.
     *
     * Low byte of the Watchdog Counter
     */
    inline uint8_t get_CNT_CNTLOW() volatile
    {
        return (CNT >> 0u) & 0b11111111u;
    }

    /**
     * Set CNT's CNTLOW field.
     *
     * Low byte of the Watchdog Counter
     */
    inline void set_CNT_CNTLOW(uint8_t value) volatile
    {
        uint32_t curr = CNT;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        CNT = curr;
    }

    /**
     * Get all of CNT's bit fields.
     *
     * (read-write) Watchdog Counter Register
     */
    inline void get_CNT(uint8_t &CNTHIGH, uint8_t &CNTLOW) volatile
    {
        uint32_t curr = CNT;

        CNTHIGH = (curr >> 8u) & 0b11111111u;
        CNTLOW = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of CNT's bit fields.
     *
     * (read-write) Watchdog Counter Register
     */
    inline void set_CNT(uint8_t CNTHIGH, uint8_t CNTLOW) volatile
    {
        uint32_t curr = CNT;

        curr &= ~(0b11111111u << 8u);
        curr |= (CNTHIGH & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (CNTLOW & 0b11111111u) << 0u;

        CNT = curr;
    }

    /**
     * Get TOVAL's TOVALHIGH field.
     *
     * High byte of the timeout value
     */
    inline uint8_t get_TOVAL_TOVALHIGH() volatile
    {
        return (TOVAL >> 8u) & 0b11111111u;
    }

    /**
     * Set TOVAL's TOVALHIGH field.
     *
     * High byte of the timeout value
     */
    inline void set_TOVAL_TOVALHIGH(uint8_t value) volatile
    {
        uint32_t curr = TOVAL;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        TOVAL = curr;
    }

    /**
     * Get TOVAL's TOVALLOW field.
     *
     * Low byte of the timeout value
     */
    inline uint8_t get_TOVAL_TOVALLOW() volatile
    {
        return (TOVAL >> 0u) & 0b11111111u;
    }

    /**
     * Set TOVAL's TOVALLOW field.
     *
     * Low byte of the timeout value
     */
    inline void set_TOVAL_TOVALLOW(uint8_t value) volatile
    {
        uint32_t curr = TOVAL;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        TOVAL = curr;
    }

    /**
     * Get all of TOVAL's bit fields.
     *
     * (read-write) Watchdog Timeout Value Register
     */
    inline void get_TOVAL(uint8_t &TOVALHIGH, uint8_t &TOVALLOW) volatile
    {
        uint32_t curr = TOVAL;

        TOVALHIGH = (curr >> 8u) & 0b11111111u;
        TOVALLOW = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of TOVAL's bit fields.
     *
     * (read-write) Watchdog Timeout Value Register
     */
    inline void set_TOVAL(uint8_t TOVALHIGH, uint8_t TOVALLOW) volatile
    {
        uint32_t curr = TOVAL;

        curr &= ~(0b11111111u << 8u);
        curr |= (TOVALHIGH & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (TOVALLOW & 0b11111111u) << 0u;

        TOVAL = curr;
    }

    /**
     * Get WIN's WINHIGH field.
     *
     * High byte of Watchdog Window
     */
    inline uint8_t get_WIN_WINHIGH() volatile
    {
        return (WIN >> 8u) & 0b11111111u;
    }

    /**
     * Set WIN's WINHIGH field.
     *
     * High byte of Watchdog Window
     */
    inline void set_WIN_WINHIGH(uint8_t value) volatile
    {
        uint32_t curr = WIN;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        WIN = curr;
    }

    /**
     * Get WIN's WINLOW field.
     *
     * Low byte of Watchdog Window
     */
    inline uint8_t get_WIN_WINLOW() volatile
    {
        return (WIN >> 0u) & 0b11111111u;
    }

    /**
     * Set WIN's WINLOW field.
     *
     * Low byte of Watchdog Window
     */
    inline void set_WIN_WINLOW(uint8_t value) volatile
    {
        uint32_t curr = WIN;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        WIN = curr;
    }

    /**
     * Get all of WIN's bit fields.
     *
     * (read-write) Watchdog Window Register
     */
    inline void get_WIN(uint8_t &WINHIGH, uint8_t &WINLOW) volatile
    {
        uint32_t curr = WIN;

        WINHIGH = (curr >> 8u) & 0b11111111u;
        WINLOW = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of WIN's bit fields.
     *
     * (read-write) Watchdog Window Register
     */
    inline void set_WIN(uint8_t WINHIGH, uint8_t WINLOW) volatile
    {
        uint32_t curr = WIN;

        curr &= ~(0b11111111u << 8u);
        curr |= (WINHIGH & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (WINLOW & 0b11111111u) << 0u;

        WIN = curr;
    }
};

static_assert(sizeof(rtwdog3) == rtwdog3::size);

static volatile rtwdog3 *const RTWDOG3 =
    reinterpret_cast<rtwdog3 *>(0x40038000);

static volatile rtwdog3 *const RTWDOG4 =
    reinterpret_cast<rtwdog3 *>(0x40C10000);

}; // namespace MIMXRT1176::CM4
