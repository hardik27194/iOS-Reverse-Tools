//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JW_UILabel, NSString, UILabel;

@interface LeaderPush_OtherInfoCell : UITableViewCell
{
    NSString *_titleStr;
    NSString *_contentStr;
    UILabel *_customTitleLabel;
    JW_UILabel *_contentLabel;
}

@property(nonatomic) __weak JW_UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(copy, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
