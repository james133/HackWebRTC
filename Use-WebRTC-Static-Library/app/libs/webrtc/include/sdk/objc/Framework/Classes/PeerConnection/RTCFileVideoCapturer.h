/*
 *  Copyright 2017 The WebRTC Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Foundation/Foundation.h>
#import <WebRTC/RTCVideoCapturer.h>

/**
 * RTCVideoCapturer that reads buffers from file.
 *
 * Per design, the file capturer can only be run once and once stopped it cannot run again.
 * To run another file capture session, create new instance of the class.
 */
NS_CLASS_AVAILABLE_IOS(10)
@interface RTCFileVideoCapturer : RTCVideoCapturer

- (void)startCapturingFromFileNamed:(NSString *)nameOfFile;
- (void)stopCapture;

@end
