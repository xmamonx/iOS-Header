//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICDocCamCVPixelBufferUtilities : NSObject
{
}

+ (id)coreImageForPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2 copyMemory:(_Bool)arg3;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1;

@end

