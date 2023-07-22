// Vita3K emulator project
// Copyright (C) 2023 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "SceAVConfig.h"

#include <util/tracy.h>

TRACY_MODULE_NAME(SceAVConfig);

EXPORT(int, sceAVConfigChangeReg) {
    TRACY_FUNC(sceAVConfigChangeReg);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigClearAutoSuspend2) {
    TRACY_FUNC(sceAVConfigClearAutoSuspend2);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigDisplayOn) {
    TRACY_FUNC(sceAVConfigDisplayOn);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetAcStatus) {
    TRACY_FUNC(sceAVConfigGetAcStatus);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetBtVol) {
    TRACY_FUNC(sceAVConfigGetBtVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetConnectedAudioDevice)
    TRACY_FUNC(sceAVConfigGetConnectedAudioDevice);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetDisplayMaxBrightness) {
    TRACY_FUNC(sceAVConfigGetDisplayMaxBrightness);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetMasterVol) {
    TRACY_FUNC(sceAVConfigGetMasterVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetShutterVol) {
    TRACY_FUNC(sceAVConfigGetShutterVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetSystemVol) {
    TRACY_FUNC(sceAVConfigGetSystemVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigGetVolCtrlEnable) {
    TRACY_FUNC(sceAVConfigGetVolCtrlEnable);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiCecCmdOneTouchPlay) {
    TRACY_FUNC(sceAVConfigHdmiCecCmdOneTouchPlay);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiCecDisable) {
    TRACY_FUNC(sceAVConfigHdmiCecDisable);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiCecEnable) {
    TRACY_FUNC(sceAVConfigHdmiCecEnable);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiClearCecInfo) {
    TRACY_FUNC(sceAVConfigHdmiClearCecInfo);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiGetCecInfo) {
    TRACY_FUNC(sceAVConfigHdmiGetCecInfo);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiGetMonitorInfo) {
    TRACY_FUNC(sceAVConfigHdmiGetMonitorInfo);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiGetOutScalingRatio) {
    TRACY_FUNC(sceAVConfigHdmiGetOutScalingRatio);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiSetOutScalingRatio) {
    TRACY_FUNC(sceAVConfigHdmiSetOutScalingRatio);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiSetResolution) {
    TRACY_FUNC(sceAVConfigHdmiSetResolution);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigHdmiSetRgbRangeMode) {
    TRACY_FUNC(sceAVConfigHdmiSetRgbRangeMode);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigMuteOn) {
    TRACY_FUNC(sceAVConfigMuteOn);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigRegisterCallback) {
    TRACY_FUNC(sceAVConfigRegisterCallback);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSendVolKey) {
    TRACY_FUNC(sceAVConfigSendVolKey);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetAutoDisplayDimming) {
    TRACY_FUNC(sceAVConfigSetAutoDisplayDimming);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetAutoSuspend) {
    TRACY_FUNC(sceAVConfigSetAutoSuspend);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetAutoSuspend2) {
    TRACY_FUNC(sceAVConfigSetAutoSuspend2);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetDisplayBrightness) {
    TRACY_FUNC(sceAVConfigSetDisplayBrightness);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetDisplayColorSpaceMode) {
    TRACY_FUNC(sceAVConfigSetDisplayColorSpaceMode);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetMasterVol) {
    TRACY_FUNC(sceAVConfigSetMasterVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigSetSystemVol) {
    TRACY_FUNC(sceAVConfigSetSystemVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigUnRegisterCallback) {
    TRACY_FUNC(sceAVConfigUnRegisterCallback);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigWriteMasterVol) {
    TRACY_FUNC(sceAVConfigWriteMasterVol);
    return UNIMPLEMENTED();
}

EXPORT(int, sceAVConfigWriteRegSystemVol) {
    TRACY_FUNC(sceAVConfigWriteRegSystemVol);
    return UNIMPLEMENTED();
}

BRIDGE_IMPL(sceAVConfigChangeReg)
BRIDGE_IMPL(sceAVConfigClearAutoSuspend2)
BRIDGE_IMPL(sceAVConfigDisplayOn)
BRIDGE_IMPL(sceAVConfigGetAcStatus)
BRIDGE_IMPL(sceAVConfigGetBtVol)
BRIDGE_IMPL(sceAVConfigGetConnectedAudioDevice)
BRIDGE_IMPL(sceAVConfigGetDisplayMaxBrightness)
BRIDGE_IMPL(sceAVConfigGetMasterVol)
BRIDGE_IMPL(sceAVConfigGetShutterVol)
BRIDGE_IMPL(sceAVConfigGetSystemVol)
BRIDGE_IMPL(sceAVConfigGetVolCtrlEnable)
BRIDGE_IMPL(sceAVConfigHdmiCecCmdOneTouchPlay)
BRIDGE_IMPL(sceAVConfigHdmiCecDisable)
BRIDGE_IMPL(sceAVConfigHdmiCecEnable)
BRIDGE_IMPL(sceAVConfigHdmiClearCecInfo)
BRIDGE_IMPL(sceAVConfigHdmiGetCecInfo)
BRIDGE_IMPL(sceAVConfigHdmiGetMonitorInfo)
BRIDGE_IMPL(sceAVConfigHdmiGetOutScalingRatio)
BRIDGE_IMPL(sceAVConfigHdmiSetOutScalingRatio)
BRIDGE_IMPL(sceAVConfigHdmiSetResolution)
BRIDGE_IMPL(sceAVConfigHdmiSetRgbRangeMode)
BRIDGE_IMPL(sceAVConfigMuteOn)
BRIDGE_IMPL(sceAVConfigRegisterCallback)
BRIDGE_IMPL(sceAVConfigSendVolKey)
BRIDGE_IMPL(sceAVConfigSetAutoDisplayDimming)
BRIDGE_IMPL(sceAVConfigSetAutoSuspend)
BRIDGE_IMPL(sceAVConfigSetAutoSuspend2)
BRIDGE_IMPL(sceAVConfigSetDisplayBrightness)
BRIDGE_IMPL(sceAVConfigSetDisplayColorSpaceMode)
BRIDGE_IMPL(sceAVConfigSetMasterVol)
BRIDGE_IMPL(sceAVConfigSetSystemVol)
BRIDGE_IMPL(sceAVConfigUnRegisterCallback)
BRIDGE_IMPL(sceAVConfigWriteMasterVol)
BRIDGE_IMPL(sceAVConfigWriteRegSystemVol)
