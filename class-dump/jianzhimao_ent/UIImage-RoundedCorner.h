//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (RoundedCorner)
+ (struct JMRadius)transformationJMRadius:(struct JMRadius)arg1 size:(struct CGSize)arg2 boardWidth:(double)arg3;
+ (id)jm_imageWithRoundedCornersAndSize:(struct CGSize)arg1 JMRadius:(struct JMRadius)arg2 borderColor:(id)arg3 borderWidth:(double)arg4 backgroundColor:(id)arg5 backgroundImage:(id)arg6 withContentMode:(long long)arg7;
+ (id)jm_imageWithRoundedCornersAndSize:(struct CGSize)arg1 CornerRadius:(double)arg2 borderColor:(id)arg3 borderWidth:(double)arg4 backgroundColor:(id)arg5 backgroundImage:(id)arg6 withContentMode:(long long)arg7;
+ (id)jm_imageWithRoundedCornersAndSize:(struct CGSize)arg1 andCornerRadius:(double)arg2 andColor:(id)arg3;
+ (id)jm_imageWithRoundedCornersAndSize:(struct CGSize)arg1 CornerRadius:(double)arg2 borderColor:(id)arg3 borderWidth:(double)arg4;
- (struct CGRect)convertRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (void)drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;
- (id)scaleToSize:(struct CGSize)arg1 withContentMode:(long long)arg2 backgroundColor:(id)arg3;
- (id)jm_imageWithRoundedCornersAndSize:(struct CGSize)arg1 andCornerRadius:(double)arg2 withContentMode:(long long)arg3;
- (id)jm_imageWithRoundedCornersAndSize:(struct CGSize)arg1 andCornerRadius:(double)arg2;
@end
