//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    _Bool _shouldEvaluateColorInformation;
    long long _sampleFrequency;
    double _colorDistanceTheshold;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double colorDistanceTheshold; // @synthesize colorDistanceTheshold=_colorDistanceTheshold;
@property(nonatomic) _Bool shouldEvaluateColorInformation; // @synthesize shouldEvaluateColorInformation=_shouldEvaluateColorInformation;
@property(nonatomic) long long sampleFrequency; // @synthesize sampleFrequency=_sampleFrequency;
- (void)_evaluateColorInformation:(id)arg1;
- (id)_blurValueForVisionObservation:(id)arg1;
- (id)_brightnessValueForVisionObservation:(id)arg1;
- (void)evaluate:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (_Bool)requiresVisionFramework;
- (void)nodeInitialize;

@end

