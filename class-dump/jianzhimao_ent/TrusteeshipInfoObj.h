//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSArray, NSString;

@interface TrusteeshipInfoObj : ObjectBeanBase
{
    NSString *_address;
    NSString *_area;
    NSString *_city;
    NSString *_job_type;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_money;
    NSString *_province;
    NSString *_remark;
    NSString *_admin_remark;
    NSArray *_requirement;
    NSString *_resume_num;
    NSString *_scheme_id;
    NSString *_sumDays;
    NSString *_trust_name;
    NSString *_trusteeship_id;
    NSString *_workDays;
    NSString *_salary;
    NSString *_salary_unit;
}

@property(copy, nonatomic) NSString *salary_unit; // @synthesize salary_unit=_salary_unit;
@property(copy, nonatomic) NSString *salary; // @synthesize salary=_salary;
@property(retain, nonatomic) NSString *workDays; // @synthesize workDays=_workDays;
@property(retain, nonatomic) NSString *trusteeship_id; // @synthesize trusteeship_id=_trusteeship_id;
@property(retain, nonatomic) NSString *trust_name; // @synthesize trust_name=_trust_name;
@property(retain, nonatomic) NSString *sumDays; // @synthesize sumDays=_sumDays;
@property(retain, nonatomic) NSString *scheme_id; // @synthesize scheme_id=_scheme_id;
@property(retain, nonatomic) NSString *resume_num; // @synthesize resume_num=_resume_num;
@property(retain, nonatomic) NSArray *requirement; // @synthesize requirement=_requirement;
@property(retain, nonatomic) NSString *admin_remark; // @synthesize admin_remark=_admin_remark;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *job_type; // @synthesize job_type=_job_type;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;

@end

