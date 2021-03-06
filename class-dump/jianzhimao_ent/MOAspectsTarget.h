//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface MOAspectsTarget : NSObject
{
    Class _class;
    SEL _selector;
    long long _methodType;
    NSMutableArray *_beforeSelectors;
    NSMutableArray *_afterSelectors;
    NSMutableDictionary *_selectorClassInfo;
    struct _MOAspectsHookRange _hookRange;
}

@property(retain, nonatomic) NSMutableDictionary *selectorClassInfo; // @synthesize selectorClassInfo=_selectorClassInfo;
@property(retain, nonatomic) NSMutableArray *afterSelectors; // @synthesize afterSelectors=_afterSelectors;
@property(retain, nonatomic) NSMutableArray *beforeSelectors; // @synthesize beforeSelectors=_beforeSelectors;
@property(readonly, nonatomic) struct _MOAspectsHookRange hookRange; // @synthesize hookRange=_hookRange;
@property(readonly, nonatomic) long long methodType; // @synthesize methodType=_methodType;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) Class class; // @synthesize class=_class;
- (void).cxx_destruct;
- (Class)classForSelector:(SEL)arg1;
- (void)addAfterSelector:(SEL)arg1 forClass:(Class)arg2;
- (void)addBeforeSelector:(SEL)arg1 forClass:(Class)arg2;
- (id)initWithClass:(Class)arg1 mehodType:(long long)arg2 methodSelector:(SEL)arg3 hookRange:(struct _MOAspectsHookRange)arg4;

@end

