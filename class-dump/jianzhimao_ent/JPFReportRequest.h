//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary;

@interface JPFReportRequest : NSObject
{
    NSMutableDictionary *_reportBody;
    _Bool _isSubpackage;
    unsigned char _controlFlag;
    _Bool _IsSendLock;
    _Bool _isResend;
    NSMutableData *_packetValueData;
    unsigned long long _reportFlag;
    unsigned long long _reportType;
    double _reportTimeStamp;
    NSMutableArray *_reportContents;
    NSMutableArray *_realContents;
    NSDictionary *_content;
    CDUnknownBlockType _responseBlock;
    NSData *_bodyData;
    long long _reSendTimerIndex;
}

@property(nonatomic) _Bool isResend; // @synthesize isResend=_isResend;
@property(nonatomic) long long reSendTimerIndex; // @synthesize reSendTimerIndex=_reSendTimerIndex;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) NSMutableArray *realContents; // @synthesize realContents=_realContents;
@property(retain, nonatomic) NSMutableArray *reportContents; // @synthesize reportContents=_reportContents;
@property(nonatomic) double reportTimeStamp; // @synthesize reportTimeStamp=_reportTimeStamp;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) unsigned long long reportFlag; // @synthesize reportFlag=_reportFlag;
@property(nonatomic) _Bool IsSendLock; // @synthesize IsSendLock=_IsSendLock;
@property(nonatomic) unsigned char controlFlag; // @synthesize controlFlag=_controlFlag;
@property(retain, nonatomic) NSMutableData *packetValueData; // @synthesize packetValueData=_packetValueData;
@property(readonly, nonatomic) _Bool isSubpackage; // @synthesize isSubpackage=_isSubpackage;
- (void).cxx_destruct;
- (id)p_generateRequestHead;
- (id)generateReportRequest;
- (void)send;
- (_Bool)startDelaySend;
@property(nonatomic) _Bool isSendRequestLock; // @dynamic isSendRequestLock;
- (_Bool)cacheRequestRequired;
- (_Bool)loginRequired;
- (_Bool)validRequired;
- (_Bool)packData;
- (_Bool)compareDeviceInfoFrom:(id)arg1 To:(id)arg2;
- (id)generateSessionId;
- (void)p_addHistoryFile;
- (unsigned long long)p_calculateCurrentSize;
- (void)p_addContents;
- (void)p_dropContentBeyondMaxSize;
- (id)packetData;
- (void)setResponseBlock;
- (void)dealloc;
- (id)init;

@end

