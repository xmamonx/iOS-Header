//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXMomentShareStatusPresentation;
@protocol PXCMMFooterViewModelActionDelegate;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver>
{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXCMMFooterViewModelActionDelegate> _actionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXCMMFooterViewModelActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateAllProperties;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

