//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface JW_UILabel : UILabel
{
    long long _verticalTextAlignment;
    struct UIEdgeInsets _textEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets textEdgeInsets; // @synthesize textEdgeInsets=_textEdgeInsets;
@property(nonatomic) long long verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
- (void)initialize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
