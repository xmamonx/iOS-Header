//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKNavigatorViewController.h>

#import <OpusKit/UIPageViewControllerDataSource-Protocol.h>
#import <OpusKit/UIPageViewControllerDelegate-Protocol.h>

@class NSArray, NSString, UIPageViewController;

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>
{
    UIPageViewController *_pagesViewController;
    NSArray *_orderedPagesNames;
    long long _transitionStyle;
    long long _navigationOrientation;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gotoNext:(id)arg1;
- (void)gotoPrevious:(id)arg1;
- (id)nameForPageAfterPage:(id)arg1;
- (id)nameForPageBeforePage:(id)arg1;
- (_Bool)prepareForUnload;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForDisplay;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)prepareAdjacentPageViewControllers;
- (void)updatePagesViewController;
- (void)reloadPagesViewController;
- (void)setSettingOrientation:(unsigned long long)arg1;
- (void)setSettingTransition:(unsigned long long)arg1;
- (void)applySettings;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

