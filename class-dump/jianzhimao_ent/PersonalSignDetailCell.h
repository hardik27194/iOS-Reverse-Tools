//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonCellBase.h"

@class UIButton, UIImageView, UILabel;

@interface PersonalSignDetailCell : CommonCellBase
{
    UIImageView *_icon;
    UILabel *_lblTime;
    UILabel *_lblAddress;
    UILabel *_lblSignType;
    UIButton *_btnSign;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak UIButton *btnSign; // @synthesize btnSign=_btnSign;
@property(nonatomic) __weak UILabel *lblSignType; // @synthesize lblSignType=_lblSignType;
@property(nonatomic) __weak UILabel *lblAddress; // @synthesize lblAddress=_lblAddress;
@property(nonatomic) __weak UILabel *lblTime; // @synthesize lblTime=_lblTime;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)awakeFromNib;

@end

