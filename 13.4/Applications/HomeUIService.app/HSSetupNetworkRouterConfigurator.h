//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HSSetupConfigurator.h"

@class HMNetworkRouterProfile;

@interface HSSetupNetworkRouterConfigurator : HSSetupConfigurator
{
    HMNetworkRouterProfile *_profile;
}

+ (id)_primaryNetworkRouterProfileForProfiles:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMNetworkRouterProfile *profile; // @synthesize profile=_profile;
- (id)_nextViewControllerForResults:(id)arg1;
- (id)initWithSetupStepDelegate:(id)arg1 networkRouterProfiles:(id)arg2;

@end

