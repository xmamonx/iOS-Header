//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PresentAnnouncementAction.h"

__attribute__((visibility("hidden")))
@interface PresentFlyoverAction : PresentAnnouncementAction
{
    unsigned long long _muid;
}

@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)resolveFlyoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAnnouncement:(id)arg1 muid:(unsigned long long)arg2;

@end

