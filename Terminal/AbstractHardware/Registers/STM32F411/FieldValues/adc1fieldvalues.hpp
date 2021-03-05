/*******************************************************************************
* Filename      : adc1fieldvalues.hpp
*
* Details       : Enumerations related with ADC1 peripheral. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(ADC1ENUMS_HPP)
#define ADC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SR_STRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_JSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SR_JSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SR_JSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_JEOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SR_JEOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SR_JEOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_EOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SR_EOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SR_EOC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SR_AWD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SR_AWD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SR_AWD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_OVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_RES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_RES_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR1_RES_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR1_RES_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_AWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_AWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JAWDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_JAWDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_JAWDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_DISCNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CR1_DISCNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JDISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_JDISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_JDISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_DISCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_DISCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_DISCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JAUTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_JAUTO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_JAUTO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDSGL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_AWDSGL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_AWDSGL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_SCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_SCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_SCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_EOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR1_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_CR1_AWDCH_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_SWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_SWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_SWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_EXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR2_EXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_EXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_CR2_EXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR2_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR2_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_CR2_JEXTSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_ALIGN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_ALIGN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_ALIGN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_EOCS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_EOCS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_EOCS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_DDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_DDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_DDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_DMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_DMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_DMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_CONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_CONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_CR2_ADON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_CR2_ADON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_CR2_ADON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SMPR1_SMPx_x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SMPR2_SMPx_x_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR1_JOFFSET1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR2_JOFFSET2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR3_JOFFSET3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JOFR4_JOFFSET4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_HTR_HT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_LTR_LT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_L_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR1_L_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR1_L_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR1_L_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR1_L_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR1_L_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR1_L_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR1_L_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR1_L_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR1_L_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR1_L_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR1_L_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR1_L_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR1_L_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR1_L_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR1_L_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR1_L_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR1_SQ16_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR1_SQ15_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR1_SQ14_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR1_SQ13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR1_SQ13_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR2_SQ12_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR2_SQ11_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR2_SQ10_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR2_SQ9_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR2_SQ8_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR2_SQ7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR2_SQ7_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR3_SQ6_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR3_SQ5_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR3_SQ4_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR3_SQ3_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR3_SQ2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_SQR3_SQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_SQR3_SQ1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_JSQR_JL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_JSQR_JSQ4_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_JSQR_JSQ3_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_JSQR_JSQ2_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JSQR_JSQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC1_JSQR_JSQ1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR1_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR2_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR3_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_JDR4_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC1_DR_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC1ENUMS_HPP)
