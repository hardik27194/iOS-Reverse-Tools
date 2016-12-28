//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface UrlParser : NSObject
{
    NSMutableArray *mutableQueries;
    NSString *orginateUrlWithoutQuery;
}

@property(retain, nonatomic) NSArray *queries; // @synthesize queries=mutableQueries;
- (void).cxx_destruct;
- (id)allQueryValuesWithKeys;
- (id)urlWithQuery;
- (id)urlWithoutQuery;
- (void)appendQuery:(id)arg1 value:(id)arg2;
- (_Bool)removeQuery:(id)arg1;
- (id)valueForQueryName:(id)arg1;
- (id)queryForName:(id)arg1;
- (id)initWithUrlString:(id)arg1;

@end
