//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, RBSAssertion, RBSProcessMonitor, RBSTarget, RBSTerminateContext;

@interface RBSTerminationAssertion : NSObject
{
    struct os_unfair_lock_s _lock;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    RBSTerminateContext *_terminateContext;
    RBSTarget *_target;
    unsigned long long _state;
    _Bool _processExists;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)_notifyObserversOfProcessExit;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)invalidate;
- (_Bool)invalidateWithError:(out id *)arg1;
- (_Bool)acquireWithError:(out id *)arg1;
@property(readonly, nonatomic) _Bool processExists;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)explanation;
- (id)initWithTarget:(id)arg1 context:(id)arg2;

@end

