/*
 *  Copyright (c) 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "logging/rtc_event_log/events/rtc_event_probe_result_success.h"

#include "rtc_base/ptr_util.h"

namespace webrtc {

RtcEventProbeResultSuccess::RtcEventProbeResultSuccess(int32_t id,
                                                       int32_t bitrate_bps)
    : id_(id), bitrate_bps_(bitrate_bps) {}

RtcEvent::Type RtcEventProbeResultSuccess::GetType() const {
  return RtcEvent::Type::ProbeResultSuccess;
}

bool RtcEventProbeResultSuccess::IsConfigEvent() const {
  return false;
}

std::unique_ptr<RtcEvent> RtcEventProbeResultSuccess::Copy() const {
  return rtc::MakeUnique<RtcEventProbeResultSuccess>(id_, bitrate_bps_);
}

}  // namespace webrtc
