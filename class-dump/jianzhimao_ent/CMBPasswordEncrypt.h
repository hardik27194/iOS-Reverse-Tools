//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMBPasswordEncrypt : NSObject
{
}

+ (void)tt;
+ (struct __SecKey *)getPublicKeyRef;
+ (struct __SecKey *)getKeyRefWithPersistentKeyRef:(void *)arg1;
+ (struct __SecKey *)addPeerPublicKey:(id)arg1 keyBits:(id)arg2;
+ (id)encryptLongData:(id)arg1;
+ (id)encryptData:(id)arg1;
+ (id)getPubkey;
+ (id)encrypt:(id)arg1 withClientNo:(id)arg2;
+ (id)encrypt:(id)arg1;
+ (char *)stringFromHexString:(id)arg1;
+ (id)error;

@end

