//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "BTGContextMenuDelegate.h"
#import "UIAlertViewDelegate.h"

@class BTGAssistiveButton, BTGContextMenu, BTGProgressView, NSString, UIPanGestureRecognizer;

@interface BTGAssistiveButtonContainer : UIWindow <BTGContextMenuDelegate, UIAlertViewDelegate>
{
    _Bool _isOpen;
    BTGAssistiveButton *_assistiveButton;
    BTGContextMenu *_contextMenu;
    UIPanGestureRecognizer *_panGesture;
    BTGProgressView *_progressView;
    struct CGPoint _originPoint;
}

@property(retain, nonatomic) BTGProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) BTGContextMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) BTGAssistiveButton *assistiveButton; // @synthesize assistiveButton=_assistiveButton;
- (void).cxx_destruct;
- (void)disappear;
- (void)appear;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)renewRootViewController;
- (void)setProgress:(double)arg1;
- (void)stopProgress;
- (void)startProgress;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dismissActionSheet;
- (void)contextMenuDidDismiss:(id)arg1;
- (void)contextMenuWillDismiss:(id)arg1;
- (void)contextMenuDidShow:(id)arg1;
- (void)contextMenuWillShow:(id)arg1;
- (void)contextMenu:(id)arg1 didLongPressAtItem:(id)arg2;
- (void)contextMenu:(id)arg1 didClickAtItem:(id)arg2;
- (void)contextMenu:(id)arg1 willLongPressAtItem:(id)arg2;
- (void)contextMenu:(id)arg1 willClickAtItem:(id)arg2;
- (struct CGPoint)calculatePosition;
- (void)handleGesture:(id)arg1;
- (void)loadContextMenu:(id)arg1;
- (void)toggleContextMenu;
- (void)refreshPosition:(_Bool)arg1;
- (void)refreshPosition;
- (void)resetPosition;
- (void)resetTransform;
- (void)toggleAssistiveButton;
- (struct CGPoint)fixCenterPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)fixAssistiveButtonTransform;
- (void)toggleAssistive;
- (void)onAssistiveClick:(id)arg1;
- (void)reset;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

