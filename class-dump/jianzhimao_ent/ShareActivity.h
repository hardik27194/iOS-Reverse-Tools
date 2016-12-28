//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "UIDocumentInteractionControllerDelegate.h"

@class NSString, NSURL, UIBarButtonItem, UIDocumentInteractionController, UIView;

@interface ShareActivity : UIActivity <UIDocumentInteractionControllerDelegate>
{
    id _superViewController;
    NSURL *_fileURL;
    UIBarButtonItem *_barButtonItem;
    UIView *_superView;
    UIDocumentInteractionController *_docController;
    struct CGRect _rect;
}

@property(retain, nonatomic) UIDocumentInteractionController *docController; // @synthesize docController=_docController;
@property(retain, nonatomic) UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) id superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)openDocumentInteractionController;
- (id)UTIForURL:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithView:(id)arg1 andBarButtonItem:(id)arg2;
- (id)initWithView:(id)arg1 andRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
