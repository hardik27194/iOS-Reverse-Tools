//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITextViewDelegate.h"

@class JWTextView, JobBaseBean, NSString, UILabel;

@interface CancelReasonViewController : BaseNavViewController <UITextViewDelegate>
{
    JobBaseBean *_jobBean;
    id <CancleReasonDelegate> _delegate;
    JWTextView *_contentTextView;
    UILabel *_letterCountLabel;
}

@property(nonatomic) __weak UILabel *letterCountLabel; // @synthesize letterCountLabel=_letterCountLabel;
@property(nonatomic) __weak JWTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak id <CancleReasonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JobBaseBean *jobBean; // @synthesize jobBean=_jobBean;
- (void).cxx_destruct;
- (void)notification;
- (void)requestReject:(id)arg1;
- (void)submitContent;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

