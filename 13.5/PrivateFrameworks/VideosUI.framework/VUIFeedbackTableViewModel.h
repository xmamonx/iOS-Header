//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFeedbackTableViewModel : NSObject
{
    VUILabel *_headerTextView;
    NSArray *_descriptionTextView;
}

+ (id)descriptionTextViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *headerTextView; // @synthesize headerTextView=_headerTextView;

@end

