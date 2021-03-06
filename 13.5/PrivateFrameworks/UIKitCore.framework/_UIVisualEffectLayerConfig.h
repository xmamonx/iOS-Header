//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject
{
    NSString *_filterType;
    double _opacity;
    UIColor *_fillColor;
}

+ (id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
- (id)description;
- (void)deconfigureLayerView:(id)arg1;
- (void)configureLayerView:(id)arg1;

@end

