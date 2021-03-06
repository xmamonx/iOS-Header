//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADBannerViewDelegate-Protocol.h"

@class ADBannerView, NSString;

@interface FRNativeSubscriptionAdFetcher : NSObject <ADBannerViewDelegate>
{
    _Bool _executing;
    ADBannerView *_bannerView;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) _Bool executing; // @synthesize executing=_executing;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)cancel;
- (void)fetchSubscriptionAdWithContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

