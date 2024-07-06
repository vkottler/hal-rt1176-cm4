/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/MCM_CR_CTCMAP.h"
#include "../enums/MCM_CR_STCMAP.h"
#include "../enums/MCM_FATR_BESZ.h"
#include "../enums/MCM_LMDR_DPW.h"
#include "../enums/MCM_LMDR_LMSZ.h"
#include "../enums/MCM_LMDR_MT.h"
#include "../enums/MCM_LMDR_WY.h"
#include "../enums/MCM_PCT_PCT.h"
#include "../enums/MCM_PLAMC_AMC.h"
#include "../enums/MCM_PLASC_ASC.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * Core Platform Miscellaneous Control Module
 */
struct [[gnu::packed]] mcm
{
    /* Constant attributes. */
    static constexpr std::size_t size = 1192; /*!< mcm's size in bytes. */

    /* Fields. */
    uint16_t PLREV;  /*!< (read-write) SoC-defined platform revision */
    uint16_t PCT;    /*!< (read-write) Processor core type */
    uint32_t MEMCFG; /*!< (read-write) Memory configuration */
    uint16_t
        PLASC; /*!< (read-write) Crossbar Switch (AXBS) Slave Configuration */
    uint16_t
        PLAMC; /*!< (read-write) Crossbar Switch (AXBS) Master Configuration */
    uint32_t CR;   /*!< (read-write) Control Register */
    uint32_t ISCR; /*!< (read-write) Interrupt Status and Control Register */
    static constexpr std::size_t reserved_padding0_length = 3;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    uint32_t FADR; /*!< (read-write) Fault address register */
    uint32_t FATR; /*!< (read-write) Fault attributes register */
    uint32_t FDR;  /*!< (read-write) Fault data register */
    static constexpr std::size_t reserved_padding1_length = 245;
    const uint32_t reserved_padding1[reserved_padding1_length] = {};
    static constexpr std::size_t LMDR_length = 4;
    uint32_t LMDR[LMDR_length]; /*!< (read-write) Local Memory Descriptor
                                   Register */
    static constexpr std::size_t reserved_padding2_length = 28;
    const uint32_t reserved_padding2[reserved_padding2_length] = {};
    uint32_t LMPECR; /*!< (read-write) LMEM Parity & ECC Control Register */
    const uint32_t reserved_padding3 = {};
    uint32_t LMPEIR; /*!< (read-write) LMEM Parity & ECC Interrupt Register */
    const uint32_t reserved_padding4 = {};
    uint32_t LMFAR;  /*!< (read-write) LMEM Fault Address Register */
    uint32_t LMFATR; /*!< (read-write) LMEM Fault Attribute Register */
    static constexpr std::size_t reserved_padding5_length = 2;
    const uint32_t reserved_padding5[reserved_padding5_length] = {};
    uint32_t LMFDHR; /*!< (read-write) LMEM Fault Data High Register */
    uint32_t LMFDLR; /*!< (read-write) LMEM Fault Data Low Register */

    /* Methods. */

    /**
     * Get PLREV's PLREV field.
     *
     * The PLREV[15:0] field is specified by an platform input signal to define
     * a software-visible revision number.
     */
    inline uint16_t get_PLREV_PLREV() volatile
    {
        return (PLREV >> 0u) & 0b1111111111111111u;
    }

    /**
     * Get PCT's PCT field.
     *
     * This MCM design supports the ARM Cortex M4 core. The following value
     * identifies this core complex.
     */
    inline MCM_PCT_PCT get_PCT_PCT() volatile
    {
        return MCM_PCT_PCT((PCT >> 0u) & 0b1111111111111111u);
    }

    /**
     * Get MEMCFG's TCRAMLSZ field.
     *
     * TCRAML size
     */
    inline uint8_t get_MEMCFG_TCRAMLSZ() volatile
    {
        return (MEMCFG >> 8u) & 0b1111u;
    }

    /**
     * Get MEMCFG's TCRAMUSZ field.
     *
     * TCRAMU size
     */
    inline uint8_t get_MEMCFG_TCRAMUSZ() volatile
    {
        return (MEMCFG >> 2u) & 0b1111u;
    }

    /**
     * Get all of MEMCFG's bit fields.
     *
     * (read-write) Memory configuration
     */
    inline void get_MEMCFG(uint8_t &TCRAMLSZ, uint8_t &TCRAMUSZ) volatile
    {
        uint32_t curr = MEMCFG;

        TCRAMLSZ = (curr >> 8u) & 0b1111u;
        TCRAMUSZ = (curr >> 2u) & 0b1111u;
    }

    /**
     * Get PLASC's ASC field.
     *
     * Each bit in the ASC field indicates whether there is a corresponding
     * connection to the crossbar switch's slave input port.
     */
    inline MCM_PLASC_ASC get_PLASC_ASC() volatile
    {
        return MCM_PLASC_ASC((PLASC >> 0u) & 0b11111111u);
    }

    /**
     * Get PLAMC's AMC field.
     *
     * Each bit in the AMC field indicates whether there is a corresponding
     * connection to the AXBS master input port.
     */
    inline MCM_PLAMC_AMC get_PLAMC_AMC() volatile
    {
        return MCM_PLAMC_AMC((PLAMC >> 0u) & 0b11111111u);
    }

    /**
     * Get CR's CTCMWP bit.
     *
     * Code TCM Write Protect
     */
    inline bool get_CR_CTCMWP() volatile
    {
        return CR & (1u << 30u);
    }

