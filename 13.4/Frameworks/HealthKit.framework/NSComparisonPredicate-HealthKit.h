//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (HealthKit)
+ (id)hk_equalityPredicateWithKey:(id)arg1 value:(id)arg2;
+ (id)hk_inequalityPredicateWithKey:(id)arg1 value:(id)arg2 ascending:(_Bool)arg3;
- (id)_parseComparisonPredicateWithKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 filterClasses:(id)arg5;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;
@end

