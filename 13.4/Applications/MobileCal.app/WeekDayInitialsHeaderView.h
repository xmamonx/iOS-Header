//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WeekDayInitialsHeaderView : UIView
{
    NSArray *_dayFrames;
    _Bool _useCustomDayFrames;
}

+ (id)dayInitialFont;
- (void).cxx_destruct;
@property(nonatomic) _Bool useCustomDayFrames; // @synthesize useCustomDayFrames=_useCustomDayFrames;
- (id)_automaticDayFrames;
- (id)dayFrames;
- (void)setDayFrames:(id)arg1;
- (double)dayFrameRightInset;
- (double)bottomPadding;
- (id)weekdayAbbreviations;
- (long long)dayInitialTextAlignment;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

