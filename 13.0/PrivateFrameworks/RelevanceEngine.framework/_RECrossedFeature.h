//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeature.h>

@class NSArray, NSString, REFeatureSet;

@interface _RECrossedFeature : REFeature
{
    NSString *_name;
    unsigned long long _featureType;
    unsigned long long _bitCount;
    REFeatureSet *_dependentFeatures;
    unsigned long long _hash;
    NSArray *_features;
}

@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_computeHash;
- (void)_updateFeaturesArray;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_dependentFeatures;
- (id)_rootFeatures;
- (long long)_bitCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)featureType;
- (id)name;
- (id)initWithFeatures:(id)arg1;

@end