    /**
     * Set CR's CTCMWP bit.
     *
     * Code TCM Write Protect
     */
    inline void set_CR_CTCMWP() volatile
    {
        CR |= 1u << 30u;
    }

    /**
     * Clear CR's CTCMWP bit.
     *
     * Code TCM Write Protect
     */
    inline void clear_CR_CTCMWP() volatile
    {
        CR &= ~(1u << 30u);
    }

    /**
     * Toggle CR's CTCMWP bit.
     *
     * Code TCM Write Protect
     */
    inline void toggle_CR_CTCMWP() volatile
    {
        CR ^= 1u << 30u;
    }

    /**
     * Get CR's CTCMAP field.
     *
     * Code TCM arbitration priority
     */
    inline MCM_CR_CTCMAP get_CR_CTCMAP() volatile
    {
        return MCM_CR_CTCMAP((CR >> 28u) & 0b11u);
    }

    /**
     * Set CR's CTCMAP field.
     *
     * Code TCM arbitration priority
     */
    inline void set_CR_CTCMAP(MCM_CR_CTCMAP value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b11u << 28u);
        curr |= (std::to_underlying(value) & 0b11u) << 28u;

        CR = curr;
    }

    /**
     * Get CR's STCMWP bit.
     *
     * System TCM write protect
     */
    inline bool get_CR_STCMWP() volatile
    {
        return CR & (1u << 26u);
    }

    /**
     * Set CR's STCMWP bit.
     *
     * System TCM write protect
     */
    inline void set_CR_STCMWP() volatile
    {
        CR |= 1u << 26u;
    }

    /**
     * Clear CR's STCMWP bit.
     *
     * System TCM write protect
     */
    inline void clear_CR_STCMWP() volatile
    {
        CR &= ~(1u << 26u);
    }

    /**
     * Toggle CR's STCMWP bit.
     *
     * System TCM write protect
     */
    inline void toggle_CR_STCMWP() volatile
    {
        CR ^= 1u << 26u;
    }

    /**
     * Get CR's STCMAP field.
     *
     * System TCM arbitration priority
     */
    inline MCM_CR_STCMAP get_CR_STCMAP() volatile
    {
        return MCM_CR_STCMAP((CR >> 24u) & 0b11u);
    }

    /**
     * Set CR's STCMAP field.
     *
     * System TCM arbitration priority
     */
    inline void set_CR_STCMAP(MCM_CR_STCMAP value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(value) & 0b11u) << 24u;

        CR = curr;
    }

    /**
     * Get CR's CBRR bit.
     *
     * Crossbar round-robin arbitration enable
     */
    inline bool get_CR_CBRR() volatile
    {
        return CR & (1u << 9u);
    }

    /**
     * Set CR's CBRR bit.
     *
     * Crossbar round-robin arbitration enable
     */
    inline void set_CR_CBRR() volatile
    {
        CR |= 1u << 9u;
    }

    /**
     * Clear CR's CBRR bit.
     *
     * Crossbar round-robin arbitration enable
     */
    inline void clear_CR_CBRR() volatile
    {
        CR &= ~(1u << 9u);
    }

    /**
     * Toggle CR's CBRR bit.
     *
     * Crossbar round-robin arbitration enable
     */
    inline void toggle_CR_CBRR() volatile
    {
        CR ^= 1u << 9u;
    }

    /**
     * Get CR's STATUS field.
     *
     * Status bits
     */
    inline uint16_t get_CR_STATUS() volatile
    {
        return (CR >> 0u) & 0b111111111u;
    }

    /**
     * Get all of CR's bit fields.
     *
     * (read-write) Control Register
     */
    inline void get_CR(bool &CTCMWP, MCM_CR_CTCMAP &CTCMAP, bool &STCMWP,
                       MCM_CR_STCMAP &STCMAP, bool &CBRR,
                       uint16_t &STATUS) volatile
    {
        uint32_t curr = CR;

        CTCMWP = curr & (1u << 30u);
        CTCMAP = MCM_CR_CTCMAP((curr >> 28u) & 0b11u);
        STCMWP = curr & (1u << 26u);
        STCMAP = MCM_CR_STCMAP((curr >> 24u) & 0b11u);
        CBRR = curr & (1u << 9u);
        STATUS = (curr >> 0u) & 0b111111111u;
    }

    /**
     * Set all of CR's bit fields.
     *
     * (read-write) Control Register
     */
    inline void set_CR(bool CTCMWP, MCM_CR_CTCMAP CTCMAP, bool STCMWP,
                       MCM_CR_STCMAP STCMAP, bool CBRR) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b1u << 30u);
        curr |= (CTCMWP & 0b1u) << 30u;
        curr &= ~(0b11u << 28u);
        curr |= (std::to_underlying(CTCMAP) & 0b11u) << 28u;
        curr &= ~(0b1u << 26u);
        curr |= (STCMWP & 0b1u) << 26u;
        curr &= ~(0b11u << 24u);
        curr |= (std::to_underlying(STCMAP) & 0b11u) << 24u;
        curr &= ~(0b1u << 9u);
        curr |= (CBRR & 0b1u) << 9u;

        CR = curr;
    }

    /**
     * Get ISCR's FIDCE bit.
     *
     * FPU input denormal interrupt enable
     */
    inline bool get_ISCR_FIDCE() volatile
    {
        return ISCR & (1u << 31u);
    }

    /**
     * Set ISCR's FIDCE bit.
     *
     * FPU input denormal interrupt enable
     */
    inline void set_ISCR_FIDCE() volatile
    {
        ISCR |= 1u << 31u;
    }

    /**
     * Clear ISCR's FIDCE bit.
     *
     * FPU input denormal interrupt enable
     */
    inline void clear_ISCR_FIDCE() volatile
    {
        ISCR &= ~(1u << 31u);
    }

    /**
     * Toggle ISCR's FIDCE bit.
     *
     * FPU input denormal interrupt enable
     */
    inline void toggle_ISCR_FIDCE() volatile
    {
        ISCR ^= 1u << 31u;
    }

    /**
     * Get ISCR's FIXCE bit.
     *
     * FPU inexact interrupt enable
     */
    inline bool get_ISCR_FIXCE() volatile
    {
        return ISCR & (1u << 28u);
    }

    /**
     * Set ISCR's FIXCE bit.
     *
     * FPU inexact interrupt enable
     */
    inline void set_ISCR_FIXCE() volatile
    {
        ISCR |= 1u << 28u;
    }

    /**
     * Clear ISCR's FIXCE bit.
     *
     * FPU inexact interrupt enable
     */
    inline void clear_ISCR_FIXCE() volatile
    {
        ISCR &= ~(1u << 28u);
    }

    /**
     * Toggle ISCR's FIXCE bit.
     *
     * FPU inexact interrupt enable
     */
    inline void toggle_ISCR_FIXCE() volatile
    {
        ISCR ^= 1u << 28u;
    }

    /**
     * Get ISCR's FUFCE bit.
     *
     * FPU underflow interrupt enable
     */
    inline bool get_ISCR_FUFCE() volatile
    {
        return ISCR & (1u << 27u);
    }

    /**
     * Set ISCR's FUFCE bit.
     *
     * FPU underflow interrupt enable
     */
    inline void set_ISCR_FUFCE() volatile
    {
        ISCR |= 1u << 27u;
    }

    /**
     * Clear ISCR's FUFCE bit.
     *
     * FPU underflow interrupt enable
     */
    inline void clear_ISCR_FUFCE() volatile
    {
        ISCR &= ~(1u << 27u);
    }

    /**
     * Toggle ISCR's FUFCE bit.
     *
     * FPU underflow interrupt enable
     */
    inline void toggle_ISCR_FUFCE() volatile
    {
        ISCR ^= 1u << 27u;
    }

    /**
     * Get ISCR's FOFCE bit.
     *
     * FPU overflow interrupt enable
     */
    inline bool get_ISCR_FOFCE() volatile
    {
        return ISCR & (1u << 26u);
    }

    /**
     * Set ISCR's FOFCE bit.
     *
     * FPU overflow interrupt enable
     */
    inline void set_ISCR_FOFCE() volatile
    {
        ISCR |= 1u << 26u;
    }

    /**
     * Clear ISCR's FOFCE bit.
     *
     * FPU overflow interrupt enable
     */
    inline void clear_ISCR_FOFCE() volatile
    {
        ISCR &= ~(1u << 26u);
    }

    /**
     * Toggle ISCR's FOFCE bit.
     *
     * FPU overflow interrupt enable
     */
    inline void toggle_ISCR_FOFCE() volatile
    {
        ISCR ^= 1u << 26u;
    }

    /**
     * Get ISCR's FDZCE bit.
     *
     * FPU divide-by-zero interrupt enable
     */
    inline bool get_ISCR_FDZCE() volatile
    {
        return ISCR & (1u << 25u);
    }

    /**
     * Set ISCR's FDZCE bit.
     *
     * FPU divide-by-zero interrupt enable
     */
    inline void set_ISCR_FDZCE() volatile
    {
        ISCR |= 1u << 25u;
    }

    /**
     * Clear ISCR's FDZCE bit.
     *
     * FPU divide-by-zero interrupt enable
     */
    inline void clear_ISCR_FDZCE() volatile
    {
        ISCR &= ~(1u << 25u);
    }

    /**
     * Toggle ISCR's FDZCE bit.
     *
     * FPU divide-by-zero interrupt enable
     */
    inline void toggle_ISCR_FDZCE() volatile
    {
        ISCR ^= 1u << 25u;
    }

    /**
     * Get ISCR's FIOCE bit.
     *
     * FPU invalid operation interrupt enable
     */
    inline bool get_ISCR_FIOCE() volatile
    {
        return ISCR & (1u << 24u);
    }

    /**
     * Set ISCR's FIOCE bit.
     *
     * FPU invalid operation interrupt enable
     */
    inline void set_ISCR_FIOCE() volatile
    {
        ISCR |= 1u << 24u;
    }

    /**
     * Clear ISCR's FIOCE bit.
     *
     * FPU invalid operation interrupt enable
     */
    inline void clear_ISCR_FIOCE() volatile
    {
        ISCR &= ~(1u << 24u);
    }

    /**
     * Toggle ISCR's FIOCE bit.
     *
     * FPU invalid operation interrupt enable
     */
    inline void toggle_ISCR_FIOCE() volatile
    {
        ISCR ^= 1u << 24u;
    }

    /**
     * Get ISCR's CWBEE bit.
     *
     * Cache write buffer error enable
     */
    inline bool get_ISCR_CWBEE() volatile
    {
        return ISCR & (1u << 20u);
    }

    /**
     * Set ISCR's CWBEE bit.
     *
     * Cache write buffer error enable
     */
    inline void set_ISCR_CWBEE() volatile
    {
        ISCR |= 1u << 20u;
    }

    /**
     * Clear ISCR's CWBEE bit.
     *
     * Cache write buffer error enable
     */
    inline void clear_ISCR_CWBEE() volatile
    {
        ISCR &= ~(1u << 20u);
    }

    /**
     * Toggle ISCR's CWBEE bit.
     *
     * Cache write buffer error enable
     */
    inline void toggle_ISCR_CWBEE() volatile
    {
        ISCR ^= 1u << 20u;
    }

    /**
     * Get ISCR's FIDC bit.
     *
     * FPU input denormal interrupt status
     */
    inline bool get_ISCR_FIDC() volatile
    {
        return ISCR & (1u << 15u);
    }

    /**
     * Get ISCR's FIXC bit.
     *
     * FPU inexact interrupt status
     */
    inline bool get_ISCR_FIXC() volatile
    {
        return ISCR & (1u << 12u);
    }

    /**
     * Get ISCR's FUFC bit.
     *
     * FPU underflow interrupt status
     */
    inline bool get_ISCR_FUFC() volatile
    {
        return ISCR & (1u << 11u);
    }

    /**
     * Get ISCR's FOFC bit.
     *
     * FPU overflow interrupt status
     */
    inline bool get_ISCR_FOFC() volatile
    {
        return ISCR & (1u << 10u);
    }

    /**
     * Get ISCR's FDZC bit.
     *
     * FPU divide-by-zero interrupt status
     */
    inline bool get_ISCR_FDZC() volatile
    {
        return ISCR & (1u << 9u);
    }

    /**
     * Get ISCR's FIOC bit.
     *
     * FPU invalid operation interrupt status
     */
    inline bool get_ISCR_FIOC() volatile
    {
        return ISCR & (1u << 8u);
    }

    /**
     * Get ISCR's CWBER bit.
     *
     * Cache write buffer error status
     */
    inline bool get_ISCR_CWBER() volatile
    {
        return ISCR & (1u << 4u);
    }

    /**
     * Set ISCR's CWBER bit.
     *
     * Cache write buffer error status
     */
    inline void set_ISCR_CWBER() volatile
    {
        ISCR |= 1u << 4u;
    }

    /**
     * Clear ISCR's CWBER bit.
     *
     * Cache write buffer error status
     */
    inline void clear_ISCR_CWBER() volatile
    {
        ISCR &= ~(1u << 4u);
    }

    /**
     * Toggle ISCR's CWBER bit.
     *
     * Cache write buffer error status
     */
    inline void toggle_ISCR_CWBER() volatile
    {
        ISCR ^= 1u << 4u;
    }

    /**
     * Get all of ISCR's bit fields.
     *
     * (read-write) Interrupt Status and Control Register
     */
    inline void get_ISCR(bool &FIDCE, bool &FIXCE, bool &FUFCE, bool &FOFCE,
                         bool &FDZCE, bool &FIOCE, bool &CWBEE, bool &FIDC,
                         bool &FIXC, bool &FUFC, bool &FOFC, bool &FDZC,
                         bool &FIOC, bool &CWBER) volatile
    {
        uint32_t curr = ISCR;

        FIDCE = curr & (1u << 31u);
        FIXCE = curr & (1u << 28u);
        FUFCE = curr & (1u << 27u);
        FOFCE = curr & (1u << 26u);
        FDZCE = curr & (1u << 25u);
        FIOCE = curr & (1u << 24u);
        CWBEE = curr & (1u << 20u);
        FIDC = curr & (1u << 15u);
        FIXC = curr & (1u << 12u);
        FUFC = curr & (1u << 11u);
        FOFC = curr & (1u << 10u);
        FDZC = curr & (1u << 9u);
        FIOC = curr & (1u << 8u);
        CWBER = curr & (1u << 4u);
    }

    /**
     * Set all of ISCR's bit fields.
     *
     * (read-write) Interrupt Status and Control Register
     */
    inline void set_ISCR(bool FIDCE, bool FIXCE, bool FUFCE, bool FOFCE,
                         bool FDZCE, bool FIOCE, bool CWBEE,
                         bool CWBER) volatile
    {
        uint32_t curr = ISCR;

        curr &= ~(0b1u << 31u);
        curr |= (FIDCE & 0b1u) << 31u;
        curr &= ~(0b1u << 28u);
        curr |= (FIXCE & 0b1u) << 28u;
        curr &= ~(0b1u << 27u);
        curr |= (FUFCE & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (FOFCE & 0b1u) << 26u;
        curr &= ~(0b1u << 25u);
        curr |= (FDZCE & 0b1u) << 25u;
        curr &= ~(0b1u << 24u);
        curr |= (FIOCE & 0b1u) << 24u;
        curr &= ~(0b1u << 20u);
        curr |= (CWBEE & 0b1u) << 20u;
        curr &= ~(0b1u << 4u);
        curr |= (CWBER & 0b1u) << 4u;

        ISCR = curr;
    }

    /**
     * Get FADR's ADDRESS field.
     *
     * Fault address
     */
    inline uint32_t get_FADR_ADDRESS() volatile
    {
        return (FADR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get FATR's BEOVR bit.
     *
     * Bus error overrun
     */
    inline bool get_FATR_BEOVR() volatile
    {
        return FATR & (1u << 31u);
    }

    /**
     * Get FATR's BEMN field.
     *
     * Bus error master number
     */
    inline uint8_t get_FATR_BEMN() volatile
    {
        return (FATR >> 8u) & 0b1111u;
    }

    /**
     * Get FATR's BEWT bit.
     *
     * Bus error write
     */
    inline bool get_FATR_BEWT() volatile
    {
        return FATR & (1u << 7u);
    }

    /**
     * Get FATR's BESZ field.
     *
     * Bus error size
     */
    inline MCM_FATR_BESZ get_FATR_BESZ() volatile
    {
        return MCM_FATR_BESZ((FATR >> 4u) & 0b11u);
    }

    /**
     * Get FATR's BEMD bit.
     *
     * Bus error privilege level
     */
    inline bool get_FATR_BEMD() volatile
    {
        return FATR & (1u << 1u);
    }

    /**
     * Get FATR's BEDA bit.
     *
     * Bus error access type
     */
    inline bool get_FATR_BEDA() volatile
    {
        return FATR & (1u << 0u);
    }

    /**
     * Get all of FATR's bit fields.
     *
     * (read-write) Fault attributes register
     */
    inline void get_FATR(bool &BEOVR, uint8_t &BEMN, bool &BEWT,
                         MCM_FATR_BESZ &BESZ, bool &BEMD, bool &BEDA) volatile
    {
        uint32_t curr = FATR;

        BEOVR = curr & (1u << 31u);
        BEMN = (curr >> 8u) & 0b1111u;
        BEWT = curr & (1u << 7u);
        BESZ = MCM_FATR_BESZ((curr >> 4u) & 0b11u);
        BEMD = curr & (1u << 1u);
        BEDA = curr & (1u << 0u);
    }

    /**
     * Get FDR's DATA field.
     *
     * Fault data
     */
    inline uint32_t get_FDR_DATA() volatile
    {
        return (FDR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get LMDR's V bit.
     *
     * Local memory Valid bit. This read-only field defines the validity
     * (presence) of the local memory.
     */
    inline bool get_LMDR_V(std::size_t index) volatile
    {
        return LMDR[index] & (1u << 31u);
    }

    /**
     * Get LMDR's LMSZH bit.
     *
     * LMEM Size "Hole"
     */
    inline bool get_LMDR_LMSZH(std::size_t index) volatile
    {
        return LMDR[index] & (1u << 28u);
    }

    /**
     * Get LMDR's LMSZ field.
     *
     * LMEM Size
     */
    inline MCM_LMDR_LMSZ get_LMDR_LMSZ(std::size_t index) volatile
    {
        return MCM_LMDR_LMSZ((LMDR[index] >> 24u) & 0b1111u);
    }

    /**
     * Get LMDR's WY field.
     *
     * Level 1 Cache Ways
     */
    inline MCM_LMDR_WY get_LMDR_WY(std::size_t index) volatile
    {
        return MCM_LMDR_WY((LMDR[index] >> 20u) & 0b1111u);
    }

    /**
     * Get LMDR's DPW field.
     *
     * LMEM Data Path Width. This read-only field defines the width of the
     * local memory.
     */
    inline MCM_LMDR_DPW get_LMDR_DPW(std::size_t index) volatile
    {
        return MCM_LMDR_DPW((LMDR[index] >> 17u) & 0b111u);
    }

    /**
     * Get LMDR's RO bit.
     *
     * Read-Only
     */
    inline bool get_LMDR_RO(std::size_t index) volatile
    {
        return LMDR[index] & (1u << 16u);
    }

    /**
     * Get LMDR's MT field.
     *
     * Memory Type
     */
    inline MCM_LMDR_MT get_LMDR_MT(std::size_t index) volatile
    {
        return MCM_LMDR_MT((LMDR[index] >> 13u) & 0b111u);
    }

    /**
     * Get LMDR's CF1 field.
     *
     * Control Field 1 - for Cache Parity control functions
     */
    inline uint8_t get_LMDR_CF1(std::size_t index) volatile
    {
        return (LMDR[index] >> 4u) & 0b1111u;
    }

    /**
     * Set LMDR's CF1 field.
     *
     * Control Field 1 - for Cache Parity control functions
     */
    inline void set_LMDR_CF1(std::size_t index, uint8_t value) volatile
    {
        uint32_t curr = LMDR[index];

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        LMDR[index] = curr;
    }

    /**
     * Get LMDR's CF0 field.
     *
     * Control Field 0
     */
    inline uint8_t get_LMDR_CF0(std::size_t index) volatile
    {
        return (LMDR[index] >> 0u) & 0b1111u;
    }

    /**
     * Set LMDR's CF0 field.
     *
     * Control Field 0
     */
    inline void set_LMDR_CF0(std::size_t index, uint8_t value) volatile
    {
        uint32_t curr = LMDR[index];

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        LMDR[index] = curr;
    }

    /**
     * Get all of LMDR's bit fields.
     *
     * (read-write) Local Memory Descriptor Register
     */
    inline void get_LMDR(std::size_t index, bool &V, bool &LMSZH,
                         MCM_LMDR_LMSZ &LMSZ, MCM_LMDR_WY &WY,
                         MCM_LMDR_DPW &DPW, bool &RO, MCM_LMDR_MT &MT,
                         uint8_t &CF1, uint8_t &CF0) volatile
    {
        uint32_t curr = LMDR[index];

        V = curr & (1u << 31u);
        LMSZH = curr & (1u << 28u);
        LMSZ = MCM_LMDR_LMSZ((curr >> 24u) & 0b1111u);
        WY = MCM_LMDR_WY((curr >> 20u) & 0b1111u);
        DPW = MCM_LMDR_DPW((curr >> 17u) & 0b111u);
        RO = curr & (1u << 16u);
        MT = MCM_LMDR_MT((curr >> 13u) & 0b111u);
        CF1 = (curr >> 4u) & 0b1111u;
        CF0 = (curr >> 0u) & 0b1111u;
    }

    /**
     * Set all of LMDR's bit fields.
     *
     * (read-write) Local Memory Descriptor Register
     */
    inline void set_LMDR(std::size_t index, uint8_t CF1, uint8_t CF0) volatile
    {
        uint32_t curr = LMDR[index];

        curr &= ~(0b1111u << 4u);
        curr |= (CF1 & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (CF0 & 0b1111u) << 0u;

        LMDR[index] = curr;
    }

    /**
     * Get LMPECR's ECPI bit.
     *
     * Enable Cache Parity IRQ
     */
    inline bool get_LMPECR_ECPI() volatile
    {
        return LMPECR & (1u << 21u);
    }

    /**
     * Set LMPECR's ECPI bit.
     *
     * Enable Cache Parity IRQ
     */
    inline void set_LMPECR_ECPI() volatile
    {
        LMPECR |= 1u << 21u;
    }

    /**
     * Clear LMPECR's ECPI bit.
     *
     * Enable Cache Parity IRQ
     */
    inline void clear_LMPECR_ECPI() volatile
    {
        LMPECR &= ~(1u << 21u);
    }

    /**
     * Toggle LMPECR's ECPI bit.
     *
     * Enable Cache Parity IRQ
     */
    inline void toggle_LMPECR_ECPI() volatile
    {
        LMPECR ^= 1u << 21u;
    }

    /**
     * Get LMPECR's ECPR bit.
     *
     * Enable Cache Parity Reporting
     */
    inline bool get_LMPECR_ECPR() volatile
    {
        return LMPECR & (1u << 20u);
    }

    /**
     * Set LMPECR's ECPR bit.
     *
     * Enable Cache Parity Reporting
     */
    inline void set_LMPECR_ECPR() volatile
    {
        LMPECR |= 1u << 20u;
    }

    /**
     * Clear LMPECR's ECPR bit.
     *
     * Enable Cache Parity Reporting
     */
    inline void clear_LMPECR_ECPR() volatile
    {
        LMPECR &= ~(1u << 20u);
    }

    /**
     * Toggle LMPECR's ECPR bit.
     *
     * Enable Cache Parity Reporting
     */
    inline void toggle_LMPECR_ECPR() volatile
    {
        LMPECR ^= 1u << 20u;
    }

    /**
     * Get LMPECR's ER1BI bit.
     *
     * Enable RAM ECC 1-bit Interrupt
     */
    inline bool get_LMPECR_ER1BI() volatile
    {
        return LMPECR & (1u << 9u);
    }

    /**
     * Set LMPECR's ER1BI bit.
     *
     * Enable RAM ECC 1-bit Interrupt
     */
    inline void set_LMPECR_ER1BI() volatile
    {
        LMPECR |= 1u << 9u;
    }

    /**
     * Clear LMPECR's ER1BI bit.
     *
     * Enable RAM ECC 1-bit Interrupt
     */
    inline void clear_LMPECR_ER1BI() volatile
    {
        LMPECR &= ~(1u << 9u);
    }

    /**
     * Toggle LMPECR's ER1BI bit.
     *
     * Enable RAM ECC 1-bit Interrupt
     */
    inline void toggle_LMPECR_ER1BI() volatile
    {
        LMPECR ^= 1u << 9u;
    }

    /**
     * Get LMPECR's ER1BR bit.
     *
     * Enable RAM ECC 1-bit Reporting
     */
    inline bool get_LMPECR_ER1BR() volatile
    {
        return LMPECR & (1u << 8u);
    }

    /**
     * Set LMPECR's ER1BR bit.
     *
     * Enable RAM ECC 1-bit Reporting
     */
    inline void set_LMPECR_ER1BR() volatile
    {
        LMPECR |= 1u << 8u;
    }

    /**
     * Clear LMPECR's ER1BR bit.
     *
     * Enable RAM ECC 1-bit Reporting
     */
    inline void clear_LMPECR_ER1BR() volatile
    {
        LMPECR &= ~(1u << 8u);
    }

    /**
     * Toggle LMPECR's ER1BR bit.
     *
     * Enable RAM ECC 1-bit Reporting
     */
    inline void toggle_LMPECR_ER1BR() volatile
    {
        LMPECR ^= 1u << 8u;
    }

    /**
     * Get LMPECR's ERNCI bit.
     *
     * Enable RAM Non-correctable ECC Interrupt
     */
    inline bool get_LMPECR_ERNCI() volatile
    {
        return LMPECR & (1u << 1u);
    }

    /**
     * Set LMPECR's ERNCI bit.
     *
     * Enable RAM Non-correctable ECC Interrupt
     */
    inline void set_LMPECR_ERNCI() volatile
    {
        LMPECR |= 1u << 1u;
    }

    /**
     * Clear LMPECR's ERNCI bit.
     *
     * Enable RAM Non-correctable ECC Interrupt
     */
    inline void clear_LMPECR_ERNCI() volatile
    {
        LMPECR &= ~(1u << 1u);
    }

    /**
     * Toggle LMPECR's ERNCI bit.
     *
     * Enable RAM Non-correctable ECC Interrupt
     */
    inline void toggle_LMPECR_ERNCI() volatile
    {
        LMPECR ^= 1u << 1u;
    }

    /**
     * Get LMPECR's ERNCR bit.
     *
     * Enable RAM ECC Non-correctable Reporting
     */
    inline bool get_LMPECR_ERNCR() volatile
    {
        return LMPECR & (1u << 0u);
    }

    /**
     * Set LMPECR's ERNCR bit.
     *
     * Enable RAM ECC Non-correctable Reporting
     */
    inline void set_LMPECR_ERNCR() volatile
    {
        LMPECR |= 1u << 0u;
    }

    /**
     * Clear LMPECR's ERNCR bit.
     *
     * Enable RAM ECC Non-correctable Reporting
     */
    inline void clear_LMPECR_ERNCR() volatile
    {
        LMPECR &= ~(1u << 0u);
    }

    /**
     * Toggle LMPECR's ERNCR bit.
     *
     * Enable RAM ECC Non-correctable Reporting
     */
    inline void toggle_LMPECR_ERNCR() volatile
    {
        LMPECR ^= 1u << 0u;
    }

    /**
     * Get all of LMPECR's bit fields.
     *
     * (read-write) LMEM Parity & ECC Control Register
     */
    inline void get_LMPECR(bool &ECPI, bool &ECPR, bool &ER1BI, bool &ER1BR,
                           bool &ERNCI, bool &ERNCR) volatile
    {
        uint32_t curr = LMPECR;

        ECPI = curr & (1u << 21u);
        ECPR = curr & (1u << 20u);
        ER1BI = curr & (1u << 9u);
        ER1BR = curr & (1u << 8u);
        ERNCI = curr & (1u << 1u);
        ERNCR = curr & (1u << 0u);
    }

    /**
     * Set all of LMPECR's bit fields.
     *
     * (read-write) LMEM Parity & ECC Control Register
     */
    inline void set_LMPECR(bool ECPI, bool ECPR, bool ER1BI, bool ER1BR,
                           bool ERNCI, bool ERNCR) volatile
    {
        uint32_t curr = LMPECR;

        curr &= ~(0b1u << 21u);
        curr |= (ECPI & 0b1u) << 21u;
        curr &= ~(0b1u << 20u);
        curr |= (ECPR & 0b1u) << 20u;
        curr &= ~(0b1u << 9u);
        curr |= (ER1BI & 0b1u) << 9u;
        curr &= ~(0b1u << 8u);
        curr |= (ER1BR & 0b1u) << 8u;
        curr &= ~(0b1u << 1u);
        curr |= (ERNCI & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (ERNCR & 0b1u) << 0u;

        LMPECR = curr;
    }

    /**
     * Get LMPEIR's V bit.
     *
     * Valid bit
     */
    inline bool get_LMPEIR_V() volatile
    {
        return LMPEIR & (1u << 31u);
    }

    /**
     * Get LMPEIR's PEELOC field.
     *
     * Parity or ECC Error Location
     */
    inline uint8_t get_LMPEIR_PEELOC() volatile
    {
        return (LMPEIR >> 24u) & 0b11111u;
    }

    /**
     * Set LMPEIR's PEELOC field.
     *
     * Parity or ECC Error Location
     */
    inline void set_LMPEIR_PEELOC(uint8_t value) volatile
    {
        uint32_t curr = LMPEIR;

        curr &= ~(0b11111u << 24u);
        curr |= (value & 0b11111u) << 24u;

        LMPEIR = curr;
    }

    /**
     * Get LMPEIR's PE field.
     *
     * Parity Error
     */
    inline uint8_t get_LMPEIR_PE() volatile
    {
        return (LMPEIR >> 16u) & 0b11111111u;
    }

    /**
     * Set LMPEIR's PE field.
     *
     * Parity Error
     */
    inline void set_LMPEIR_PE(uint8_t value) volatile
    {
        uint32_t curr = LMPEIR;

        curr &= ~(0b11111111u << 16u);
        curr |= (value & 0b11111111u) << 16u;

        LMPEIR = curr;
    }

    /**
     * Get LMPEIR's E1B field.
     *
     * E1Bn = ECC 1-bit Error n
     */
    inline uint8_t get_LMPEIR_E1B() volatile
    {
        return (LMPEIR >> 8u) & 0b11111111u;
    }

    /**
     * Set LMPEIR's E1B field.
     *
     * E1Bn = ECC 1-bit Error n
     */
    inline void set_LMPEIR_E1B(uint8_t value) volatile
    {
        uint32_t curr = LMPEIR;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        LMPEIR = curr;
    }

    /**
     * Get LMPEIR's ENC field.
     *
     * ENCn = ECC Non-correctable Error n
     */
    inline uint8_t get_LMPEIR_ENC() volatile
    {
        return (LMPEIR >> 0u) & 0b11111111u;
    }

    /**
     * Set LMPEIR's ENC field.
     *
     * ENCn = ECC Non-correctable Error n
     */
    inline void set_LMPEIR_ENC(uint8_t value) volatile
    {
        uint32_t curr = LMPEIR;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        LMPEIR = curr;
    }

    /**
     * Get all of LMPEIR's bit fields.
     *
     * (read-write) LMEM Parity & ECC Interrupt Register
     */
    inline void get_LMPEIR(bool &V, uint8_t &PEELOC, uint8_t &PE, uint8_t &E1B,
                           uint8_t &ENC) volatile
    {
        uint32_t curr = LMPEIR;

        V = curr & (1u << 31u);
        PEELOC = (curr >> 24u) & 0b11111u;
        PE = (curr >> 16u) & 0b11111111u;
        E1B = (curr >> 8u) & 0b11111111u;
        ENC = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of LMPEIR's bit fields.
     *
     * (read-write) LMEM Parity & ECC Interrupt Register
     */
    inline void set_LMPEIR(uint8_t PEELOC, uint8_t PE, uint8_t E1B,
                           uint8_t ENC) volatile
    {
        uint32_t curr = LMPEIR;

        curr &= ~(0b11111u << 24u);
        curr |= (PEELOC & 0b11111u) << 24u;
        curr &= ~(0b11111111u << 16u);
        curr |= (PE & 0b11111111u) << 16u;
        curr &= ~(0b11111111u << 8u);
        curr |= (E1B & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (ENC & 0b11111111u) << 0u;

        LMPEIR = curr;
    }

    /**
     * Get LMFAR's EFADD field.
     *
     * ECC Fault Address
     */
    inline uint32_t get_LMFAR_EFADD() volatile
    {
        return (LMFAR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get LMFATR's OVR bit.
     *
     * Overrun
     */
    inline bool get_LMFATR_OVR() volatile
    {
        return LMFATR & (1u << 31u);
    }

    /**
     * Get LMFATR's WORDID bit.
     *
     * ID of the word which has ECC error
     */
    inline bool get_LMFATR_WORDID() volatile
    {
        return LMFATR & (1u << 24u);
    }

    /**
     * Get LMFATR's PEFMST field.
     *
     * Parity/ECC Fault Master Number
     */
    inline uint8_t get_LMFATR_PEFMST() volatile
    {
        return (LMFATR >> 8u) & 0b11111111u;
    }

    /**
     * Get LMFATR's PEFW bit.
     *
     * Parity/ECC Fault Write
     */
    inline bool get_LMFATR_PEFW() volatile
    {
        return LMFATR & (1u << 7u);
    }

    /**
     * Get LMFATR's PEFSIZE field.
     *
     * Parity/ECC Fault Master Size 3'b000 = 8-bit access 3'b001 = 16-bit
     * access 3'b010 = 32-bit access 3'b011 = 64-bit access 3'b1xx = Reserved
     */
    inline uint8_t get_LMFATR_PEFSIZE() volatile
    {
        return (LMFATR >> 4u) & 0b111u;
    }

    /**
     * Set LMFATR's PEFSIZE field.
     *
     * Parity/ECC Fault Master Size 3'b000 = 8-bit access 3'b001 = 16-bit
     * access 3'b010 = 32-bit access 3'b011 = 64-bit access 3'b1xx = Reserved
     */
    inline void set_LMFATR_PEFSIZE(uint8_t value) volatile
    {
        uint32_t curr = LMFATR;

        curr &= ~(0b111u << 4u);
        curr |= (value & 0b111u) << 4u;

        LMFATR = curr;
    }

    /**
     * Get LMFATR's PEFPRT field.
     *
     * Parity/ECC Fault Protection FATR[3] is Cacheable: 0=Non-cacheable,
     * 1=Cacheable FATR[2] is Bufferable: 0=Non-bufferable, 1=Bufferable
     * FATR[1] is Mode: 0=User mode, 1=Supervisor mode FATR[0] is Type:
     * 0=I-Fetch, 1=Data
     */
    inline uint8_t get_LMFATR_PEFPRT() volatile
    {
        return (LMFATR >> 0u) & 0b1111u;
    }

    /**
     * Set LMFATR's PEFPRT field.
     *
     * Parity/ECC Fault Protection FATR[3] is Cacheable: 0=Non-cacheable,
     * 1=Cacheable FATR[2] is Bufferable: 0=Non-bufferable, 1=Bufferable
     * FATR[1] is Mode: 0=User mode, 1=Supervisor mode FATR[0] is Type:
     * 0=I-Fetch, 1=Data
     */
    inline void set_LMFATR_PEFPRT(uint8_t value) volatile
    {
        uint32_t curr = LMFATR;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        LMFATR = curr;
    }

    /**
     * Get all of LMFATR's bit fields.
     *
     * (read-write) LMEM Fault Attribute Register
     */
    inline void get_LMFATR(bool &OVR, bool &WORDID, uint8_t &PEFMST,
                           bool &PEFW, uint8_t &PEFSIZE,
                           uint8_t &PEFPRT) volatile
    {
        uint32_t curr = LMFATR;

        OVR = curr & (1u << 31u);
        WORDID = curr & (1u << 24u);
        PEFMST = (curr >> 8u) & 0b11111111u;
        PEFW = curr & (1u << 7u);
        PEFSIZE = (curr >> 4u) & 0b111u;
        PEFPRT = (curr >> 0u) & 0b1111u;
    }

    /**
     * Set all of LMFATR's bit fields.
     *
     * (read-write) LMEM Fault Attribute Register
     */
    inline void set_LMFATR(uint8_t PEFSIZE, uint8_t PEFPRT) volatile
    {
        uint32_t curr = LMFATR;

        curr &= ~(0b111u << 4u);
        curr |= (PEFSIZE & 0b111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (PEFPRT & 0b1111u) << 0u;

        LMFATR = curr;
    }

    /**
     * Get LMFDHR's PEFDH field.
     *
     * Parity or ECC Fault Data High
     */
    inline uint32_t get_LMFDHR_PEFDH() volatile
    {
        return (LMFDHR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get LMFDLR's PEFDL field.
     *
     * Parity or ECC Fault Data Low
     */
    inline uint32_t get_LMFDLR_PEFDL() volatile
    {
        return (LMFDLR >> 0u) & 0b11111111111111111111111111111111u;
    }
};

static_assert(sizeof(mcm) == mcm::size);

static volatile mcm *const MCM = reinterpret_cast<mcm *>(0xE0080000);

}; // namespace MIMXRT1176::CM4
