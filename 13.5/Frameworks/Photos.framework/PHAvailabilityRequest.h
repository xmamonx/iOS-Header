//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PLTrackableRequest-Protocol.h>

@class NSManagedObjectID, NSString, NSXPCConnection, PLPhotoLibrary;
@protocol PLTrackableRequestDelegate;

@interface PHAvailabilityRequest : NSObject <PLTrackableRequest>
{
    _Atomic _Bool _isCancelled;
    PLPhotoLibrary *_photoLibrary;
    id <PLTrackableRequestDelegate> _delegate;
    NSManagedObjectID *_assetObjectID;
    NSString *_taskIdentifier;
    unsigned long long _signpostID;
    NSXPCConnection *_clientConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(readonly, copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, nonatomic) NSManagedObjectID *assetObjectID; // @synthesize assetObjectID=_assetObjectID;
- (_Bool)isCancelled;
- (void)cancel;
- (void)abortClientSide;
- (void)runDaemonSide;
- (id)description;
- (id)plistDictionary;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2;
@property __weak id <PLTrackableRequestDelegate> delegate;

@end

