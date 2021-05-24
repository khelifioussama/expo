/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import <ABI41_0_0React/ABI41_0_0RCTDefines.h>

static NSString *const ABI41_0_0EXTRAPOLATE_TYPE_IDENTITY = @"identity";
static NSString *const ABI41_0_0EXTRAPOLATE_TYPE_CLAMP = @"clamp";
static NSString *const ABI41_0_0EXTRAPOLATE_TYPE_EXTEND = @"extend";

ABI41_0_0RCT_EXTERN CGFloat ABI41_0_0RCTInterpolateValueInRange(CGFloat value,
                                              NSArray<NSNumber *> *inputRange,
                                              NSArray<NSNumber *> *outputRange,
                                              NSString *extrapolateLeft,
                                              NSString *extrapolateRight);

ABI41_0_0RCT_EXTERN CGFloat ABI41_0_0RCTInterpolateValue(CGFloat value,
                                       CGFloat inputMin,
                                       CGFloat inputMax,
                                       CGFloat outputMin,
                                       CGFloat outputMax,
                                       NSString *extrapolateLeft,
                                       NSString *extrapolateRight);

ABI41_0_0RCT_EXTERN CGFloat ABI41_0_0RCTRadiansToDegrees(CGFloat radians);
ABI41_0_0RCT_EXTERN CGFloat ABI41_0_0RCTDegreesToRadians(CGFloat degrees);

/**
 * Coefficient to slow down animations, respects the ios
 * simulator `Slow Animations (⌘T)` option.
 */
ABI41_0_0RCT_EXTERN CGFloat ABI41_0_0RCTAnimationDragCoefficient(void);
