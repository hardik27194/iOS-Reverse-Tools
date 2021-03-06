//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResumeManagerCell.h"

@class NSString, UIImageView, UILabel;

@interface ResumeManagerCancleCell : ResumeManagerCell
{
    NSString *_sex;
    unsigned long long _cellType;
    UIImageView *_statusBgView;
    UILabel *_statusLab;
    UILabel *_nameLab;
    UIImageView *_sexView;
    UILabel *_ageLab;
    UILabel *_heightLab;
    UILabel *_contentLab;
    UILabel *_signTotalCountLab;
    UIImageView *_logoView;
}

@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *signTotalCountLab; // @synthesize signTotalCountLab=_signTotalCountLab;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UILabel *heightLab; // @synthesize heightLab=_heightLab;
@property(retain, nonatomic) UILabel *ageLab; // @synthesize ageLab=_ageLab;
@property(retain, nonatomic) UIImageView *sexView; // @synthesize sexView=_sexView;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UILabel *statusLab; // @synthesize statusLab=_statusLab;
@property(retain, nonatomic) UIImageView *statusBgView; // @synthesize statusBgView=_statusBgView;
- (void).cxx_destruct;
- (void)setIsRead:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSex:(id)arg1;
- (void)setResumeManagerCancleCellType:(unsigned long long)arg1;
- (void)buildView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

