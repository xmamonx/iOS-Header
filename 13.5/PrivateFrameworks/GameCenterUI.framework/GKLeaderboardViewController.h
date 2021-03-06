//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKGameCenterViewController.h>

@class NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController : GKGameCenterViewController
{
    id <GKLeaderboardViewControllerDelegate> _leaderboardDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GKLeaderboardViewControllerDelegate> leaderboardDelegate; // @synthesize leaderboardDelegate=_leaderboardDelegate;
- (void)notifyDelegateOnWillFinish;
@property(copy, nonatomic) NSString *category;
@property(nonatomic) long long timeScope;
- (id)init;

@end

