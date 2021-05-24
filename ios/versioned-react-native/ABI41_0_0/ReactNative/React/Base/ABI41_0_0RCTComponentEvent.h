/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ABI41_0_0React/ABI41_0_0RCTEventDispatcher.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Generic untyped event for Components. Used internally by ABI41_0_0RCTDirectEventBlock and
 * ABI41_0_0RCTBubblingEventBlock, for other use cases prefer using a class that implements
 * ABI41_0_0RCTEvent to have a type safe way to initialize it.
 */
@interface ABI41_0_0RCTComponentEvent : NSObject <ABI41_0_0RCTEvent>

- (instancetype)initWithName:(NSString *)name viewTag:(NSNumber *)viewTag body:(NSDictionary *)body;

NS_ASSUME_NONNULL_END

@end
