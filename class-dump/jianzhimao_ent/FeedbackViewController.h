//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class JWTextView, NSString, UIButton, UILabel, UITextField, UIView;

@interface FeedbackViewController : BaseNavViewController <UITextViewDelegate, UITextFieldDelegate>
{
    _Bool _isSelectionViewsShowing;
    UITextField *_emailTF;
    UILabel *_contentCountLabel;
    JWTextView *_feedbackContentTV;
    UIView *_contentView;
    UIButton *_feedbackTypeBtn;
    UIView *_backgroundView;
    UIButton *_arrowBtn;
    double _selectionViewsOriginalHeight;
    UIView *_selectionViews;
    long long _lastSelectedTag;
    long long _currentSelectedTag;
}

@property(nonatomic) long long currentSelectedTag; // @synthesize currentSelectedTag=_currentSelectedTag;
@property(nonatomic) long long lastSelectedTag; // @synthesize lastSelectedTag=_lastSelectedTag;
@property(retain, nonatomic) UIView *selectionViews; // @synthesize selectionViews=_selectionViews;
@property(nonatomic) double selectionViewsOriginalHeight; // @synthesize selectionViewsOriginalHeight=_selectionViewsOriginalHeight;
@property(nonatomic) _Bool isSelectionViewsShowing; // @synthesize isSelectionViewsShowing=_isSelectionViewsShowing;
@property(nonatomic) __weak UIButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIButton *feedbackTypeBtn; // @synthesize feedbackTypeBtn=_feedbackTypeBtn;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak JWTextView *feedbackContentTV; // @synthesize feedbackContentTV=_feedbackContentTV;
@property(nonatomic) __weak UILabel *contentCountLabel; // @synthesize contentCountLabel=_contentCountLabel;
@property(nonatomic) __weak UITextField *emailTF; // @synthesize emailTF=_emailTF;
- (void).cxx_destruct;
- (void)hideFeedbackTypeSelection;
- (void)showFeedbackTypeSelection;
- (void)feedbackTypeBtnClick:(id)arg1;
- (void)sendFeedBack:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)selectionButtonClick:(id)arg1;
- (id)singleSelectionButtonWithIndex:(long long)arg1 name:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

