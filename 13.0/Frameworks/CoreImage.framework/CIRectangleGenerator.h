//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRectangleGenerator : CIFilter
{
    CIColor *inputColor;
    CIVector *inputRectangle;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIRectangle;

@end

