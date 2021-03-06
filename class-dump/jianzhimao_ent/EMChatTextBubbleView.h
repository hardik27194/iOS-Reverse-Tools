//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EMChatBaseBubbleView.h"

@class NSArray, NSDataDetector, UILabel;

@interface EMChatTextBubbleView : EMChatBaseBubbleView
{
    NSDataDetector *_detector;
    NSArray *_urlMatches;
    UILabel *_textLabel;
}

+ (long long)textLabelLineBreakModel;
+ (double)lineSpacing;
+ (id)textLabelFont;
+ (double)heightForBubbleWithObject:(id)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)bubbleViewPressed:(id)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (void)highlightLinksWithIndex:(long long)arg1;
- (_Bool)isIndex:(long long)arg1 inRange:(struct _NSRange)arg2;
- (void)setModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

