//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject
{
    CDUnknownBlockType _sessionStartCallback;
    HMFTimer *_handleOpenRequestResponseTimer;
    HMFTimer *_sendCloseEventTimer;
}

- (void).cxx_destruct;
@property(retain) HMFTimer *sendCloseEventTimer; // @synthesize sendCloseEventTimer=_sendCloseEventTimer;
@property(retain) HMFTimer *handleOpenRequestResponseTimer; // @synthesize handleOpenRequestResponseTimer=_handleOpenRequestResponseTimer;
@property(readonly) CDUnknownBlockType sessionStartCallback; // @synthesize sessionStartCallback=_sessionStartCallback;
@property(readonly) _Bool shouldCloseSessionWithTimeoutReason;
- (id)initWithSessionStartCallback:(CDUnknownBlockType)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3;

@end

