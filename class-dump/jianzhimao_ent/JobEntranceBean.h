//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface JobEntranceBean : ObjectBeanBase
{
    NSString *_icon;
    NSString *_title;
    NSString *_remark;
    long long _action;
    NSString *_about;
    long long _surplus;
    long long _total_count;
}

@property(nonatomic) long long total_count; // @synthesize total_count=_total_count;
@property(nonatomic) long long surplus; // @synthesize surplus=_surplus;
@property(copy, nonatomic) NSString *about; // @synthesize about=_about;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

