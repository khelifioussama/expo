/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <ABI41_0_0React/ABI41_0_0RCTDefines.h>

@interface ABI41_0_0RCTParserUtils : NSObject

/**
 * Generic utility functions for parsing Objective-C source code.
 */
ABI41_0_0RCT_EXTERN BOOL ABI41_0_0RCTReadChar(const char **input, char c);
ABI41_0_0RCT_EXTERN BOOL ABI41_0_0RCTReadString(const char **input, const char *string);
ABI41_0_0RCT_EXTERN void ABI41_0_0RCTSkipWhitespace(const char **input);
ABI41_0_0RCT_EXTERN BOOL ABI41_0_0RCTParseSelectorIdentifier(const char **input, NSString **string);
ABI41_0_0RCT_EXTERN BOOL ABI41_0_0RCTParseArgumentIdentifier(const char **input, NSString **string);

/**
 * Parse an Objective-C type into a form that can be used by ABI41_0_0RCTConvert.
 * This doesn't really belong here, but it's used by both ABI41_0_0RCTConvert and
 * ABI41_0_0RCTModuleMethod, which makes it difficult to find a better home for it.
 */
ABI41_0_0RCT_EXTERN NSString *ABI41_0_0RCTParseType(const char **input);

@end
