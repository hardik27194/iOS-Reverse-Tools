//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JWLifecycleMonitor : NSObject
{
}

+ (id)sharedInstance;
- (void)logWithDealloc:(id)arg1;
- (void)logWithInit:(id)arg1;
- (void)monitorWithClass:(Class)arg1 selector:(SEL)arg2 eventHandler:(CDUnknownBlockType)arg3;
- (void)lifecycleMonitor;
- (id)sharedInstance;

@end

