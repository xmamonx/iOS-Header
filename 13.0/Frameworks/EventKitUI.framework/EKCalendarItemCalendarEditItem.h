//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

__attribute__((visibility("hidden")))
@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem
{
    unsigned long long _entityType;
}

- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)_shouldShowSourceForCalendar:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)init;
- (id)initWithEntityType:(unsigned long long)arg1;

@end

