//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/HRRecordViewControllerFactory-Protocol.h>

@class UIViewController, WDMedicalRecordCategory;

@protocol HRCategoryViewControllerFactory <HRRecordViewControllerFactory>
- (UIViewController *)makeAlphabeticalViewControllerForCategory:(WDMedicalRecordCategory *)arg1;
- (UIViewController *)makeTimelineViewControllerForCategory:(WDMedicalRecordCategory *)arg1 showsInitialSearchBar:(_Bool)arg2;
- (UIViewController *)makeViewControllerForCategory:(WDMedicalRecordCategory *)arg1;
@end

