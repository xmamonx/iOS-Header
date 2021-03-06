//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SBUIActionViewLabel : UIView
{
    NSString *_text;
    UIColor *_textColor;
    UILabel *_label;
    UILabel *_emojiLabel;
}

- (void).cxx_destruct;
- (void)mt_removeAllVisualStyling;
- (void)_mt_applyVisualStyling:(id)arg1;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end

