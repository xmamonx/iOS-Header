//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityPDFElement : UIAccessibilityElement
{
    long long _page;
    long long _pageCount;
}

@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long page; // @synthesize page=_page;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)frame;

@end

