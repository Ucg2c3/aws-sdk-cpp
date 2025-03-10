﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AvailBlanking.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/EsamSettings.h>
#include <aws/mediaconvert/model/ExtendedDataServices.h>
#include <aws/mediaconvert/model/KantarWatermarkSettings.h>
#include <aws/mediaconvert/model/MotionImageInserter.h>
#include <aws/mediaconvert/model/NielsenConfiguration.h>
#include <aws/mediaconvert/model/NielsenNonLinearWatermarkSettings.h>
#include <aws/mediaconvert/model/TimecodeConfig.h>
#include <aws/mediaconvert/model/TimedMetadataInsertion.h>
#include <aws/mediaconvert/model/ColorConversion3DLUTSetting.h>
#include <aws/mediaconvert/model/InputTemplate.h>
#include <aws/mediaconvert/model/OutputGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * JobTemplateSettings contains all the transcode settings saved in the template
   * that will be applied to jobs created from it.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobTemplateSettings">AWS
   * API Reference</a></p>
   */
  class JobTemplateSettings
  {
  public:
    AWS_MEDIACONVERT_API JobTemplateSettings();
    AWS_MEDIACONVERT_API JobTemplateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobTemplateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline int GetAdAvailOffset() const{ return m_adAvailOffset; }
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }
    inline JobTemplateSettings& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for ad avail blanking. Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline const AvailBlanking& GetAvailBlanking() const{ return m_availBlanking; }
    inline bool AvailBlankingHasBeenSet() const { return m_availBlankingHasBeenSet; }
    inline void SetAvailBlanking(const AvailBlanking& value) { m_availBlankingHasBeenSet = true; m_availBlanking = value; }
    inline void SetAvailBlanking(AvailBlanking&& value) { m_availBlankingHasBeenSet = true; m_availBlanking = std::move(value); }
    inline JobTemplateSettings& WithAvailBlanking(const AvailBlanking& value) { SetAvailBlanking(value); return *this;}
    inline JobTemplateSettings& WithAvailBlanking(AvailBlanking&& value) { SetAvailBlanking(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use 3D LUTs to specify custom color mapping behavior when you convert from one
     * color space into another. You can include up to 8 different 3D LUTs. For more
     * information, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/3d-luts.html
     */
    inline const Aws::Vector<ColorConversion3DLUTSetting>& GetColorConversion3DLUTSettings() const{ return m_colorConversion3DLUTSettings; }
    inline bool ColorConversion3DLUTSettingsHasBeenSet() const { return m_colorConversion3DLUTSettingsHasBeenSet; }
    inline void SetColorConversion3DLUTSettings(const Aws::Vector<ColorConversion3DLUTSetting>& value) { m_colorConversion3DLUTSettingsHasBeenSet = true; m_colorConversion3DLUTSettings = value; }
    inline void SetColorConversion3DLUTSettings(Aws::Vector<ColorConversion3DLUTSetting>&& value) { m_colorConversion3DLUTSettingsHasBeenSet = true; m_colorConversion3DLUTSettings = std::move(value); }
    inline JobTemplateSettings& WithColorConversion3DLUTSettings(const Aws::Vector<ColorConversion3DLUTSetting>& value) { SetColorConversion3DLUTSettings(value); return *this;}
    inline JobTemplateSettings& WithColorConversion3DLUTSettings(Aws::Vector<ColorConversion3DLUTSetting>&& value) { SetColorConversion3DLUTSettings(std::move(value)); return *this;}
    inline JobTemplateSettings& AddColorConversion3DLUTSettings(const ColorConversion3DLUTSetting& value) { m_colorConversion3DLUTSettingsHasBeenSet = true; m_colorConversion3DLUTSettings.push_back(value); return *this; }
    inline JobTemplateSettings& AddColorConversion3DLUTSettings(ColorConversion3DLUTSetting&& value) { m_colorConversion3DLUTSettingsHasBeenSet = true; m_colorConversion3DLUTSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline const EsamSettings& GetEsam() const{ return m_esam; }
    inline bool EsamHasBeenSet() const { return m_esamHasBeenSet; }
    inline void SetEsam(const EsamSettings& value) { m_esamHasBeenSet = true; m_esam = value; }
    inline void SetEsam(EsamSettings&& value) { m_esamHasBeenSet = true; m_esam = std::move(value); }
    inline JobTemplateSettings& WithEsam(const EsamSettings& value) { SetEsam(value); return *this;}
    inline JobTemplateSettings& WithEsam(EsamSettings&& value) { SetEsam(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline const ExtendedDataServices& GetExtendedDataServices() const{ return m_extendedDataServices; }
    inline bool ExtendedDataServicesHasBeenSet() const { return m_extendedDataServicesHasBeenSet; }
    inline void SetExtendedDataServices(const ExtendedDataServices& value) { m_extendedDataServicesHasBeenSet = true; m_extendedDataServices = value; }
    inline void SetExtendedDataServices(ExtendedDataServices&& value) { m_extendedDataServicesHasBeenSet = true; m_extendedDataServices = std::move(value); }
    inline JobTemplateSettings& WithExtendedDataServices(const ExtendedDataServices& value) { SetExtendedDataServices(value); return *this;}
    inline JobTemplateSettings& WithExtendedDataServices(ExtendedDataServices&& value) { SetExtendedDataServices(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the input that MediaConvert references for your default output settings.
     * MediaConvert uses this input's Resolution, Frame rate, and Pixel aspect ratio
     * for all  outputs that you don't manually specify different output settings for.
     * Enabling this setting will disable "Follow source" for all other inputs.  If
     * MediaConvert cannot follow your source, for example if you specify an audio-only
     * input,  MediaConvert uses the first followable input instead. In your JSON job
     * specification, enter an integer from 1 to 150 corresponding  to the order of
     * your inputs.
     */
    inline int GetFollowSource() const{ return m_followSource; }
    inline bool FollowSourceHasBeenSet() const { return m_followSourceHasBeenSet; }
    inline void SetFollowSource(int value) { m_followSourceHasBeenSet = true; m_followSource = value; }
    inline JobTemplateSettings& WithFollowSource(int value) { SetFollowSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Inputs to define the source file used in the transcode job. There can only
     * be one input in a job template. Using the API, you can include multiple inputs
     * when referencing a job template.
     */
    inline const Aws::Vector<InputTemplate>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<InputTemplate>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<InputTemplate>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline JobTemplateSettings& WithInputs(const Aws::Vector<InputTemplate>& value) { SetInputs(value); return *this;}
    inline JobTemplateSettings& WithInputs(Aws::Vector<InputTemplate>&& value) { SetInputs(std::move(value)); return *this;}
    inline JobTemplateSettings& AddInputs(const InputTemplate& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline JobTemplateSettings& AddInputs(InputTemplate&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline const KantarWatermarkSettings& GetKantarWatermark() const{ return m_kantarWatermark; }
    inline bool KantarWatermarkHasBeenSet() const { return m_kantarWatermarkHasBeenSet; }
    inline void SetKantarWatermark(const KantarWatermarkSettings& value) { m_kantarWatermarkHasBeenSet = true; m_kantarWatermark = value; }
    inline void SetKantarWatermark(KantarWatermarkSettings&& value) { m_kantarWatermarkHasBeenSet = true; m_kantarWatermark = std::move(value); }
    inline JobTemplateSettings& WithKantarWatermark(const KantarWatermarkSettings& value) { SetKantarWatermark(value); return *this;}
    inline JobTemplateSettings& WithKantarWatermark(KantarWatermarkSettings&& value) { SetKantarWatermark(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline const MotionImageInserter& GetMotionImageInserter() const{ return m_motionImageInserter; }
    inline bool MotionImageInserterHasBeenSet() const { return m_motionImageInserterHasBeenSet; }
    inline void SetMotionImageInserter(const MotionImageInserter& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = value; }
    inline void SetMotionImageInserter(MotionImageInserter&& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = std::move(value); }
    inline JobTemplateSettings& WithMotionImageInserter(const MotionImageInserter& value) { SetMotionImageInserter(value); return *this;}
    inline JobTemplateSettings& WithMotionImageInserter(MotionImageInserter&& value) { SetMotionImageInserter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration,
     * MediaConvert enables PCM to ID3 tagging for all outputs in the job.
     */
    inline const NielsenConfiguration& GetNielsenConfiguration() const{ return m_nielsenConfiguration; }
    inline bool NielsenConfigurationHasBeenSet() const { return m_nielsenConfigurationHasBeenSet; }
    inline void SetNielsenConfiguration(const NielsenConfiguration& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = value; }
    inline void SetNielsenConfiguration(NielsenConfiguration&& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = std::move(value); }
    inline JobTemplateSettings& WithNielsenConfiguration(const NielsenConfiguration& value) { SetNielsenConfiguration(value); return *this;}
    inline JobTemplateSettings& WithNielsenConfiguration(NielsenConfiguration&& value) { SetNielsenConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 6.0.13 Nielsen NLM Watermark
     * Engine Version 1.3.3 Nielsen Watermark Authenticator [SID_TIC] Version [7.0.0]
     */
    inline const NielsenNonLinearWatermarkSettings& GetNielsenNonLinearWatermark() const{ return m_nielsenNonLinearWatermark; }
    inline bool NielsenNonLinearWatermarkHasBeenSet() const { return m_nielsenNonLinearWatermarkHasBeenSet; }
    inline void SetNielsenNonLinearWatermark(const NielsenNonLinearWatermarkSettings& value) { m_nielsenNonLinearWatermarkHasBeenSet = true; m_nielsenNonLinearWatermark = value; }
    inline void SetNielsenNonLinearWatermark(NielsenNonLinearWatermarkSettings&& value) { m_nielsenNonLinearWatermarkHasBeenSet = true; m_nielsenNonLinearWatermark = std::move(value); }
    inline JobTemplateSettings& WithNielsenNonLinearWatermark(const NielsenNonLinearWatermarkSettings& value) { SetNielsenNonLinearWatermark(value); return *this;}
    inline JobTemplateSettings& WithNielsenNonLinearWatermark(NielsenNonLinearWatermarkSettings&& value) { SetNielsenNonLinearWatermark(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains one group of settings for each set of outputs that share a common
     * package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF, and no
     * container) are grouped in a single output group as well. Required in is a group
     * of settings that apply to the whole group. This required object depends on the
     * value you set for Type. Type, settings object pairs are as follows. *
     * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS, HlsGroupSettings *
     * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings * MS_SMOOTH_GROUP_SETTINGS,
     * MsSmoothGroupSettings * CMAF_GROUP_SETTINGS, CmafGroupSettings
     */
    inline const Aws::Vector<OutputGroup>& GetOutputGroups() const{ return m_outputGroups; }
    inline bool OutputGroupsHasBeenSet() const { return m_outputGroupsHasBeenSet; }
    inline void SetOutputGroups(const Aws::Vector<OutputGroup>& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = value; }
    inline void SetOutputGroups(Aws::Vector<OutputGroup>&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = std::move(value); }
    inline JobTemplateSettings& WithOutputGroups(const Aws::Vector<OutputGroup>& value) { SetOutputGroups(value); return *this;}
    inline JobTemplateSettings& WithOutputGroups(Aws::Vector<OutputGroup>&& value) { SetOutputGroups(std::move(value)); return *this;}
    inline JobTemplateSettings& AddOutputGroups(const OutputGroup& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(value); return *this; }
    inline JobTemplateSettings& AddOutputGroups(OutputGroup&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline const TimecodeConfig& GetTimecodeConfig() const{ return m_timecodeConfig; }
    inline bool TimecodeConfigHasBeenSet() const { return m_timecodeConfigHasBeenSet; }
    inline void SetTimecodeConfig(const TimecodeConfig& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = value; }
    inline void SetTimecodeConfig(TimecodeConfig&& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = std::move(value); }
    inline JobTemplateSettings& WithTimecodeConfig(const TimecodeConfig& value) { SetTimecodeConfig(value); return *this;}
    inline JobTemplateSettings& WithTimecodeConfig(TimecodeConfig&& value) { SetTimecodeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Insert user-defined custom ID3 metadata at timecodes that you specify. In each
     * output that you want to include this metadata, you must set ID3 metadata to
     * Passthrough.
     */
    inline const TimedMetadataInsertion& GetTimedMetadataInsertion() const{ return m_timedMetadataInsertion; }
    inline bool TimedMetadataInsertionHasBeenSet() const { return m_timedMetadataInsertionHasBeenSet; }
    inline void SetTimedMetadataInsertion(const TimedMetadataInsertion& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = value; }
    inline void SetTimedMetadataInsertion(TimedMetadataInsertion&& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = std::move(value); }
    inline JobTemplateSettings& WithTimedMetadataInsertion(const TimedMetadataInsertion& value) { SetTimedMetadataInsertion(value); return *this;}
    inline JobTemplateSettings& WithTimedMetadataInsertion(TimedMetadataInsertion&& value) { SetTimedMetadataInsertion(std::move(value)); return *this;}
    ///@}
  private:

    int m_adAvailOffset;
    bool m_adAvailOffsetHasBeenSet = false;

    AvailBlanking m_availBlanking;
    bool m_availBlankingHasBeenSet = false;

    Aws::Vector<ColorConversion3DLUTSetting> m_colorConversion3DLUTSettings;
    bool m_colorConversion3DLUTSettingsHasBeenSet = false;

    EsamSettings m_esam;
    bool m_esamHasBeenSet = false;

    ExtendedDataServices m_extendedDataServices;
    bool m_extendedDataServicesHasBeenSet = false;

    int m_followSource;
    bool m_followSourceHasBeenSet = false;

    Aws::Vector<InputTemplate> m_inputs;
    bool m_inputsHasBeenSet = false;

    KantarWatermarkSettings m_kantarWatermark;
    bool m_kantarWatermarkHasBeenSet = false;

    MotionImageInserter m_motionImageInserter;
    bool m_motionImageInserterHasBeenSet = false;

    NielsenConfiguration m_nielsenConfiguration;
    bool m_nielsenConfigurationHasBeenSet = false;

    NielsenNonLinearWatermarkSettings m_nielsenNonLinearWatermark;
    bool m_nielsenNonLinearWatermarkHasBeenSet = false;

    Aws::Vector<OutputGroup> m_outputGroups;
    bool m_outputGroupsHasBeenSet = false;

    TimecodeConfig m_timecodeConfig;
    bool m_timecodeConfigHasBeenSet = false;

    TimedMetadataInsertion m_timedMetadataInsertion;
    bool m_timedMetadataInsertionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
