//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyValueFastMutableSet.h>

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet
{
    NSKeyValueGetter *_valueGetter;
}

- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)_nonNilSetValueWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

