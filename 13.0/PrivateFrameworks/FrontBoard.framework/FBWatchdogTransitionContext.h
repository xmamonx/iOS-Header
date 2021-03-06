//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>
#import <FrontBoard/NSMutableCopying-Protocol.h>

@protocol FBProcessWatchdogProviding;

@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying>
{
    long long _watchdogBehavior;
    id <FBProcessWatchdogProviding> _watchdogProvider;
    _Bool _runIndependently;
}

@property(nonatomic) _Bool runIndependently; // @synthesize runIndependently=_runIndependently;
@property(retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider; // @synthesize watchdogProvider=_watchdogProvider;
@property(nonatomic) long long watchdogBehavior; // @synthesize watchdogBehavior=_watchdogBehavior;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

