/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
#pragma once

#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <app/util/basic-types.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace DemandResponseLoadControl {
namespace Structs {
namespace HeatingSourceControlStruct {
enum class Fields : uint8_t
{
    kHeatingSource = 0,
};

struct Type
{
public:
    HeatingSourceEnum heatingSource = static_cast<HeatingSourceEnum>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace HeatingSourceControlStruct
namespace PowerSavingsControlStruct {
enum class Fields : uint8_t
{
    kPowerSavings = 0,
};

struct Type
{
public:
    chip::Percent powerSavings = static_cast<chip::Percent>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace PowerSavingsControlStruct
namespace DutyCycleControlStruct {
enum class Fields : uint8_t
{
    kDutyCycle = 0,
};

struct Type
{
public:
    chip::Percent dutyCycle = static_cast<chip::Percent>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace DutyCycleControlStruct
namespace AverageLoadControlStruct {
enum class Fields : uint8_t
{
    kLoadAdjustment = 0,
};

struct Type
{
public:
    int8_t loadAdjustment = static_cast<int8_t>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace AverageLoadControlStruct
namespace TemperatureControlStruct {
enum class Fields : uint8_t
{
    kCoolingTempOffset   = 0,
    kHeatingtTempOffset  = 1,
    kCoolingTempSetpoint = 2,
    kHeatingTempSetpoint = 3,
};

struct Type
{
public:
    Optional<DataModel::Nullable<uint16_t>> coolingTempOffset;
    Optional<DataModel::Nullable<uint16_t>> heatingtTempOffset;
    Optional<DataModel::Nullable<int16_t>> coolingTempSetpoint;
    Optional<DataModel::Nullable<int16_t>> heatingTempSetpoint;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace TemperatureControlStruct
namespace LoadControlEventTransitionStruct {
enum class Fields : uint8_t
{
    kDuration             = 0,
    kControl              = 1,
    kTemperatureControl   = 2,
    kAverageLoadControl   = 3,
    kDutyCycleControl     = 4,
    kPowerSavingsControl  = 5,
    kHeatingSourceControl = 6,
};

struct Type
{
public:
    uint16_t duration                                   = static_cast<uint16_t>(0);
    chip::BitMask<EventTransitionControlBitmap> control = static_cast<chip::BitMask<EventTransitionControlBitmap>>(0);
    Optional<Structs::TemperatureControlStruct::Type> temperatureControl;
    Optional<Structs::AverageLoadControlStruct::Type> averageLoadControl;
    Optional<Structs::DutyCycleControlStruct::Type> dutyCycleControl;
    Optional<Structs::PowerSavingsControlStruct::Type> powerSavingsControl;
    Optional<Structs::HeatingSourceControlStruct::Type> heatingSourceControl;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace LoadControlEventTransitionStruct
namespace LoadControlEventStruct {
enum class Fields : uint8_t
{
    kEventID         = 0,
    kProgramID       = 1,
    kControl         = 2,
    kDeviceClass     = 3,
    kEnrollmentGroup = 4,
    kCriticality     = 5,
    kStartTime       = 6,
    kTransitions     = 7,
};

struct Type
{
public:
    chip::ByteSpan eventID;
    DataModel::Nullable<chip::ByteSpan> programID;
    chip::BitMask<EventControlBitmap> control    = static_cast<chip::BitMask<EventControlBitmap>>(0);
    chip::BitMask<DeviceClassBitmap> deviceClass = static_cast<chip::BitMask<DeviceClassBitmap>>(0);
    Optional<uint8_t> enrollmentGroup;
    CriticalityLevelEnum criticality = static_cast<CriticalityLevelEnum>(0);
    DataModel::Nullable<uint32_t> startTime;
    DataModel::List<const Structs::LoadControlEventTransitionStruct::Type> transitions;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    chip::ByteSpan eventID;
    DataModel::Nullable<chip::ByteSpan> programID;
    chip::BitMask<EventControlBitmap> control    = static_cast<chip::BitMask<EventControlBitmap>>(0);
    chip::BitMask<DeviceClassBitmap> deviceClass = static_cast<chip::BitMask<DeviceClassBitmap>>(0);
    Optional<uint8_t> enrollmentGroup;
    CriticalityLevelEnum criticality = static_cast<CriticalityLevelEnum>(0);
    DataModel::Nullable<uint32_t> startTime;
    DataModel::DecodableList<Structs::LoadControlEventTransitionStruct::DecodableType> transitions;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace LoadControlEventStruct
namespace LoadControlProgramStruct {
enum class Fields : uint8_t
{
    kProgramID             = 0,
    kName                  = 1,
    kEnrollmentGroup       = 2,
    kRandomStartMinutes    = 3,
    kRandomDurationMinutes = 4,
};

struct Type
{
public:
    chip::ByteSpan programID;
    chip::CharSpan name;
    DataModel::Nullable<uint8_t> enrollmentGroup;
    DataModel::Nullable<uint8_t> randomStartMinutes;
    DataModel::Nullable<uint8_t> randomDurationMinutes;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace LoadControlProgramStruct
} // namespace Structs
} // namespace DemandResponseLoadControl
} // namespace Clusters
} // namespace app
} // namespace chip
