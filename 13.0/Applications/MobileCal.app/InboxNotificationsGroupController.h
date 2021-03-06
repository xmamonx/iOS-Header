//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CalendarMessageCellDelegate-Protocol.h"
#import "InboxTableViewGroupController-Protocol.h"

@class CalendarModel, EKUIRecurrenceAlertController, NSMutableArray, NSMutableDictionary, NSString;
@protocol InboxTableViewGroupControllerDelegate, OS_dispatch_queue;

@interface InboxNotificationsGroupController : NSObject <CalendarMessageCellDelegate, InboxTableViewGroupController>
{
    CalendarModel *_model;
    NSMutableArray *_notificationReferences;
    NSMutableArray *_sharedCalendarInvitationsReplyPending;
    NSMutableDictionary *_pendingComments;
    NSMutableDictionary *_conflictInfo;
    NSMutableDictionary *_organizerNames;
    NSObject<OS_dispatch_queue> *_prefetchConflictsQueue;
    NSObject<OS_dispatch_queue> *_conflictsQueue;
    NSObject<OS_dispatch_queue> *_prefetchNamesQueue;
    NSObject<OS_dispatch_queue> *_namesQueue;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    _Bool _needsRefresh;
    _Bool _visible;
    id <InboxTableViewGroupControllerDelegate> _delegate;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <InboxTableViewGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (void).cxx_destruct;
- (id)_eventForIndexPath:(id)arg1;
- (id)filteredNotificationsFromArray:(id)arg1;
- (id)tableView;
- (void)_notificationsChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (id)noContentStringForInboxTableView:(id)arg1;
- (void)messageCell:(id)arg1 committedComment:(id)arg2;
- (id)eventStoreForCell:(id)arg1;
- (void)performAction:(long long)arg1 forCell:(id)arg2 ifCancelled:(CDUnknownBlockType)arg3;
- (void)_savePendingComments;
- (void)_saveStatus:(long long)arg1 forEventInvitationNotification:(id)arg2 commit:(_Bool)arg3;
- (id)titleForHeader;
- (id)eventForRow:(long long)arg1;
- (_Bool)canSelectRow:(long long)arg1;
- (void)rowSelected:(long long)arg1;
- (double)estimatedHeightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1 allowAsyncLoading:(_Bool)arg2;
- (long long)numberOfRows;
- (_Bool)hasRows;
- (void)refreshIfNeeded;
- (void)prefetchRow:(long long)arg1;
- (void)inboxWillDismiss;
- (void)prefetchConflictInfo;
- (id)conflictInfoForNotification:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

