//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "IChatManagerDelegate.h"
#import "IDeviceManagerDelegate.h"
#import "SRRefreshDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ConversationBean, NSDate, NSIndexPath, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, RemoteNotificationModel, SRRefreshView, UIMenuController, UIMenuItem, UITableView;

@interface MsgBaseViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SRRefreshDelegate, IChatManagerDelegate, IDeviceManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSIndexPath *_longPressIndexPath;
    UIMenuController *_menuController;
    UIMenuItem *_copyMenuItem;
    UIMenuItem *_deleteMenuItem;
    _Bool _isScrollToBottom;
    _Bool _isPlayingAudio;
    RemoteNotificationModel *_remoteModel;
    NSDate *_chatTagDate;
    NSMutableArray *_messages;
    long long _conversationType;
    ConversationBean *_conversationBean;
    UITableView *_tableView;
    SRRefreshView *_slimeView;
    NSMutableArray *_dataSource;
}

@property(nonatomic) _Bool isPlayingAudio; // @synthesize isPlayingAudio=_isPlayingAudio;
@property(nonatomic) _Bool isScrollToBottom; // @synthesize isScrollToBottom=_isScrollToBottom;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SRRefreshView *slimeView; // @synthesize slimeView=_slimeView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ConversationBean *conversationBean; // @synthesize conversationBean=_conversationBean;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSDate *chatTagDate; // @synthesize chatTagDate=_chatTagDate;
@property(retain, nonatomic) RemoteNotificationModel *remoteModel; // @synthesize remoteModel=_remoteModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)applicationDidEnterBackground;
- (void)scrollViewToBottom:(_Bool)arg1;
- (void)removeAllMessages:(id)arg1;
- (void)deleteMenuAction:(id)arg1;
- (void)copyMenuAction:(id)arg1;
- (void)showMenuViewController:(id)arg1 andIndexPath:(id)arg2 messageType:(long long)arg3;
- (void)handleLongPress:(id)arg1;
- (void)loadMoreMessagesFrom:(long long)arg1 count:(long long)arg2 append:(_Bool)arg3;
- (id)addChatToMessage:(id)arg1;
- (void)addChatDataToMessage:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)slimeRefreshStartRefresh:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (id)formatMessages:(id)arg1;
- (id)formatMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)configLocalMessage:(long long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

